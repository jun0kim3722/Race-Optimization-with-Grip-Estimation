#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from raptor_dbw_msgs.msg import WheelSpeedReport
from raptor_dbw_msgs.msg import TireReport
from nav_msgs.msg import Odometry
from std_msgs.msg import String
import numpy as np
import json
import sys

from tire_model import calculate_friction_coefficients
import configparser

# import TUM friction map codes
from TUM_code.friction_map_interface import FrictionMapInterface

class firction_map(Node):
    def __init__(self, tpamap_file, tpadata_file, tir_file="assets/tir_param_advanced.ini", vehicle_file="assets/vehicle_info.ini"):
        super().__init__('friction_reading_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(1.0, self.friction_callback)

        # setup friction map and tire model
        self.map = FrictionMapInterface(tpamap_file, tpadata_file)
        parser = configparser.ConfigParser()
        self.tir = {}
        if not parser.read(tir_file):
            raise ValueError(f'Tire model config file "{tir_file}" does not exist!!')
        else:
            print("Importing tire model")
    
        self.tir["FL"] = json.loads(parser.get('GENERAL_OPTIONS', 'FL'))
        self.tir["FR"] = json.loads(parser.get('GENERAL_OPTIONS', 'FR'))
        self.tir["RL"] = json.loads(parser.get('GENERAL_OPTIONS', 'RL'))
        self.tir["RR"] = json.loads(parser.get('GENERAL_OPTIONS', 'RR'))

        self.vehicle_info = {}
        if not parser.read(vehicle_file):
            raise ValueError(f'Vehicle info config file "{vehicle_file}" does not exist!!')
        else:
            print("Importing Vehicle model")

        vehicle_info = json.loads(parser.get('GENERAL_OPTIONS', 'vehicle_params'))
        self.wb_f = vehicle_info["wheelbase_front"]
        self.wb_r = vehicle_info["wheelbase_rear"]
        self.car_width = vehicle_info["vehicle_width"]

        self.odom = self.create_subscription(
            Odometry,
            'odometry/global_filtered',
            self.pos_callback,
            10)

        self.omega = self.create_subscription(
            WheelSpeedReport,
            '/raptor_dbw_interface/wheel_speed_report',
            self.wheelSpeed_callback,
            10)
        
        self.load = self.create_subscription(
            TireReport,
            '/raptor_dbw_interface/tire_report',
            self.tireLoad_callback,
            10)
        
        self.suspension_travel = self.create_subscription(
            TireReport,
            '/raptor_dbw_interface/tire_report',
            self.suspensionTravel_callback,
            10)
    
    def friction_callback(self):
        camber = [0, 0, 0, 0] # temporary untill suspension data is gathered

        # calc friction coefficients
        tir_coef = np.array(
            calculate_friction_coefficients(self.fl_speed, self.fl_load, camber[0], self.position.x, self.position.y, self.tir["FL"]),
            calculate_friction_coefficients(self.fr_speed, self.fr_load, camber[0], self.position.x, self.position.y, self.tir["FR"]),
            calculate_friction_coefficients(self.rl_speed, self.rl_load, camber[0], self.position.x, self.position.y, self.tir["RL"]),
            calculate_friction_coefficients(self.rr_speed, self.rr_load, camber[0], self.position.x, self.position.y, self.tir["RR"])
        )

        # calc tire loctions
        heading_vec = np.array()
        norm_vec = np.array()
        tir_pos = np.array(
            [([self.pos.x, self.pos.y] + self.wb_f * heading_vec) - (0.5 * self.car_width * norm_vec)], # FL
            [([self.pos.x, self.pos.y] + self.wb_f * heading_vec) + (0.5 * self.car_width * norm_vec)], # FR
            [([self.pos.x, self.pos.y] - self.wb_r * heading_vec) - (0.5 * self.car_width * norm_vec)], # RL
            [([self.pos.x, self.pos.y] - self.wb_r * heading_vec) + (0.5 * self.car_width * norm_vec)]  # RR
        )

        self.map.update_friction_coeff(tir_pos, tir_coef)

        # publish updated friction data
        json_string = json.dumps(self.map.tpa_data)
        msg = String()
        msg.data = json_string
        self.publisher_.publish(msg)
        self.get_logger().info(f'Friction Map: {json_string}')
    
    def pos_callback(self, msg):
        self.pos = np.array(msg.pose.pose.position.x, msg.pose.pose.position.y)
        self.heading = np.array(msg.pose.pose.orientation.w, msg.pose.pose.orientation.x, msg.pose.pose.orientation.y, msg.pose.pose.orientation.z)
        self.vel = np.array(msg.twist.twist.linear.x, msg.twist.twist.linear.y, msg.twist.twist.linear.z)
        self.get_logger().info(f'Received Odometry: Position(x={self.pos[0]}, y={self.pos[1]}), Velocity(x={self.vel[0]}, y={self.vel[1]}, z={self.vel[2]}')
    
    def wheelSpeed_callback(self, msg):
        self.fl_speed = msg.front_left
        self.fr_speed = msg.front_right
        self.rl_speed = msg.rear_left
        self.rr_speed = msg.rear_right
        self.get_logger().info(f'Received Wheel Speed: front_left={self.fl_speed}, front_right={self.fr_speed}, rear_left={self.rl_speed}, rear_right={self.rr_speed}')
    
    def tireLoad_callback(self, msg):
        self.fl_load = msg.fl_wheel_load
        self.fr_load = msg.fr_wheel_load
        self.rl_load = msg.rl_wheel_load
        self.rr_load = msg.rr_wheel_load
        self.get_logger().info(f'Received Wheel Load: front_left={self.fl_load}, front_right={self.fr_load}, rear_left={self.rl_load}, rear_right={self.rr_load}')

    def suspensionTravel_callback(self, msg):
        self.fl_travel = msg.fl_damper_linear_potentiometer
        self.fr_travel = msg.fr_damper_linear_potentiometer
        self.rl_travel = msg.rl_damper_linear_potentiometer
        self.rr_travel = msg.rr_damper_linear_potentiometer
        self.get_logger().info(f'Received Wheel Travel: front_left={self.fl_travel}, front_right={self.fr_travel}, rear_left={self.rl_travel}, rear_right={self.rr_travel}')
    
def main(args=None):
    """
    Updates friction map coefficient based on vehicle data and tire model calculation

    Args:
        tpa_map:    csv-file containing the map information (x,y-coordinates of each grid cell
                    '*_tpamap.csv' located in inputs folder)
        tpa_data:   json-file containing specific data for each grid cell (e.g. coefficient of friction)
                    '*_tpadata.json' located in inputs folder)
    """
    rclpy.init(args=args)
    if len(sys.argv) < 2:
        print("Usage: ros2 run <package> <node> <tpamap.cvs> <tpadata.json>")
        return
    
    tpadata_file = sys.argv[1]
    tpamap_file = sys.argv[2]

    odometry_speed_subscriber = firction_map(tpamap_file, tpadata_file)
    rclpy.spin(odometry_speed_subscriber)

    odometry_speed_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()