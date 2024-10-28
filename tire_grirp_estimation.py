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

#  *****************************************************************************************************

#  *********************************** Helper functions ************************************************

def main_div0protect(u, tol):

    yabs = abs(u);
    x = 2.0 * tol;
    if (yabs < tol):
        varargin_1 = yabs / tol
        varargin_1 *= varargin_1
        yabs = x / (3.0 - varargin_1)

    y = yabs
    if (u < 0.0):
        y = -yabs
    
    return y, yabs

def rt_powd_snf(u0, u1):
    # Check for NaN values and return NaN if either input is NaN
    if np.isnan(u0) or np.isnan(u1):
        return np.nan
    
    tmp = np.abs(u0)
    tmp_0 = np.abs(u1)
    
    # Handle cases where u1 is infinity
    if np.isinf(u1):
        if tmp == 1.0:
            return 1.0
        elif tmp > 1.0:
            return np.inf if u1 > 0.0 else 0.0
        else:
            return 0.0 if u1 > 0.0 else np.inf
    # Handle cases for zero, one, and specific exponent values
    elif tmp_0 == 0.0:
        return 1.0
    elif tmp_0 == 1.0:
        return u0 if u1 > 0.0 else 1.0 / u0
    elif u1 == 2.0:
        return u0 * u0
    elif u1 == 0.5 and u0 >= 0.0:
        return np.sqrt(u0)
    elif u0 < 0.0 and u1 > np.floor(u1):
        return np.nan
    else:
        return np.power(u0, u1)
    
def main_div0protect_k(u):
  y = abs(u)

  if (y < 0.0001):
    y /= 0.0001
    y *= y
    y = 0.0002 / (3.0 - y)

  return y

def main_abs(x_data):
    # Initialize output array and size
    y_data = np.zeros_like(x_data)  # Create an array with the same shape and type as x_data
    y_size = (1, x_data.shape[1])    # Set the size for the output array

    # Calculate the absolute value
    if y_size[1] - 1 >= 0:
        y_data[0, 0] = abs(x_data[0, 0])  # Assuming x_data is a 2D array

    return y_data, y_size

#  *****************************************************************************************************

def main_calculateFz(RL, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH, b_Q_RE0,
  b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,   b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
  b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
  b_Q_FYS3, dpi, omega, b_gamma, Fx_ext, Fy_ext):
   
    Romega = omega * b_UNLOADED_RADIUS / b_LONGVL;
    Romega = (Romega * Romega * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS;
    d = not(b_Q_FZ1 == 0.0);
    if (not d):
        Q_FZ1_squared = b_VERTICAL_STIFFNESS * b_UNLOADED_RADIUS / b_FNOMIN;
        Q_FZ1_squared = Q_FZ1_squared * Q_FZ1_squared - 4.0 * b_Q_FZ2;
        if (Q_FZ1_squared < 0.0):
            b_Q_FZ1 = 0.0
        else:
            b_Q_FZ1 = np.sqrt(Q_FZ1_squared)

    Q_FZ1_squared = RL / Romega
    rho_zfr = Romega - RL
    rho_zg = (RL * RL * b_Q_CAM2 + b_Q_CAM1 * RL) * b_gamma
    Romega = (Romega * Romega * b_Q_CAM2 + b_Q_CAM1 * Romega) * b_gamma
    rho_zg = (1.075 - 0.5 * b_ASPECT_RATIO) * b_WIDTH / 8.0 * (rho_zg * rho_zg) * abs(np.tan(b_gamma)) / (Romega * Romega) - b_Q_CAM3 * rho_zfr * abs(b_gamma)
    if np.isnan(rho_zg): rho_zg = 0.0

    rhoz = max(rho_zfr + rho_zg, 1.0E-12)
    rho_zfr = b_Q_FCX * Fx_ext / b_FNOMIN
    rho_zg = rhoz / b_UNLOADED_RADIUS
    Romega = (Fy_ext - ((Q_FZ1_squared * b_Q_FYS2 + b_Q_FYS1) + Q_FZ1_squared * Q_FZ1_squared * b_Q_FYS3) * b_gamma) * b_Q_FCY / b_FNOMIN * rt_powd_snf(rho_zg, b_Q_FCY2)
    Q_FZ1_squared = rho_zg
    Fz = max((((b_UNLOADED_RADIUS / b_LONGVL * b_Q_V2 * abs(omega) + 1.0) - rho_zfr * rho_zfr) - Romega * Romega) * (b_PFZ1 * dpi + 1.0) * 
             (Q_FZ1_squared * Q_FZ1_squared * b_Q_FZ2 + rho_zg * b_Q_FZ1) *
             b_FNOMIN, ((b_RIM_RADIUS + b_BOTTOM_OFFST) - (b_UNLOADED_RADIUS + rhoz) / np.cos(b_gamma)) * b_BOTTOM_STIFF)

    return Fz, rhoz

def main_solveRLwithRhoz(b_LONGVL, b_UNLOADED_RADIUS,
  b_ASPECT_RATIO, b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1,
  b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3, dpi, omega, b_gamma, Fx_ext, Fy_ext, rhoz):

    x0 = b_UNLOADED_RADIUS * 0.5
    x1 = b_UNLOADED_RADIUS * 0.95
    ytol = b_UNLOADED_RADIUS * 1.0E-6
    RL = x1
    i = 0
    exitg1 = False
    while (not exitg1 and (i < 30)):
        b_y1, x2 = main_calculateFz(x0, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH,
                        b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,
                        b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
                        b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,
                        b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3,
                        dpi, omega, b_gamma, Fx_ext, Fy_ext)
        
        b_y1, b_calcRhoz = main_calculateFz(x1, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH,
                                            b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,
                                            b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
                                            b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,
                                            b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3,
                                            dpi, omega, b_gamma, Fx_ext, Fy_ext)
        b_y1 = b_calcRhoz - rhoz
        converged = (abs(b_y1) < ytol)
        b_calcRhoz = RL
        if (converged): b_calcRhoz = x1

        RL = b_calcRhoz
        if (converged): exitg1 = True
        else:
            x2 = x1 - (x1 - x0) * b_y1 / (b_y1 - (x2 - rhoz))
            b_calcRhoz = x1
            x0 = b_calcRhoz
            b_calcRhoz = x2
            x1 = b_calcRhoz
            i += 1

    if (RL <= 0.0): RL = 1.0E-8

    return RL

def main_calculateFz_m(RL, b_LONGVL,   b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH, b_Q_RE0,
  b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,   b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
  b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
  b_Q_FYS3, dpi, omega, b_gamma, Fx_ext, Fy_ext):

  Romega = omega * b_UNLOADED_RADIUS / b_LONGVL
  Romega = (Romega * Romega * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS

  if (not b_Q_FZ1 == 0.0):
    Q_FZ1_squared = b_VERTICAL_STIFFNESS * b_UNLOADED_RADIUS / b_FNOMIN
    Q_FZ1_squared = Q_FZ1_squared * Q_FZ1_squared - 4.0 * b_Q_FZ2
    if (Q_FZ1_squared < 0.0):
      b_Q_FZ1 = 0.0
    else:
      b_Q_FZ1 = np.sqrt(Q_FZ1_squared);

  Q_FZ1_squared = RL / Romega
  rho_zfr = Romega - RL
  rho_zg = (RL * RL * b_Q_CAM2 + b_Q_CAM1 * RL) * b_gamma
  Romega = (Romega * Romega * b_Q_CAM2 + b_Q_CAM1 * Romega) * b_gamma
  rho_zg = (1.075 - 0.5 * b_ASPECT_RATIO) * b_WIDTH / 8.0 * (rho_zg * rho_zg) * abs(np.tan(b_gamma)) / (Romega * Romega) - b_Q_CAM3 * rho_zfr * abs(b_gamma)

  if (np.isnan(rho_zg)): rho_zg = 0.0

  rho_zfr = max(rho_zfr + rho_zg, 1.0E-12)
  rho_zg = b_Q_FCX * Fx_ext / b_FNOMIN
  Romega_tmp = rho_zfr / b_UNLOADED_RADIUS
  Romega = (Fy_ext - ((Q_FZ1_squared * b_Q_FYS2 + b_Q_FYS1) + Q_FZ1_squared *
                      Q_FZ1_squared * b_Q_FYS3) * b_gamma) * b_Q_FCY / b_FNOMIN * rt_powd_snf(Romega_tmp, b_Q_FCY2)
  Q_FZ1_squared = Romega_tmp
  Fz = max((((b_UNLOADED_RADIUS / b_LONGVL * b_Q_V2 * abs(omega) + 1.0) -
              rho_zg * rho_zg) - Romega * Romega) * (b_PFZ1 * dpi + 1.0) *
            (Q_FZ1_squared * Q_FZ1_squared * b_Q_FZ2 + Romega_tmp * b_Q_FZ1) *
            b_FNOMIN, ((b_RIM_RADIUS + b_BOTTOM_OFFST) - (b_UNLOADED_RADIUS +
              rho_zfr) / np.cos(b_gamma)) * b_BOTTOM_STIFF);
  return Fz

def main_vdyncsmtire(omega, Vx, Vy, psidot, b_gamma, press, scaleFactors, rhoz,
  b_turnslip, b_PRESMAX, b_PRESMIN, b_FZMAX, b_FZMIN, b_VXLOW, b_KPUMAX, b_KPUMIN, b_ALPMAX,
  b_ALPMIN, b_CAMMIN, b_CAMMAX, b_LONGVL,   b_UNLOADED_RADIUS, b_RIM_RADIUS, b_NOMPRES, b_FNOMIN,
  b_VERTICAL_STIFFNESS, b_DREFF, b_BREFF, b_FREFF,
  b_Q_RE0, b_Q_V1, b_Q_V2, b_Q_FZ1, b_Q_FZ2,
  b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,   b_BOTTOM_OFFST, b_BOTTOM_STIFF, b_PCX1, b_PDX1, b_PDX2, b_PDX3, b_PEX1, b_PEX2, b_PEX3, b_PEX4, b_PKX1, b_PKX2, b_PKX3, b_PHX1, b_PHX2, b_PVX1, b_PVX2, b_PPX1, b_PPX2, b_PPX3, b_PPX4, b_RBX1, b_RBX2, b_RBX3, b_RCX1, b_REX1, b_REX2, b_RHX1, b_QSX1, b_QSX2, b_QSX3, b_QSX4, b_QSX5, b_QSX6, b_QSX7, b_QSX8, b_QSX9, b_QSX10, b_QSX11, b_PPMX1, b_PCY1, b_PDY1, b_PDY2, b_PDY3, b_PEY1, b_PEY2, b_PEY3, b_PEY4, b_PEY5, b_PKY1, b_PKY2, b_PKY3, b_PKY4, b_PKY5,   b_PKY6, b_PKY7, b_PHY1, b_PHY2, b_PVY1,   b_PVY2, b_PVY3, b_PVY4, b_PPY1, b_PPY2,   b_PPY3, b_PPY4, b_PPY5, b_RBY1, b_RBY2,   b_RBY3, b_RBY4, b_RCY1, b_REY1, b_REY2,   b_RHY1, b_RHY2, b_RVY1, b_RVY2, b_RVY3,   b_RVY4, b_RVY5, b_RVY6, b_QSY1, b_QSY2,   b_QSY3, b_QSY4, b_QSY5, b_QSY6, b_QSY7,   b_QSY8, b_QBZ1, b_QBZ2, b_QBZ3, b_QBZ4,   b_QBZ5, b_QBZ6, b_QBZ9, b_QBZ10, b_QCZ1,   b_QDZ1, b_QDZ2, b_QDZ3, b_QDZ4, b_QDZ6,   b_QDZ7, b_QDZ8, b_QDZ9, b_QDZ10, b_QDZ11,   b_QEZ1, b_QEZ2, b_QEZ3, b_QEZ4, b_QEZ5,   b_QHZ1, b_QHZ2, b_QHZ3, b_QHZ4, b_PPZ1,   b_PPZ2, b_SSZ1, b_SSZ2, b_SSZ3, b_SSZ4,   b_PDXP1, b_PDXP2, b_PDXP3, b_PKYP1, b_PDYP1,
  b_PDYP2, b_PDYP3, b_PDYP4, b_PHYP1, b_PHYP2,
  b_PHYP3, b_PHYP4, b_PECP1, b_PECP2, b_QDTP1,
  b_QCRP1, b_QCRP2, b_QBRP1, b_QDRP1, b_QDRP2,
  b_WIDTH, b_Q_RA1, b_Q_RA2, b_Q_RB1, b_Q_RB2,
  b_QSX12, b_QSX13, b_QSX14, b_LONGITUDINAL_STIFFNESS, b_LATERAL_STIFFNESS, b_PCFX1, b_PCFX2, b_PCFX3, b_PCFY1, b_PCFY2, b_PCFY3,
  Fx_ext, Fy_ext, Fz_ext, vertType, b_Q_CAM1,
  b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3, b_ASPECT_RATIO):
    
    dpi, Vs = main_div0protect(Vx, b_VXLOW)

    b_idx_0 = b_gamma
    if (b_gamma < b_CAMMIN): b_idx_0 = b_CAMMIN
    if (b_idx_0 > b_CAMMAX): b_idx_0 = b_CAMMAX

    f_idx_0 = press
    if (press < b_PRESMIN): f_idx_0 = b_PRESMIN
    if (f_idx_0 > b_PRESMAX): f_idx_0 = b_PRESMAX

    dpi = (f_idx_0 - b_NOMPRES) / b_NOMPRES
    lam_mux_star = scaleFactors[1]
    if (scaleFactors[1] <= 0.0): lam_mux_star = 1.0

    DHyphi = scaleFactors[2]
    if (scaleFactors[2] <= 0.0): DHyphi = 1.0

    n_idx_0 = scaleFactors[0]
    if (scaleFactors[0] <= 0.0): n_idx_0 = 1.0

    Cz = scaleFactors[22]
    if (scaleFactors[22] <= 0.0): Cz = 1.0

    
    RL = b_UNLOADED_RADIUS * 0.95
    if (vertType == 2.0):
        RL = main_solveRLwithRhoz(b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
        b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
        b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
        b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
        b_Q_FYS3, dpi, omega, b_idx_0, Fx_ext, Fy_ext)

        Fz = main_calculateFz_m(RL, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
        b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
        b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
        b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
        b_Q_FYS3, dpi, omega, b_idx_0, Fx_ext, Fy_ext)
    else:
        Fz = Fz_ext

    
    Kyalpha = deepcopy(Fz)
    if (Fz <= 0.0): Kyalpha = 1.0
    if (Fz < b_FZMIN): Fz = b_FZMIN
    if (Fz > b_FZMAX): Fz = b_FZMAX
    
    Fzo_prime = n_idx_0 * b_FNOMIN
    dfz = (Fz - Fzo_prime) / Fzo_prime
    epsilon_gamma = (b_PECP2 * dfz + 1.0) * b_PECP1
    Cz = (b_PFZ1 * dpi + 1.0) * (b_VERTICAL_STIFFNESS * Cz)
    gamma_star = omega * b_UNLOADED_RADIUS / b_LONGVL
    Re_tmp = Kyalpha / b_FNOMIN

    Re = (gamma_star * gamma_star * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS - (np.atan(Re_tmp * b_BREFF) * b_DREFF + Re_tmp * b_FREFF) * (b_FNOMIN / Cz)
    if (Re < 0.001): Re = 0.001

    kappa = (Re * omega - Vx) / Vs
    if (kappa < b_KPUMIN): kappa = b_KPUMIN

    if (kappa > b_KPUMAX): kappa = b_KPUMAX

    kappa_x = (b_PHX2 * dfz + b_PHX1) * scaleFactors[10] + kappa
    alpha = np.degrees(np.arctan2(Vy, Vs))
    if (alpha < b_ALPMIN): alpha = b_ALPMIN
    if (alpha > b_ALPMAX): alpha = b_ALPMAX

    gamma_star = np.sin(b_idx_0)
    phi_t = -Vs * kappa
    Kyalpha = np.tan(*alpha)
    Vsy = -Vs * Kyalpha
    Vsy *= Vsy
    Vs = np.sqrt(phi_t * phi_t + Vsy)
    main_div0protect(Vx, b_VXLOW, &phi_t, &Vc)
    Vc = np.sqrt(Vx * Vx + Vsy)
    main_div0protect(Vc, b_VXLOW, &Vsy, &mu_y)
    Vc = main_div0protect_k(Vc)
    lam_mux_star_tmp = scaleFactors[3] * Vs / b_LONGVL + 1.0
    lam_mux_star /= lam_mux_star_tmp
    Vs = DHyphi / lam_mux_star_tmp
    lam_muy_prime = Vs * 10.0 / (9.0 * Vs + 1.0)
    lam_mux_star_tmp = gamma_star * gamma_star
    mu_y_tmp = dpi * dpi
    mu_y = ((b_PPY3 * dpi + 1.0) + mu_y_tmp * b_PPY4) * (b_PDY2 * dfz + b_PDY1) * (1.0 - lam_mux_star_tmp * b_PDY3) * Vs
    phi_t = -psidot / phi_t * np.cos(*alpha)
    ib = phi_t
    trueCount = 0
    if (Vx < b_VXLOW):
        for i in range(1):
            trueCount += 1

    ib_tmp = []
    ib_tmp[0] = 1
    ib_tmp[1] = trueCount
    if (Vx < b_VXLOW): nb_data = 0

    tmpDrphiVar_size = []
    tmpDrphiVar_size[0] = 1
    tmpDrphiVar_size[1] = ib_tmp[1]
    loop_ub = ib_tmp[1]
    if (loop_ub - 1 >= 0):
        tmpDrphiVar_data = Vx

    tmp_data_0, tmp_size = main_abs(tmpDrphiVar_data, tmpDrphiVar_size) #***************
    if (ib_tmp[1] == tmp_size[1]):
        tmpDrphiVar_size[0] = 1
        tmpDrphiVar_size[1] = ib_tmp[1]
        loop_ub = ib_tmp[1]
        if (loop_ub - 1 >= 0):
            tmpDrphiVar_data = Vx

        tmp_data_0, tmp_size = main_abs(tmpDrphiVar_data, tmpDrphiVar_size)
        loop_ub = ib_tmp[1]
        if (loop_ub - 1 >= 0):
            ib = tmp_data_0 / b_VXLOW * phi_t
        else:
            main_binary_expand_op_4(&ib, phi_t, ib_tmp, Vx, b_VXLOW)

    phi = ((1.0 - epsilon_gamma) * fabs(omega) * gamma_star + psidot) * (1.0 / Vc);
    turnslipinds = ((b_turnslip == 1.0) && (fabs(phi) > 0.01));
    isLowSpeed = !turnslipinds;
    SHykappa = b_RHY2 * dfz + b_RHY1;
    phi_t = b_REY2 * dfz + b_REY1;
    jb_idx_0 = phi_t;
    if (phi_t > 1.0) {
        jb_idx_0 = 1.0;
    }

    phi_t = (lam_mux_star_tmp * b_RBY4 + b_RBY1) * cos(atan((*alpha - b_RBY3) *
        b_RBY2)) * scaleFactors[19];
    lb_idx_0 = phi_t;
    if (phi_t < 0.0) {
        lb_idx_0 = 0.0;
    }

    c_u = *kappa + SHykappa;
    for (i = 0; i < 9; i++) {
        zeta[i] = 1.0;
    }

    trueCount = 0;
    if (turnslipinds) {
        for (i = 0; i < 1; i++) {
        trueCount++;
        }
    }

    nb_tmp_size[0] = 1;
    nb_tmp_size[1] = trueCount;
    tmp = nb_tmp_size[1];
    if (tmp - 1 >= 0) {
        zeta[0] = 0.0;
    }

    tmp_2 = !isLowSpeed;
    if (tmp_2) {
        trueCount = 0;
        if (turnslipinds) {
        for (i = 0; i < 1; i++) {
            trueCount++;
        }
        }

        ob_size_idx_0 = trueCount;
        ib_tmp[0] = 1;
        ib_tmp[1] = tmp;
        tmpDrphiVar_size[0] = 1;
        tmpDrphiVar_size[1] = ib_tmp[1];
        SHy = atan(b_PDXP3 * *kappa);
        SHy = cos(SHy);
        loop_ub = ib_tmp[1];
        if (loop_ub - 1 >= 0) {
        tmpDrphiVar_data = (b_PDXP2 * dfz + 1.0) * b_PDXP1 * SHy *
            b_UNLOADED_RADIUS * phi;
        }

    return Fx, Fy, Fz, Mx, My, Mz, Re, kappa, alpha, sig_x, sig_y, patch_a, patch_b, RL, Tw

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

