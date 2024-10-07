import matplotlib.pyplot as plt
import numpy as np
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

#  ***************************************************************************************************

# Extracted Magic Formula coefficients for longitudinal (Fx) and lateral (Fy) forces
# PCX1 = 1.66628
# PDX1 = 1.72645
# PDX2 = -0.278479
# PDX3 = 6.54553
# PEX1 = -5.04761e-06
# PEX2 = 0.463966
# PEX3 = -0.0359398
# PEX4 = 0.38592
# PKX1 = 64.6315
# PKX2 = -0.95099
# PKX3 = 0.015721
# PHX1 = 0.00060979
# PHX2 = -0.000659181

# PCY1 = 1.5496
# PDY1 = 1.70839
# PDY2 = -0.354062
# PDY3 = -0.354062

def calculate_slip_ratio(speed, omega, tire_radius):
    """Calculate slip ratio (kappa) given speed, wheel angular velocity (omega), and tire radius."""
    kappa = (tire_radius * omega - speed) / max(speed, tire_radius * omega)
    return kappa

def magic_formula_longitudinal(slip_ratio, camber, load, tir_param):
    # Normalize load (Fz)
    Fz = load
    # Magic Formula for longitudinal force
    Cx = tir_param["PCX1"]
    Dx = (tir_param["PDX1"] + tir_param["PDX2"] * Fz) * (1 + tir_param["PDX3"] * camber**2)
    Kx = Fz * (tir_param["PKX1"] + tir_param["PKX2"] * Fz) * np.exp(tir_param["PKX3"] * Fz)
    Ex = (tir_param["PEX1"] + tir_param["PEX2"] * Fz + tir_param["PEX3"] * Fz**2) * (1 + tir_param["PEX4"] * slip_ratio)
    Sx = slip_ratio + (tir_param["PHX1"] + tir_param["PHX2"] * Fz)
    Fx = Dx * np.sin(Cx * np.arctan(Kx * Sx - Ex * (Kx * Sx - np.arctan(Kx * Sx))))
    return Fx

def magic_formula_lateral(slip_angle, camber, load, tir_param):
    # Normalize load (Fz)
    Fz = load
    # Magic Formula for lateral force
    Cy = tir_param["PCY1"]
    Dy = tir_param["PDY1"] + tir_param["PDY2"] * Fz + tir_param["PDY3"] * camber
    Fy = Dy * np.sin(Cy * np.arctan(slip_angle))
    return Fy

def non_linear_magic_formula_longitudinal(slip_ratio, camber, load, tir_param):
    # Normalize load (Fz)
    Fz = load
    # Magic Formula for longitudinal force
    Cx = tir_param["PCX1"]
    Dx = (tir_param["PDX1"] + tir_param["PDX2"] * Fz) * (1 + tir_param["PDX3"] * camber**2)
    Kx = Fz * (tir_param["PKX1"] + tir_param["PKX2"] * Fz) * np.exp(tir_param["PKX3"] * Fz)
    Ex = (tir_param["PEX1"] + tir_param["PEX2"] * Fz + tir_param["PEX3"] * Fz**2) * (1 + tir_param["PEX4"] * slip_ratio)
    Sx = slip_ratio + (tir_param["PHX1"] + tir_param["PHX2"] * Fz)

    Fx = Dx * np.sin(Cx * np.arctan(Kx * Sx - Ex * (Kx * Sx - np.arctan(Kx * Sx))))
    return Fx

# def magic_formula_lateral(slip_angle, load, PCY1, PDY1, PDY2):
def non_linear_magic_formula_lateral(slip_angle, camber, load, tir_param):
    # Normalize load (Fz)
    Fz = load
    # Magic Formula for lateral force
    Cy = tir_param["PCY1"]
    Dy = tir_param["PDY1"] + tir_param["PDY2"] * Fz + tir_param["PDY3"] * camber
    Ky = Fz * (tir_param["PKY1"] + tir_param["PKY2"] * Fz) * np.exp(tir_param["PKY3"] * Fz)
    Ey = (tir_param["PEY1"] + tir_param["PEY2"] * Fz + tir_param["PEY3"] * Fz**2) * (tir_param["PEY4"] + tir_param["PEY5"] * camber)

    Fy = Dy * np.sin(Cy * np.arctan(Ky * slip_angle - Ey * (Ky * slip_angle - np.arctan(Ky * slip_angle))))
    return Fy

def combine_forces(slip_angle, slip_ratio, camber, load, RR_param):
    Fx = non_linear_magic_formula_longitudinal(slip_ratio, camber, load, RR_param)
    Fy = non_linear_magic_formula_lateral(slip_angle, camber, load, RR_param)

    # Magnitude of the resultant force
    resultant_force = np.sqrt(Fx**2 + Fy**2)
    # Angle (in radians) of the resultant force relative to the longitudinal direction
    theta = np.arctan2(Fy, Fx)
    return resultant_force, np.degrees(theta)  # Returning angle in degrees

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

