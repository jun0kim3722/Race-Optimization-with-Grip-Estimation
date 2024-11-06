import matplotlib.pyplot as plt
import numpy as np
from copy import deepcopy

import pdb


#  *********************************** Plot functions ************************************************
def plot_load_diff(tir_param, slip_angle=0, slip_ratio=0, camber=0):
    grip_data = []
    for load in np.arange(100, 14000, 100):
        friction_force, direction = combine_forces(slip_angle, slip_ratio, camber, load, tir_param)
        grip_data.append([load, friction_force])

    grip_data = np.array(grip_data)
    max_grip = np.argmax(grip_data[:,1])
    plt.figure(figsize=(20,20))
    plt.title("Force VS Load", fontsize='40')
    plt.xlabel('Load (N)', fontsize='30')
    plt.ylabel('Force (N)', fontsize='30')
    plt.plot(grip_data[:,0], grip_data[:,1])
    plt.plot(grip_data[max_grip,0], grip_data[max_grip,1], 'o', color='r')
    plt.show()

def plot_slip_angle_diff(tir_param, camber=0, load=100):
    grip_data = []
    for slip_angle in np.arange(-30, 30, 0.1):
        friction_force = magic_formula_lateral(slip_angle, camber, load, tir_param)
        grip_data.append([slip_angle, friction_force])

    grip_data = np.array(grip_data)
    max_grip = np.argmax(grip_data[:,1])
    plt.figure(figsize=(20,20))
    plt.title("Force VS Slip angle", fontsize='40')
    plt.xlabel('Slip angle (degree)', fontsize='30')
    plt.ylabel('Force (N)', fontsize='30')
    plt.plot(grip_data[:,0], grip_data[:,1])
    plt.plot(grip_data[max_grip,0], grip_data[max_grip,1], 'o', color='r')
    plt.show()

def plot_slip_angle_diff(tir_param, camber=0, load=100):
    grip_data = []
    for slip_ratio in np.arange(0, 1, 0.01):
        friction_force = magic_formula_longitudinal(slip_ratio, camber, load, tir_param)
        grip_data.append([slip_ratio, friction_force])

    grip_data = np.array(grip_data)
    max_grip = np.argmax(grip_data[:,1])
    plt.figure(figsize=(20,20))
    plt.title("Force VS Slip ratio", fontsize='40')
    plt.xlabel('Slip ratio', fontsize='30')
    plt.ylabel('Force (N)', fontsize='30')
    plt.plot(grip_data[:,0], grip_data[:,1])
    plt.plot(grip_data[max_grip,0], grip_data[max_grip,1], 'o', color='r')
    plt.show()

def plot_camber_diff(tir_param, slip_angle=0, slip_ratio=0, load=100):
    grip_data = []
    for camber in np.arange(-0.087266, 0.087266, 0.001):
        friction_force, direction = combine_forces(slip_angle, slip_ratio, camber, load, tir_param)
        grip_data.append([camber, friction_force])

    grip_data = np.array(grip_data)
    max_grip = np.argmax(grip_data[:,1])
    plt.figure(figsize=(20,20))
    plt.title("Force VS Camber", fontsize='40')
    plt.xlabel('Camber (degree)', fontsize='30')
    plt.ylabel('Force (N)', fontsize='30')
    plt.plot(grip_data[:,0], grip_data[:,1])
    plt.plot(grip_data[max_grip,0], grip_data[max_grip,1], 'o', color='r')
    plt.show()

if __name__ == "__main__":
    # Load tire params
    LF_param = np.load("assets/LF.npy", allow_pickle=True)[0]
    RF_param = np.load("assets/RF.npy", allow_pickle=True)[0]
    LR_param = np.load("assets/LR.npy", allow_pickle=True)[0]
    RR_param = np.load("assets/RR.npy", allow_pickle=True)[0]

    # Example test inputs
    slip_angle = 5.0  # in degrees
    slip_ratio = 0.1  # slip ratio (dimensionless)
    camber = 2.0      # in degrees
    load = 4000       # in Newtons (N)

    # Calculate longitudinal and lateral forces
    # Fx = magic_formula_longitudinal(slip_ratio, camber, load, RR_param)
    # Fy = magic_formula_lateral(slip_angle, load, RR_param)
    
    # Plot graph
    plot_load_diff(RR_param)
    plot_slip_angle_diff(RR_param)
    plot_camber_diff(RR_param)

