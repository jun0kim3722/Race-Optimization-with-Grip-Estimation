#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from raptor_dbw_msgs.msg import WheelSpeedReport
from deep_orange_msgs.msg import TireReport
from nav_msgs.msg import Odometry
from std_msgs.msg import String
import numpy as np
from scipy.spatial.transform import Rotation as R
import matplotlib.pyplot as plt
import math
import json
import sys

from .tire_model import calculate_friction_coefficients
import configparser

# import TUM friction map codes
from .TUM_code.friction_map_interface import FrictionMapInterface

class Firction_map(Node):
    def __init__(self, tpamap_file, tpadata_file,
                 tir_file="/ROEG/roeg_ws/src/roeg/roeg/assets/tir_param_advanced.ini",
                 vehicle_file="/ROEG/roeg_ws/src/roeg/roeg/assets/vehicle_info.ini"):
        
        super().__init__('friction_reading_publisher')
        self.publisher_ = self.create_publisher(String, 'friction_data', 10)
        self.timer = self.create_timer(3.0, self.publish_data)

        self.fl_speed = 0.0
        self.fr_speed = 0.0
        self.rl_speed = 0.0
        self.rr_speed = 0.0

        self.fl_load = 3112.0
        self.fr_load = 3112.0
        self.rl_load = 3112.0
        self.rr_load = 3112.0

        self.fl_travel = 0.0
        self.fr_travel = 0.0
        self.rl_travel = 0.0
        self.rr_travel = 0.0

        self.pos = np.array([0.0, 0.0])
        self.heading = R.from_quat([0.0, 0.0, 0.0, 1.0])
        self.vel = np.array([0.0, 0.0, 0.0])

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
            print("Importing vehicle model")

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
    
    def publish_data(self):
        # publish updated friction data
        list_dict = {key: coeff.tolist() for key, coeff in self.map.tpa_data.items()}
        json_string = json.dumps(list_dict)
        msg = String()
        msg.data = json_string
        self.publisher_.publish(msg)
        self.get_logger().info(f'Friction Map Updated!!!!')

    def get_friction_data(self):
        camber = [0, 0, 0, 0] # temporary untill suspension data is gathered

        # calc friction coefficients
        tir_coef = np.array([
            calculate_friction_coefficients(self.fl_speed, self.fl_load, camber[0], self.pos[0], self.pos[1], self.tir["FL"]),
            calculate_friction_coefficients(self.fr_speed, self.fr_load, camber[1], self.pos[0], self.pos[1], self.tir["FR"]),
            calculate_friction_coefficients(self.rl_speed, self.rl_load, camber[2], self.pos[0], self.pos[1], self.tir["RL"]),
            calculate_friction_coefficients(self.rr_speed, self.rr_load, camber[3], self.pos[0], self.pos[1], self.tir["RR"])
        ])

        if np.isnan(tir_coef).any():
            self.get_logger().warning('Calculated friction coefficient is NaN', skip_first=True)
            return

        # calc tire loctions
        vec = self.heading.apply([1, 0, 0])
        heading_vec = np.array([vec[0], vec[1]])
        norm_vec = np.array([vec[1], -vec[0]])
        tir_pos = np.array([
            ([self.pos[0], self.pos[1]] + self.wb_f * heading_vec) - (0.5 * self.car_width * norm_vec), # FL
            ([self.pos[0], self.pos[1]] + self.wb_f * heading_vec) + (0.5 * self.car_width * norm_vec), # FR
            ([self.pos[0], self.pos[1]] - self.wb_r * heading_vec) - (0.5 * self.car_width * norm_vec), # RL
            ([self.pos[0], self.pos[1]] - self.wb_r * heading_vec) + (0.5 * self.car_width * norm_vec)  # RR
        ])

        self.map.update_friction_coeff(tir_pos, tir_coef)
    
    def pos_callback(self, msg):
        self.pos = np.array([msg.pose.pose.position.x, msg.pose.pose.position.y])
        self.heading = R.from_quat([msg.pose.pose.orientation.x, msg.pose.pose.orientation.y, msg.pose.pose.orientation.z, msg.pose.pose.orientation.w])
        
        self.vel = np.array([msg.twist.twist.linear.x, msg.twist.twist.linear.y, msg.twist.twist.linear.z])
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


def friction_map_plot(map):
    # ------------------------------------------------------------------------------------------------------------------
    # LOAD DATA FROM FILES ---------------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------------------------------------

    print('INFO: Loading friction map data...')

    # load reference line from csv-file
    ref_file = "/ROEG/roeg_ws/src/roeg/roeg/friction_maps/tracks/IMS.csv"
    with open(ref_file, 'r') as fh:
        reftrack = np.genfromtxt(fh, delimiter=',')

    tpamap_loaded = map.tpa_map
    tpadata_loaded = map.tpa_data

    print('INFO: Friction map data loaded successfully!')

    # ------------------------------------------------------------------------------------------------------------------
    # PREPARE DATA FOR PLOTTING ----------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------------------------------------

    print('INFO: Preprocessing friction map data for visualization... (takes some time)')

    # read values from dict
    list_coord = tpamap_loaded.data[tpamap_loaded.indices]

    list_mue = []

    for idx in tpamap_loaded.indices:
        list_mue.append(tpadata_loaded[idx])

    # recalculate stepsize of friction map
    x_stepsize = abs(list_coord[1, 0] - list_coord[0, 0])
    y_stepsize = abs(list_coord[1, 1] - list_coord[0, 1])

    # load coordinate values from friction map
    tree_points = tpamap_loaded.data

    # determine min/max of coordinate values in both directions to set up 2d array for countourf plotting
    x_min = math.floor(np.amin(tree_points[:, 0]))
    x_max = math.ceil(np.amax(tree_points[:, 0]))

    y_min = math.floor(np.amin(tree_points[:, 1]))
    y_max = math.ceil(np.amax(tree_points[:, 1]))

    x_vals = np.arange(x_min - (20.0 * x_stepsize), x_max + (19.0 * x_stepsize), x_stepsize)
    y_vals = np.arange(y_min - (20.0 * y_stepsize), y_max + (19.0 * y_stepsize), y_stepsize)

    # set up an empty 2d array which is then filled wiich corresponding mue values
    z = np.full((y_vals.shape[0], x_vals.shape[0]), fill_value=np.nan)

    # plot 2D array
    for row, mue in zip(list_coord, list_mue):
        index_column = int((row[0] - min(x_vals)) / x_stepsize)
        index_row = int((-row[1] + max(y_vals)) / y_stepsize)

        z[index_row, index_column] = mue

    # ------------------------------------------------------------------------------------------------------------------
    # CREATE PLOT ------------------------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------------------------------------

    print('INFO: Plotting friction map data...')

    plt.figure()

    # set axis limits
    plt.xlim(min(reftrack[:, 0]) - 100.0, max(reftrack[:, 0]) + 100.0)
    plt.ylim(min(reftrack[:, 1]) - 100.0, max(reftrack[:, 1]) + 100.0)

    # plot 2D contour representing the friction data (mue-values)
    plt.contourf(x_vals, np.flipud(y_vals), z)

    # set up plot
    plt.colorbar(label='mue-values')
    plt.title('mue-values of the racetrack')
    plt.xlabel("east in m")
    plt.ylabel("north in m")
    plt.axis('equal')

    plt.show()

def main(args=None):
    """
    Updates friction map coefficient based on vehicle data and tire model calculation

    Args:
        track_name:     Name of the track (list is given under friction_maps/tracks/track_list.txt)
    """
    
    if len(sys.argv) < 2:

        print("****** Track List ******")
        with open("/ROEG/roeg_ws/src/roeg/roeg/friction_maps/tracks/track_list.txt", 'r', encoding='utf-8') as file:
            track_dict = {}
            for i, line in enumerate(file):
                print("{}:".format(i), line.strip())
                track_dict[i] = line[:-1]

        print("\nOther usage: ros2 run roeg get_friction_map <track name>")
        track_id = int(input("Select track #: "))
        track_name = track_dict[track_id]
    else:
        track_name = sys.argv[1]
    
    print("****** Reading {} ******".format(track_name))
    tpamap_file = "/ROEG/roeg_ws/src/roeg/roeg/friction_maps/tpamap/" + track_name + "_tpamap.csv"
    tpadata_file = "/ROEG/roeg_ws/src/roeg/roeg/friction_maps/tpadata/" + track_name + "_tpadata.json"

    rclpy.init(args=args)
    node = Firction_map(tpamap_file, tpadata_file)
    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(node)

    try:
        while rclpy.ok():
            node.get_friction_data() # Call friction_callback directly as fast as possible
            executor.spin_once(timeout_sec=0.001)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()




    # rclpy.init(args=args)
    # friction_map = Firction_map(tpamap_file, tpadata_file)
    # rclpy.spin(friction_map)

    # friction_map.destroy_node()
    # rclpy.shutdown()

if __name__ == '__main__':
    main()