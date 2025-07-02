import json
import configparser
import numpy as np
import matplotlib.pyplot as plt

# *********************************** Plot functions ************************************************
def plot_load_diff(omega, load, camber, vel_x, vel_y, pars):
    plt.figure(figsize=(20,20))
    plt.title("Force VS Load", fontsize='40')
    plt.axis('off')

    coeffs = pars["FL"]
    grip_data_LF = []
    for load in np.arange(100, 14000, 100):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        friction_force = np.sqrt(Fx**2 + Fy**2)
        grip_data_LF.append([load, friction_force])

    grip_data_LF = np.array(grip_data_LF)
    max_grip = np.argmax(grip_data_LF[:,1])
    plt.subplot(2, 2, 1)
    plt.xlabel('Load (N)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_LF[:,0], grip_data_LF[:,1])
    plt.plot(grip_data_LF[max_grip,0], grip_data_LF[max_grip,1], 'o', color='r')

    coeffs = pars["FR"]
    grip_data_RF = []
    for load in np.arange(100, 14000, 100):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        friction_force = np.sqrt(Fx**2 + Fy**2)
        grip_data_RF.append([load, friction_force])

    grip_data_RF = np.array(grip_data_RF)
    max_grip = np.argmax(grip_data_RF[:,1])
    plt.subplot(2, 2, 2)
    plt.xlabel('Load (N)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_RF[:,0], grip_data_RF[:,1])
    plt.plot(grip_data_RF[max_grip,0], grip_data_RF[max_grip,1], 'o', color='r')

    coeffs = pars["RL"]
    grip_data_LR = []
    for load in np.arange(100, 14000, 100):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        friction_force = np.sqrt(Fx**2 + Fy**2)
        grip_data_LR.append([load, friction_force])

    grip_data_LR = np.array(grip_data_LR)
    max_grip = np.argmax(grip_data_LR[:,1])
    plt.subplot(2, 2, 3)
    plt.xlabel('Load (N)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_LR[:,0], grip_data_LR[:,1])
    plt.plot(grip_data_LR[max_grip,0], grip_data_LR[max_grip,1], 'o', color='r')

    coeffs = pars["RR"]
    grip_data_RR = []
    for load in np.arange(100, 14000, 100):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        friction_force = np.sqrt(Fx**2 + Fy**2)
        grip_data_RR.append([load, friction_force])

    grip_data_RR = np.array(grip_data_RR)
    max_grip = np.argmax(grip_data_RR[:,1])
    plt.subplot(2, 2, 4)
    plt.xlabel('Load (N)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_RR[:,0], grip_data_RR[:,1])
    plt.plot(grip_data_RR[max_grip,0], grip_data_RR[max_grip,1], 'o', color='r')

    plt.show()

def plot_slip_angle_diff(omega, load, camber, vel_x, vel_y, pars):
    plt.figure(figsize=(20, 20))
    plt.title("Lateral Force VS Slip Angle", fontsize='40')
    plt.axis('off')

    coeffs = pars["FL"]
    grip_data_LF = []
    for slip_angle in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_lateral(slip_angle, camber=camber, Fz=load, **coeffs["lateral"])
        grip_data_LF.append([slip_angle, friction_force])

    grip_data_LF = np.array(grip_data_LF)
    max_grip = np.argmax(grip_data_LF[:, 1])
    plt.subplot(2, 2, 1)
    plt.xlabel('Slip Angle (radians)', fontsize='15')
    plt.ylabel('Lateral Force (N)', fontsize='15')
    plt.plot(grip_data_LF[:, 0], grip_data_LF[:, 1])
    plt.plot(grip_data_LF[max_grip, 0], grip_data_LF[max_grip, 1], 'o', color='r')

    coeffs = pars["FR"]
    grip_data_RF = []
    for slip_angle in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_lateral(slip_angle, camber=camber, Fz=load, **coeffs["lateral"])
        grip_data_RF.append([slip_angle, friction_force])

    grip_data_RF = np.array(grip_data_RF)
    max_grip = np.argmax(grip_data_RF[:, 1])
    plt.subplot(2, 2, 2)
    plt.xlabel('Slip Angle (radians)', fontsize='15')
    plt.ylabel('Lateral Force (N)', fontsize='15')
    plt.plot(grip_data_RF[:, 0], grip_data_RF[:, 1])
    plt.plot(grip_data_RF[max_grip, 0], grip_data_RF[max_grip, 1], 'o', color='r')

    coeffs = pars["RL"]
    grip_data_LR = []
    for slip_angle in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_lateral(slip_angle, camber=camber, Fz=load, **coeffs["lateral"])
        grip_data_LR.append([slip_angle, friction_force])

    grip_data_LR = np.array(grip_data_LR)
    max_grip = np.argmax(grip_data_LR[:, 1])
    plt.subplot(2, 2, 3)
    plt.xlabel('Slip Angle (radians)', fontsize='15')
    plt.ylabel('Lateral Force (N)', fontsize='15')
    plt.plot(grip_data_LR[:, 0], grip_data_LR[:, 1])
    plt.plot(grip_data_LR[max_grip, 0], grip_data_LR[max_grip, 1], 'o', color='r')

    coeffs = pars["RR"]
    grip_data_RR = []
    for slip_angle in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_lateral(slip_angle, camber=camber, Fz=load, **coeffs["lateral"])
        grip_data_RR.append([slip_angle, friction_force])

    grip_data_RR = np.array(grip_data_RR)
    max_grip = np.argmax(grip_data_RR[:, 1])
    plt.subplot(2, 2, 4)
    plt.xlabel('Slip Angle (radians)', fontsize='15')
    plt.ylabel('Lateral Force (N)', fontsize='15')
    plt.plot(grip_data_RR[:, 0], grip_data_RR[:, 1])
    plt.plot(grip_data_RR[max_grip, 0], grip_data_RR[max_grip, 1], 'o', color='r')

    plt.show()

def plot_slip_ratio_diff(omega, load, camber, vel_x, vel_y, pars):
    plt.figure(figsize=(20,20))
    plt.title("Longitutinal Force VS Slip ratio", fontsize='40')
    plt.axis('off')

    coeffs = pars["FL"]
    grip_data_LF = []
    for slip_ratio in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_longitudinal(slip_ratio, Fz=load, camber=camber, **coeffs["longitudinal"])
        grip_data_LF.append([slip_ratio, friction_force])

    grip_data_LF = np.array(grip_data_LF)
    max_grip = np.argmax(grip_data_LF[:,1])
    plt.subplot(2, 2, 1)
    plt.xlabel('Slip ratio', fontsize='15')
    plt.ylabel('Longitutinal Force (N)', fontsize='15')
    plt.plot(grip_data_LF[:,0], grip_data_LF[:,1])
    plt.plot(grip_data_LF[max_grip,0], grip_data_LF[max_grip,1], 'o', color='r')

    coeffs = pars["FR"]
    grip_data_RF = []
    for slip_ratio in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_longitudinal(slip_ratio, Fz=load, camber=camber, **coeffs["longitudinal"])
        grip_data_RF.append([slip_ratio, friction_force])

    grip_data_RF = np.array(grip_data_RF)
    max_grip = np.argmax(grip_data_RF[:,1])
    plt.subplot(2, 2, 2)
    plt.xlabel('Slip ratio', fontsize='15')
    plt.ylabel('Longitutinal Force (N)', fontsize='15')
    plt.plot(grip_data_RF[:,0], grip_data_RF[:,1])
    plt.plot(grip_data_RF[max_grip,0], grip_data_RF[max_grip,1], 'o', color='r')

    coeffs = pars["RL"]
    grip_data_LR = []
    for slip_ratio in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_longitudinal(slip_ratio, Fz=load, camber=camber, **coeffs["longitudinal"])
        grip_data_LR.append([slip_ratio, friction_force])

    grip_data_LR = np.array(grip_data_LR)
    max_grip = np.argmax(grip_data_LR[:,1])
    plt.subplot(2, 2, 3)
    plt.xlabel('Slip ratio', fontsize='15')
    plt.ylabel('Longitutinal Force (N)', fontsize='15')
    plt.plot(grip_data_LR[:,0], grip_data_LR[:,1])
    plt.plot(grip_data_LR[max_grip,0], grip_data_LR[max_grip,1], 'o', color='r')

    coeffs = pars["RR"]
    grip_data_RR = []
    for slip_ratio in np.arange(-0.5, 0.5, 0.001):
        friction_force = magic_formula_longitudinal(slip_ratio, Fz=load, camber=camber, **coeffs["longitudinal"])
        grip_data_RR.append([slip_ratio, friction_force])

    grip_data_RR = np.array(grip_data_RR)
    max_grip = np.argmax(grip_data_RR[:,1])
    plt.subplot(2, 2, 4)
    plt.xlabel('Slip ratio', fontsize='15')
    plt.ylabel('Longitutinal Force (N)', fontsize='15')
    plt.plot(grip_data_RR[:,0], grip_data_RR[:,1])
    plt.plot(grip_data_RR[max_grip,0], grip_data_RR[max_grip,1], 'o', color='r')
    plt.show()

def plot_camber_diff(omega, load, camber, vel_x, vel_y, pars):
    plt.figure(figsize=(20,20))
    plt.title("Force VS Camber", fontsize='40')
    plt.axis('off')

    coeffs = pars["FL"]
    grip_data_LF = []
    for camber in np.arange(-0.087266, 0.087266, 0.001):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        grip_data_LF.append([camber, Fx])

    grip_data_LF = np.array(grip_data_LF)
    max_grip = np.argmax(grip_data_LF[:,1])
    plt.subplot(2, 2, 1)
    plt.xlabel('Camber (degree)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_LF[:,0], grip_data_LF[:,1])
    plt.plot(grip_data_LF[max_grip,0])

    coeffs = pars["FR"]
    grip_data_RF = []
    for camber in np.arange(-0.087266, 0.087266, 0.001):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        grip_data_RF.append([camber, Fx])

    grip_data_RF = np.array(grip_data_RF)
    max_grip = np.argmax(grip_data_RF[:,1])
    plt.subplot(2, 2, 2)
    plt.xlabel('Camber (degree)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_RF[:,0], grip_data_RF[:,1])
    plt.plot(grip_data_RF[max_grip,0])

    coeffs = pars["RL"]
    grip_data_LR = []
    for camber in np.arange(-0.087266, 0.087266, 0.001):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        grip_data_LR.append([camber, Fx])

    grip_data_LR = np.array(grip_data_LR)
    max_grip = np.argmax(grip_data_LR[:,1])
    plt.subplot(2, 2, 3)
    plt.xlabel('Camber (degree)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_LR[:,0], grip_data_LR[:,1])
    plt.plot(grip_data_LR[max_grip,0])

    coeffs = pars["RR"]
    grip_data_RR = []
    for camber in np.arange(-0.087266, 0.087266, 0.001):
        Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
        grip_data_RR.append([camber, Fx])

    grip_data_RR = np.array(grip_data_RR)
    max_grip = np.argmax(grip_data_RR[:,1])
    plt.subplot(2, 2, 4)
    plt.xlabel('Camber (degree)', fontsize='15')
    plt.ylabel('Force (N)', fontsize='15')
    plt.plot(grip_data_RR[:,0], grip_data_RR[:,1])
    plt.plot(grip_data_RR[max_grip,0])

    plt.show()

# *********************************** Tire model ************************************************
def calculate_slip_ratio(vel_x, omega, tire_radius):
    return (tire_radius * omega - vel_x) / max(vel_x, tire_radius * omega)

def calculate_slip_angle(vel_x, vel_y):
    return np.arctan(vel_y / vel_x)

def load_sensitivity(D0, load, nominal_load, PFZ1):
    return D0 * (load / nominal_load) ** PFZ1

def magic_formula_longitudinal(kappa, Fz, camber, FNOMIN, PDX1, PDX2, PDX3, PKX1, PKX2, PEX1, PEX2, PCX1):
    """
    Calculates the longitudinal force (Fx) using the Magic Formula, including camber effects.

    Inputs:
        kappa: Longitudinal slip ratio.
        Fz: Vertical load. (N)
        camber: Camber angle (in radians).
        FNOMIN: Nominal vertical load.
        PCX1: Shape factor Cfx.
        PDX1: Longitudinal friction Mux at Fznom.
        PDX2: Variation of friction Mux with load.
        PDX3: Variation of friction Mux with camber.
        PEX1: Longitudinal curvature Efx at Fznom.
        PEX2: Variation of curvature Efx with load.
        PKX1: Longitudinal slip stiffness Kfx/Fz at Fznom.
        PKX2: Variation of slip stiffness Kfx/Fz with load.

    Output:
        Longitudinal force Fx.
    """

    # Friction coefficient with load and camber dependency
    mux = PDX1 * (1 + PDX2 * (Fz - FNOMIN) / FNOMIN) * (1 + PDX3 * abs(camber))
    
    # Slip stiffness with load dependency
    Kx = PKX1 * (1 + PKX2 * (Fz - FNOMIN) / FNOMIN)
    
    # Curvature factor with load dependency
    Ex = PEX1 + PEX2 * (Fz - FNOMIN) / FNOMIN
    
    Fx = Fz * mux * np.sin(PCX1 * np.arctan(Kx * kappa - Ex * (Kx * kappa - np.arctan(Kx * kappa))))

    return Fx

def magic_formula_lateral(alpha, Fz, camber, FNOMIN, PDY1, PDY2, PDY3, PKY2, PKY1, PKY3, PKY4,
                          PKY5, PKY6, PKY7, PEY1, PEY2, PEY3, PEY4, PEY5, PHY1, PHY2, PCY1):
    """
    Calculates the lateral force (Fy) using the Magic Formula, including all camber effects.

    Inputs:
        alpha: Slip angle (in radians).
        Fz: Vertical load.(N)
        camber: Camber angle (in radians).
        FNOMIN: Nominal vertical load.
        PCY1: Shape factor Cfy.
        PDY1: Lateral friction Muy.
        PDY2: Variation of friction Muy with load.
        PDY3: Variation of friction Muy with squared camber.
        PEY1: Lateral curvature Efy at Fznom.
        PEY2: Variation of curvature Efy with load.
        PEY3: Zero order camber dependency of curvature Efy.
        PEY4: Variation of curvature Efy with camber.
        PEY5: Camber curvature Efc.
        PKY1: Maximum value of stiffness Kfy/Fznom.
        PKY2: Load at which Kfy reaches maximum value.
        PKY3: Variation of Kfy/Fznom with camber.
        PKY4: Curvature of stiffness Kfy.
        PKY5: Peak stiffness variation with camber squared.
        PKY6: Camber stiffness factor.
        PKY7: Load dependency of camber stiffness factor.
        PHY1: Horizontal shift Shy at Fznom
        PHY2: Variation of shift Shy with load

    Output:
        Lateral force Fy.
    """
   
    # Lateral friction coefficient with load and camber dependency
    muy = PDY1 * (1 + PDY2 * (Fz - FNOMIN) / FNOMIN) * (1 + PDY3 * camber**2)

    # Load at which Kfy reaches maximum value
    Fymax = PKY2 * FNOMIN

    # Cornering stiffness Kfy
    Kfy = (
        (PKY1 * (1 + PKY3 * camber) + PKY6 * camber) * (1 + PKY7 * (Fz - Fymax) / Fymax)
        * np.exp(-PKY4 * camber**2) + PKY5 * camber**2
    )

    # Lateral curvature Efy
    Efy = PEY1 + PEY2 * (Fz - FNOMIN) / FNOMIN + PEY3 * camber + PEY4 * camber + PEY5 * camber

    # Shift factor Shy
    Shy = PHY1 + PHY2 * (Fz - FNOMIN) / FNOMIN

    Fy = Fz * muy * np.sin(
        PCY1 * np.arctan(Kfy * (alpha + Shy) - Efy * (Kfy * (alpha + Shy) - np.arctan(Kfy * (alpha + Shy))))
    )

    return Fy

def calculate_aligning_torque(alpha, kappa, gamma, load, QBZ1, QBZ2, QBZ3, QBZ4, QBZ5, QDZ1, SSZ1):
    Bz = QBZ1 + QBZ2 * (load - 1) + QBZ3 * gamma + QBZ4 * abs(gamma)
    Dz = QDZ1 * load
    Sz = SSZ1 * kappa
    return Dz * np.sin(Bz * np.arctan(alpha)) + Sz

def combined_longitudinal_force(Fx, alpha, RBX1, RBX2, RBX3):
    return Fx / (1 + RBX1 * abs(alpha) + RBX2 * alpha**2 + RBX3 * abs(alpha**3))

def combined_lateral_force(Fy, kappa, RBY1, RBY2, RBY3):
    return Fy / (1 + RBY1 * abs(kappa) + RBY2 * kappa**2 + RBY3 * abs(kappa**3))

def calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs):
    kappa = calculate_slip_ratio(vel_x, omega, coeffs["spec"]["UNLOADED_RADIUS"])
    alpha = calculate_slip_angle(vel_x, vel_y)

    Fx = magic_formula_longitudinal(kappa, Fz=load, camber=camber, **coeffs["longitudinal"])
    Fy = magic_formula_lateral(alpha, camber=camber, Fz=load, **coeffs["lateral"])

    # Apply combined slip corrections
    Fx = combined_longitudinal_force(Fx, alpha, **coeffs["combined_slip_long"])
    Fy = combined_lateral_force(Fy, kappa, **coeffs["combined_slip_lat"])

    # Calculate Aligning Torque
    # Mz = calculate_aligning_torque(alpha, kappa, camber, load, **coeffs["aligning"])

    return Fx, Fy

def calculate_friction_coefficients(omega, load, camber, vel_x, vel_y, coeffs):
    Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)

    # mu_x = Fx / load  # Longitudinal friction coefficient
    # mu_y = Fy / load  # Lateral friction coefficient
    mu_t = np.sqrt(Fx**2 + Fy**2) / load  # Total friction coefficient

    return mu_t


if __name__ == '__main__':
    """
    omega: wheel angular velocity in radians per second.
    load: vertical load on the tire in Newtons.
    camber: camber angle in degrees.
    vel_x: longitudinal velocity of the tire in meters per second.
    vel_y: lateral velocity of the tire in meters per second.
    """
    omega = 100  # rad/s (angular velocity of the wheel)
    load = 4000  # N
    camber = 0.008  # radian
    vel_x = 15  # m/s
    vel_y = 5  # m/s

    parser = configparser.ConfigParser()
    pars = {}
    if not parser.read("assets/tir_param_advanced.ini"):
        raise ValueError('Specified config file does not exist!')
   
    pars["FL"] = json.loads(parser.get('GENERAL_OPTIONS', 'FL'))
    pars["FR"] = json.loads(parser.get('GENERAL_OPTIONS', 'FR'))
    pars["RL"] = json.loads(parser.get('GENERAL_OPTIONS', 'RL'))
    pars["RR"] = json.loads(parser.get('GENERAL_OPTIONS', 'RR'))
    coeffs = pars["FL"]

    plot_camber_diff(omega, load, camber, vel_x, vel_y, pars)
    plot_load_diff(omega, load, camber, vel_x, vel_y, pars)
    plot_slip_angle_diff(omega, load, camber, vel_x, vel_y, pars)
    plot_slip_ratio_diff(omega, load, camber, vel_x, vel_y, pars)

    # Calculate refined friction force
    Fx, Fy = calculate_friction_force(omega, load, camber, vel_x, vel_y, coeffs)
    friction_force = np.sqrt(Fx**2 + Fy**2)
    print(f"Friction Force: {friction_force} N")