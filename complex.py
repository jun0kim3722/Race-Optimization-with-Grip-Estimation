import numpy as np

# Coefficients extracted from the TIR file (from previous steps)
coeffs = {
    "longitudinal": {"Dx": 1.22452, "Cx": 1.515, "Bx": 10, "Ex": -0.48745},
    "lateral": {"Dy": 1.0912, "Cy": 1.515, "By": 9.0, "Ey": -0.354, "k_gamma": 0.2}
}

# Refined Magic Formula for longitudinal slip ratio (kappa) and lateral slip angle (alpha)
def calculate_slip_ratio(speed, omega, tire_radius):
    """Calculate slip ratio (kappa) given speed, wheel angular velocity (omega), and tire radius."""
    kappa = (tire_radius * omega - speed) / max(speed, tire_radius * omega)
    return kappa

def calculate_slip_angle(v_lateral, v_longitudinal):
    """Calculate slip angle (alpha) based on lateral and longitudinal velocities."""
    alpha = np.arctan(v_lateral / v_longitudinal)
    return alpha

def magic_formula_longitudinal_refined(kappa, Dx, Cx, Bx, Ex, load, D0=1):
    """Magic Formula for longitudinal force with load sensitivity."""
    D_load = D0 * load  # Adjust peak factor D by load
    return D_load * np.sin(Cx * np.arctan(Bx * kappa - Ex * (Bx * kappa - np.arctan(Bx * kappa))))

def magic_formula_lateral_refined(alpha, gamma, Dy, Cy, By, Ey, k_gamma, load, D0=1):
    """Magic Formula for lateral force with camber and load sensitivity."""
    D_load = D0 * load  # Adjust peak factor D by load
    return D_load * np.sin(Cy * np.arctan(By * alpha - Ey * (By * alpha - np.arctan(By * alpha)))) * (1 + k_gamma * gamma)

# Update to more accurate friction force calculation
def calculate_friction_refined(speed, omega, load, camber, v_lateral, v_longitudinal, tire_radius, coeffs):
    # Calculate longitudinal slip ratio (kappa)
    kappa = calculate_slip_ratio(speed, omega, tire_radius)
    
    # Calculate lateral slip angle (alpha)
    alpha = calculate_slip_angle(v_lateral, v_longitudinal)
    
    # Compute longitudinal force Fx using refined Magic Formula
    Fx = magic_formula_longitudinal_refined(kappa, coeffs["longitudinal"]["Dx"], 
                                            coeffs["longitudinal"]["Cx"], coeffs["longitudinal"]["Bx"], 
                                            coeffs["longitudinal"]["Ex"], load)
    
    # Compute lateral force Fy using refined Magic Formula
    Fy = magic_formula_lateral_refined(alpha, camber, coeffs["lateral"]["Dy"], 
                                       coeffs["lateral"]["Cy"], coeffs["lateral"]["By"], 
                                       coeffs["lateral"]["Ey"], coeffs["lateral"]["k_gamma"], load)
    
    # Combine forces into a total friction force
    F_friction = np.sqrt(Fx**2 + Fy**2)
    
    return F_friction * (load / 1000.0)

# Example values for a more detailed calculation
speed = 30  # m/s
omega = 100  # rad/s (angular velocity of the wheel)
load = 4000  # N
camber = 2  # degrees
v_lateral = 5  # m/s
v_longitudinal = 30  # m/s
tire_radius = 0.3  # meters (30 cm tire radius)

# speed: vehicle speed in meters per second.
# omega: wheel angular velocity in radians per second.
# load: vertical load on the tire in Newtons.
# camber: camber angle in degrees.
# v_lateral: lateral velocity of the tire in meters per second.
# v_longitudinal: longitudinal velocity of the tire in meters per second.
# tire_radius: radius of the tire in meters.

# Calculate refined friction force
friction_force_refined = calculate_friction_refined(speed, omega, load, camber, v_lateral, v_longitudinal, tire_radius, coeffs)
print(f"Friction Force: {friction_force_refined} N")
