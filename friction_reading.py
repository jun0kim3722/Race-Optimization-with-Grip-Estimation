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
    def __init__(self, tpamap_file, tpadata_file, tir_file="assets/tir_param_advanced.ini"):
        super().__init__('friction_reading_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(1.0, self.friction_callback)

        # setup friction map and tire model
        self.map = FrictionMapInterface(tpamap_file, tpadata_file)
        parser = configparser.ConfigParser()
        self.tir = {}
        if not parser.read(tir_file):
            raise ValueError('Specified config file does not exist!')
        else:
            print("Importing: ", tir_file)
    
        self.tir["FL"] = json.loads(parser.get('GENERAL_OPTIONS', 'FL'))
        self.tir["FR"] = json.loads(parser.get('GENERAL_OPTIONS', 'FR'))
        self.tir["RL"] = json.loads(parser.get('GENERAL_OPTIONS', 'RL'))
        self.tir["RR"] = json.loads(parser.get('GENERAL_OPTIONS', 'RR'))

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
        camber = [0, 0, 0, 0]
        _, _, mFL = calculate_friction_coefficients(self.fl_speed, self.fl_load, camber[0], self.position.x, self.position.y, self.tir["FL"])
        _, _, mFR = calculate_friction_coefficients(self.fr_speed, self.fr_load, camber[0], self.position.x, self.position.y, self.tir["FR"])
        _, _, mRL = calculate_friction_coefficients(self.rl_speed, self.rl_load, camber[0], self.position.x, self.position.y, self.tir["RL"])
        _, _, mRR = calculate_friction_coefficients(self.rr_speed, self.rr_load, camber[0], self.position.x, self.position.y, self.tir["RR"])

        

        json_string = json.dumps(self.friction_map)  # Convert dictionary to JSON string
        msg = String()
        msg.data = json_string
        self.publisher_.publish(msg)
        self.get_logger().info(f'Friction Map: {json_string}')
    
    def pos_callback(self, msg):
        self.position = msg.pose.pose.position
        # self.orientation = msg.pose.pose.orientation
        self.vel = msg.twist.twist.linear
        self.get_logger().info(f'Received Odometry: Position(x={self.position.x}, y={self.position.y}, z={self.position.z}), Velocity(x={self.vel.x}, y={self.vel.y}, z={self.vel.z}')
    
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
    f1 = "friction_maps/init_friction_maps/berlin_2018_tpamap.csv"
    f2 = "friction_maps/init_friction_maps/berlin_2018_tpadata.json"
    map = FrictionMapInterface(f1, f2)
    breakpoint()
    # main()