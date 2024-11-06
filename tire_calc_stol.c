#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <immintrin.h>

/* Function Declarations */
static void main_div0protect(double u, double tol, double *y, double *yabs);
static void main_calculateFz(double RL, double b_LONGVL, double b_UNLOADED_RADIUS, double b_ASPECT_RATIO,
                             double b_WIDTH, double b_Q_RE0, double b_Q_V1, double b_FNOMIN, double b_VERTICAL_STIFFNESS,
                             double b_RIM_RADIUS, double b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2, double b_Q_FZ1,
                             double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2, double b_Q_CAM1,
                             double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3, double dpi,
                             double omega, double b_gamma, double Fx_ext, double Fy_ext, double *Fz, double *rhoz);
static double main_solveRLwithRhoz(double b_LONGVL, double b_UNLOADED_RADIUS, double b_ASPECT_RATIO,
                                   double b_WIDTH, double b_Q_RE0, double b_Q_V1, double b_FNOMIN, double b_VERTICAL_STIFFNESS,
                                   double b_RIM_RADIUS, double b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2,
                                   double b_Q_FZ1, double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2,
                                   double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double b_Q_FYS2,
                                   double b_Q_FYS3, double dpi, double omega, double b_gamma, double Fx_ext, double Fy_ext, double rhoz);
static double main_calculateFz_m(double RL, double b_LONGVL, double b_UNLOADED_RADIUS, double b_ASPECT_RATIO,
                                 double b_WIDTH, double b_Q_RE0, double b_Q_V1, double b_FNOMIN, double b_VERTICAL_STIFFNESS,
                                 double b_RIM_RADIUS, double b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2, double b_Q_FZ1,
                                 double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2, double b_Q_CAM1,
                                 double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3, double dpi,
                                 double omega, double b_gamma, double Fx_ext, double Fy_ext);
static double main_div0protect_k(double u);
static void main_div0protect_kw(double u, double *y, double *yabs);
static double rt_powd_snf(double u0, double u1);
static double rt_atan2d_snf(double u0, double u1);
static void main_vdyncsmtire(double omega, double Vx, double Vy, double psidot,
                             double b_gamma, double press, const double scaleFactors[27], double *rhoz,
                             double b_turnslip, double b_PRESMAX, double b_PRESMIN, double b_FZMAX, double b_FZMIN,
                             double b_VXLOW, double b_KPUMAX, double b_KPUMIN, double b_ALPMAX, double b_ALPMIN,
                             double b_CAMMIN, double b_CAMMAX, double b_LONGVL, double b_UNLOADED_RADIUS,
                             double b_RIM_RADIUS, double b_NOMPRES, double b_FNOMIN, double b_VERTICAL_STIFFNESS,
                             double b_DREFF, double b_BREFF, double b_FREFF, double b_Q_RE0, double b_Q_V1, double b_Q_V2,
                             double b_Q_FZ1, double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2,
                             double b_BOTTOM_OFFST, double b_BOTTOM_STIFF, double b_PCX1, double b_PDX1, double b_PDX2,
                             double b_PDX3, double b_PEX1, double b_PEX2, double b_PEX3, double b_PEX4, double b_PKX1,
                             double b_PKX2, double b_PKX3, double b_PHX1, double b_PHX2, double b_PVX1, double b_PVX2,
                             double b_PPX1, double b_PPX2, double b_PPX3, double b_PPX4, double b_RBX1, double b_RBX2,
                             double b_RBX3, double b_RCX1, double b_REX1, double b_REX2, double b_RHX1, double b_QSX1,
                             double b_QSX2, double b_QSX3, double b_QSX4, double b_QSX5, double b_QSX6, double b_QSX7,
                             double b_QSX8, double b_QSX9, double b_QSX10, double b_QSX11, double b_PPMX1, double b_PCY1,
                             double b_PDY1, double b_PDY2, double b_PDY3, double b_PEY1, double b_PEY2, double b_PEY3,
                             double b_PEY4, double b_PEY5, double b_PKY1, double b_PKY2, double b_PKY3, double b_PKY4,
                             double b_PKY5, double b_PKY6, double b_PKY7, double b_PHY1, double b_PHY2, double b_PVY1,
                             double b_PVY2, double b_PVY3, double b_PVY4, double b_PPY1, double b_PPY2, double b_PPY3,
                             double b_PPY4, double b_PPY5, double b_RBY1, double b_RBY2, double b_RBY3, double b_RBY4,
                             double b_RCY1, double b_REY1, double b_REY2, double b_RHY1, double b_RHY2, double b_RVY1,
                             double b_RVY2, double b_RVY3, double b_RVY4, double b_RVY5, double b_RVY6, double b_QSY1,
                             double b_QSY2, double b_QSY3, double b_QSY4, double b_QSY5, double b_QSY6, double b_QSY7,
                             double b_QSY8, double b_QBZ1, double b_QBZ2, double b_QBZ3, double b_QBZ4, double b_QBZ5,
                             double b_QBZ6, double b_QBZ9, double b_QBZ10, double b_QCZ1, double b_QDZ1, double b_QDZ2,
                             double b_QDZ3, double b_QDZ4, double b_QDZ6, double b_QDZ7, double b_QDZ8, double b_QDZ9,
                             double b_QDZ10, double b_QDZ11, double b_QEZ1, double b_QEZ2, double b_QEZ3, double b_QEZ4,
                             double b_QEZ5, double b_QHZ1, double b_QHZ2, double b_QHZ3, double b_QHZ4, double b_PPZ1,
                             double b_PPZ2, double b_SSZ1, double b_SSZ2, double b_SSZ3, double b_SSZ4, double b_PDXP1,
                             double b_PDXP2, double b_PDXP3, double b_PKYP1, double b_PDYP1, double b_PDYP2, double b_PDYP3,
                             double b_PDYP4, double b_PHYP1, double b_PHYP2, double b_PHYP3, double b_PHYP4, double b_PECP1,
                             double b_PECP2, double b_QDTP1, double b_QCRP1, double b_QCRP2, double b_QBRP1, double b_QDRP1,
                             double b_QDRP2, double b_WIDTH, double b_Q_RA1, double b_Q_RA2, double b_Q_RB1, double b_Q_RB2,
                             double b_QSX12, double b_QSX13, double b_QSX14, double b_LONGITUDINAL_STIFFNESS,
                             double b_LATERAL_STIFFNESS, double b_PCFX1, double b_PCFX2, double b_PCFX3, double b_PCFY1,
                             double b_PCFY2, double b_PCFY3, double Fx_ext, double Fy_ext, double Fz_ext, double vertType,
                             double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3,
                             double b_ASPECT_RATIO, double *Fx, double *Fy, double *Fz, double *Mx, double *My, double *Mz,
                             double *Re, double *kappa, double *alpha, double *sig_x, double *sig_y, double *patch_a,
                             double *patch_b, double *RL, double *Tw);
// ***********************************************************************************************************************

static void main_div0protect(double u, double tol, double *y, double *yabs)
{
  double x;
  *yabs = fabs(u);
  x = 2.0 * tol;
  if (*yabs < tol) {
    double varargin_1;
    varargin_1 = *yabs / tol;
    varargin_1 *= varargin_1;
    *yabs = x / (3.0 - varargin_1);
  }

  *y = *yabs;
  if (u < 0.0) {
    *y = -*yabs;
  }
}

double rt_powd_snf(double u0, double u1)
{
  double y;
  if (isnan(u0) || isnan(u1)) {
    y = (NAN);
  } else {
    double tmp;
    double tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (isinf(u1)) { 
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (INFINITY);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (INFINITY);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (NAN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_calculateFz(double RL, double b_LONGVL, double
  b_UNLOADED_RADIUS, double b_ASPECT_RATIO, double b_WIDTH, double b_Q_RE0,
  double b_Q_V1, double b_FNOMIN, double b_VERTICAL_STIFFNESS, double
  b_RIM_RADIUS, double b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2,
  double b_Q_FZ1, double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1,
  double b_Q_FCY2, double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double
  b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3, double dpi, double omega, double
  b_gamma, double Fx_ext, double Fy_ext, double *Fz, double *rhoz)
{
  double Q_FZ1_squared;
  double Romega;
  double rho_zfr;
  double rho_zg;
  bool d;
  Romega = omega * b_UNLOADED_RADIUS / b_LONGVL;
  Romega = (Romega * Romega * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS;
  d = !(b_Q_FZ1 == 0.0);
  if (!d) {
    Q_FZ1_squared = b_VERTICAL_STIFFNESS * b_UNLOADED_RADIUS / b_FNOMIN;
    Q_FZ1_squared = Q_FZ1_squared * Q_FZ1_squared - 4.0 * b_Q_FZ2;
    if (Q_FZ1_squared < 0.0) {
      b_Q_FZ1 = 0.0;
    } else {
      b_Q_FZ1 = sqrt(Q_FZ1_squared);
    }
  }

  Q_FZ1_squared = RL / Romega;
  rho_zfr = Romega - RL;
  rho_zg = (RL * RL * b_Q_CAM2 + b_Q_CAM1 * RL) * b_gamma;
  Romega = (Romega * Romega * b_Q_CAM2 + b_Q_CAM1 * Romega) * b_gamma;
  rho_zg = (1.075 - 0.5 * b_ASPECT_RATIO) * b_WIDTH / 8.0 * (rho_zg * rho_zg) *
    fabs(tan(b_gamma)) / (Romega * Romega) - b_Q_CAM3 * rho_zfr * fabs(b_gamma);
  d = isnan(rho_zg);
  if (d) {
    rho_zg = 0.0;
  }

  *rhoz = fmax(rho_zfr + rho_zg, 1.0E-12);
  rho_zfr = b_Q_FCX * Fx_ext / b_FNOMIN;
  rho_zg = *rhoz / b_UNLOADED_RADIUS;
  Romega = (Fy_ext - ((Q_FZ1_squared * b_Q_FYS2 + b_Q_FYS1) + Q_FZ1_squared *
                      Q_FZ1_squared * b_Q_FYS3) * b_gamma) * b_Q_FCY / b_FNOMIN *
    rt_powd_snf(rho_zg, b_Q_FCY2);
  Q_FZ1_squared = rho_zg;
  *Fz = fmax((((b_UNLOADED_RADIUS / b_LONGVL * b_Q_V2 * fabs(omega) + 1.0) -
               rho_zfr * rho_zfr) - Romega * Romega) * (b_PFZ1 * dpi + 1.0) *
             (Q_FZ1_squared * Q_FZ1_squared * b_Q_FZ2 + rho_zg * b_Q_FZ1) *
             b_FNOMIN, ((b_RIM_RADIUS + b_BOTTOM_OFFST) - (b_UNLOADED_RADIUS +
    *rhoz) / cos(b_gamma)) * b_BOTTOM_STIFF);
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static double main_solveRLwithRhoz(double b_LONGVL, double b_UNLOADED_RADIUS,
  double b_ASPECT_RATIO, double b_WIDTH, double b_Q_RE0, double b_Q_V1, double
  b_FNOMIN, double b_VERTICAL_STIFFNESS, double b_RIM_RADIUS, double
  b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2, double b_Q_FZ1, double
  b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2,
  double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double
  b_Q_FYS2, double b_Q_FYS3, double dpi, double omega, double b_gamma, double
  Fx_ext, double Fy_ext, double rhoz)
{
  double RL;
  double b_calcRhoz;
  double b_y1;
  double x0;
  double x1;
  double x2;
  double ytol;
  int32_t i;
  bool converged;
  bool exitg1;
  x0 = b_UNLOADED_RADIUS * 0.5;
  x1 = b_UNLOADED_RADIUS * 0.95;
  ytol = b_UNLOADED_RADIUS * 1.0E-6;
  RL = x1;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 30)) {
    main_calculateFz(x0, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH,
                     b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,
                     b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
                     b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,
                     b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3,
                     dpi, omega, b_gamma, Fx_ext, Fy_ext, &b_y1, &x2);
    main_calculateFz(x1, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH,
                     b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,
                     b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
                     b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,
                     b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3,
                     dpi, omega, b_gamma, Fx_ext, Fy_ext, &b_y1, &b_calcRhoz);
    b_y1 = b_calcRhoz - rhoz;
    converged = (fabs(b_y1) < ytol);
    b_calcRhoz = RL;
    if (converged) {
      b_calcRhoz = x1;
    }

    RL = b_calcRhoz;
    if (converged) {
      exitg1 = true;
    } else {
      x2 = x1 - (x1 - x0) * b_y1 / (b_y1 - (x2 - rhoz));
      b_calcRhoz = x1;
      x0 = b_calcRhoz;
      b_calcRhoz = x2;
      x1 = b_calcRhoz;
      i++;
    }
  }

  if (RL <= 0.0) {
    RL = 1.0E-8;
  }

  return RL;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static double main_calculateFz_m(double RL, double b_LONGVL, double
  b_UNLOADED_RADIUS, double b_ASPECT_RATIO, double b_WIDTH, double b_Q_RE0,
  double b_Q_V1, double b_FNOMIN, double b_VERTICAL_STIFFNESS, double
  b_RIM_RADIUS, double b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2,
  double b_Q_FZ1, double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1,
  double b_Q_FCY2, double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double
  b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3, double dpi, double omega, double
  b_gamma, double Fx_ext, double Fy_ext)
{
  double Fz;
  double Q_FZ1_squared;
  double Romega;
  double Romega_tmp;
  double rho_zfr;
  double rho_zg;
  bool d;
  Romega = omega * b_UNLOADED_RADIUS / b_LONGVL;
  Romega = (Romega * Romega * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS;
  d = !(b_Q_FZ1 == 0.0);
  if (!d) {
    Q_FZ1_squared = b_VERTICAL_STIFFNESS * b_UNLOADED_RADIUS / b_FNOMIN;
    Q_FZ1_squared = Q_FZ1_squared * Q_FZ1_squared - 4.0 * b_Q_FZ2;
    if (Q_FZ1_squared < 0.0) {
      b_Q_FZ1 = 0.0;
    } else {
      b_Q_FZ1 = sqrt(Q_FZ1_squared);
    }
  }

  Q_FZ1_squared = RL / Romega;
  rho_zfr = Romega - RL;
  rho_zg = (RL * RL * b_Q_CAM2 + b_Q_CAM1 * RL) * b_gamma;
  Romega = (Romega * Romega * b_Q_CAM2 + b_Q_CAM1 * Romega) * b_gamma;
  rho_zg = (1.075 - 0.5 * b_ASPECT_RATIO) * b_WIDTH / 8.0 * (rho_zg * rho_zg) *
    fabs(tan(b_gamma)) / (Romega * Romega) - b_Q_CAM3 * rho_zfr * fabs(b_gamma);
  d = isnan(rho_zg);
  if (d) {
    rho_zg = 0.0;
  }

  rho_zfr = fmax(rho_zfr + rho_zg, 1.0E-12);
  rho_zg = b_Q_FCX * Fx_ext / b_FNOMIN;
  Romega_tmp = rho_zfr / b_UNLOADED_RADIUS;
  Romega = (Fy_ext - ((Q_FZ1_squared * b_Q_FYS2 + b_Q_FYS1) + Q_FZ1_squared *
                      Q_FZ1_squared * b_Q_FYS3) * b_gamma) * b_Q_FCY / b_FNOMIN *
    rt_powd_snf(Romega_tmp, b_Q_FCY2);
  Q_FZ1_squared = Romega_tmp;
  Fz = fmax((((b_UNLOADED_RADIUS / b_LONGVL * b_Q_V2 * fabs(omega) + 1.0) -
              rho_zg * rho_zg) - Romega * Romega) * (b_PFZ1 * dpi + 1.0) *
            (Q_FZ1_squared * Q_FZ1_squared * b_Q_FZ2 + Romega_tmp * b_Q_FZ1) *
            b_FNOMIN, ((b_RIM_RADIUS + b_BOTTOM_OFFST) - (b_UNLOADED_RADIUS +
              rho_zfr) / cos(b_gamma)) * b_BOTTOM_STIFF);
  return Fz;
}

double rt_atan2d_snf(double u0, double u1)
{
  double y;
  if (isnan(u0) || isnan(u1)) {
    y = (NAN);
  } else if (isinf(u0) && isinf(u1)) {
    int32_t tmp;
    int32_t tmp_0;
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp_0, tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = M_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(M_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static double main_div0protect_k(double u)
{
  double y;
  y = fabs(u);
  if (y < 0.0001) {
    y /= 0.0001;
    y *= y;
    y = 0.0002 / (3.0 - y);
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_abs(const double x_data[], const int32_t x_size[2], double
                     y_data[], int32_t y_size[2])
{
  int32_t b;
  y_size[0] = 1;
  b = x_size[1];
  y_size[1] = b;
  if (b - 1 >= 0) {
    y_data[0] = fabs(x_data[0]);
  }
}

static void main_binary_expand_op_4(double *in1, double in3, const int32_t in4[2],
  double in5, double in6)
{
  double tmp_data;
  int32_t in5_size[2];
  int32_t tmp_size[2];
  int32_t in4_idx_0;
  int32_t in4_idx_1;
  int32_t in4_idx_1_0;

  /* MATLAB Function: '<S3>/Magic Tire Const Input' */
  in4_idx_1_0 = in4[1];
  in4_idx_1 = in4[1];
  in5_size[0] = 1;
  in5_size[1] = in4_idx_1;
  main_abs(&in5, in5_size, &tmp_data, tmp_size);
  if (tmp_size[1] != 1) {
    in4_idx_1_0 = tmp_size[1];
  }

  for (in4_idx_0 = 0; in4_idx_0 < in4_idx_1_0; in4_idx_0++) {
    *in1 = tmp_data / in6 * in3;
  }

  /* End of MATLAB Function: '<S3>/Magic Tire Const Input' */
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_atan(double x_data[], const int32_t x_size[2])
{
  int32_t b;
  int32_t k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = atan(x_data[0]);
  }
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_cos(double x_data[], const int32_t x_size[2])
{
  int32_t b;
  int32_t k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = cos(x_data[0]);
  }
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_sqrt(double x_data[], const int32_t x_size[2])
{
  int32_t b;
  int32_t k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = sqrt(x_data[0]);
  }
}

static void main_binary_expand_op_3(double in1_data[], int32_t in1_size[2],
  double in2, double in3, double in4, double in5, double in6, const int32_t in7
  [2], double in8, double in9, int32_t in10, double in11)
{
  double in9_data;
  double tmp;
  double tmp_data;
  int32_t in9_size[2];
  int32_t tmp_size[2];
  int32_t i;
  int32_t in7_idx_1;
  int32_t stride_2_1;

  /* MATLAB Function: '<S3>/Magic Tire Const Input' */
  tmp = atan(in5 * in6);
  tmp = cos(tmp);
  in7_idx_1 = in7[1];
  in9_size[0] = 1;
  in9_size[1] = in10;
  if (in10 - 1 >= 0) {
    in9_data = in9;
  }

  main_abs(&in9_data, in9_size, &tmp_data, tmp_size);
  if (in1_size[1] == 1) {
    i = tmp_size[1];
  } else {
    i = in1_size[1];
  }

  if (i == 1) {
    in9_size[1] = in7_idx_1;
  } else if (in1_size[1] == 1) {
    in9_size[1] = tmp_size[1];
  } else {
    in9_size[1] = in1_size[1];
  }

  stride_2_1 = (in1_size[1] != 1);
  if (in1_size[1] == 1) {
    i = tmp_size[1];
  } else {
    i = in1_size[1];
  }

  if (i != 1) {
    if (in1_size[1] == 1) {
      in7_idx_1 = tmp_size[1];
    } else {
      in7_idx_1 = in1_size[1];
    }
  }

  for (i = 0; i < in7_idx_1; i++) {
    in9_data = (in3 * in4 + 1.0) * in2 * tmp * (in1_data[i * stride_2_1] * in11
      + tmp_data * in8);
  }

  in1_size[0] = 1;
  in7_idx_1 = in9_size[1];
  in1_size[1] = in7_idx_1;
  for (i = 0; i < in7_idx_1; i++) {
    in1_data[0] = in9_data;
  }

  /* End of MATLAB Function: '<S3>/Magic Tire Const Input' */
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_div0protect_kw(double u, double *y, double *yabs)
{
  *yabs = fabs(u);
  if (*yabs < 0.0001) {
    double varargin_1;
    varargin_1 = *yabs / 0.0001;
    varargin_1 *= varargin_1;
    *yabs = 0.0002 / (3.0 - varargin_1);
  }

  *y = *yabs;
  if (u < 0.0) {
    *y = -*yabs;
  }
}

static void main_binary_expand_op_2(double in1_data[], int32_t in1_size[2],
  const double *in2, double in3, double in4, const double *in5, const double
  *in6, const int32_t in7[2], double in8, const double *in9)
{
  double tmp;
  double tmp_data;
  int32_t in8_size[2];
  int32_t tmp_size[2];
  int32_t in7_idx_0;
  int32_t in7_idx_1;
  int32_t in7_idx_1_0;

  /* MATLAB Function: '<S3>/Magic Tire Const Input' */
  tmp = fabs(*in5);
  tmp = atan(in3 * in4 * tmp);
  in7_idx_1_0 = in7[1];
  in7_idx_1 = in7[1];
  in8_size[0] = 1;
  in8_size[1] = in7_idx_1;
  main_abs(&in8, in8_size, &tmp_data, tmp_size);
  in7_idx_1 = in7[1];
  in1_size[0] = 1;
  if (in7_idx_1 == 1) {
    in7_idx_0 = tmp_size[1];
  } else {
    in7_idx_0 = in7_idx_1;
  }

  if (in7_idx_0 == 1) {
    in1_size[1] = in7_idx_1_0;
  } else if (in7_idx_1 == 1) {
    in1_size[1] = tmp_size[1];
  } else {
    in1_size[1] = in7_idx_1;
  }

  if (in7_idx_1 == 1) {
    in7_idx_0 = tmp_size[1];
  } else {
    in7_idx_0 = in7_idx_1;
  }

  if (in7_idx_0 == 1) {
    in7_idx_1 = in7_idx_1_0;
  } else if (in7_idx_1 == 1) {
    in7_idx_1 = tmp_size[1];
  }

  for (in7_idx_0 = 0; in7_idx_0 < in7_idx_1; in7_idx_0++) {
    in1_data[in7_idx_0] = *in2 * 2.0 / 3.1415926535897931 * tmp * *in6 / (0.0001
      * *in9 + tmp_data);
  }

  /* End of MATLAB Function: '<S3>/Magic Tire Const Input' */
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_acos(double x_data[], const int32_t x_size[2])
{
  int32_t b;
  int32_t k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = acos(x_data[0]);
  }
}

static void main_binary_expand_op_6(double *in1, double in3, double in4, double
  in5, const int32_t in6[2], const double in7[27], const int32_t in8_size[2],
  double in9, double in10, int32_t in11, double in12)
{
  int32_t i;
  int32_t in6_idx_1;
  int32_t in6_idx_1_0;
  i = in8_size[1];
  in6_idx_1_0 = in6[1];
  in6_idx_1 = in6[1];
  if (in11 == 1) {
    if (in6_idx_1 == 1) {
      if (i == 1) {
        in6_idx_1 = in6_idx_1_0;
      } else {
        in6_idx_1 = i;
      }
    }
  } else {
    in6_idx_1 = in11;
  }

  for (i = 0; i < in6_idx_1; i++) {
    *in1 = ((in4 * in5 + in3) * in7[11] + in9) - in10 / in12;
  }
}

static void main_binary_expand_op(double *in1, const int32_t in2_size[2], double
  in3, double in4, double in5, const int32_t in6[2], const double in7[27], const
  int32_t in8_size[2], double in9, double in10, double in11, double in12, const
  double in13[9])
{
  double in3_data;
  int32_t in6_idx_1;
  int32_t in6_idx_1_0;
  int32_t tmp;

  /* MATLAB Function: '<S3>/Magic Tire Const Input' incorporates:
   *  SignalConversion generated from: '<S6>/ SFunction '
   */
  tmp = in8_size[1];
  in6_idx_1_0 = in6[1];
  in6_idx_1 = in6[1];
  if (in6_idx_1 == 1) {
    if (tmp == 1) {
      in6_idx_1 = in6_idx_1_0;
    } else {
      in6_idx_1 = tmp;
    }
  }

  for (in6_idx_1_0 = 0; in6_idx_1_0 < in6_idx_1; in6_idx_1_0++) {
    if (tmp - 1 >= 0) {
      in3_data = (((in9 * in10 - in11) / in12 * in13[0] + (in4 * in5 + in3) *
                   in7[11]) + in13[4]) - 1.0;
    }
  }

  tmp = in2_size[1];
  for (in6_idx_1_0 = 0; in6_idx_1_0 < tmp; in6_idx_1_0++) {
    *in1 = in3_data;
  }

  /* End of MATLAB Function: '<S3>/Magic Tire Const Input' */
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static double main_solveRLwithFz(double b_LONGVL, double b_UNLOADED_RADIUS,
  double b_ASPECT_RATIO, double b_WIDTH, double b_Q_RE0, double b_Q_V1, double
  b_FNOMIN, double b_VERTICAL_STIFFNESS, double b_RIM_RADIUS, double
  b_BOTTOM_STIFF, double b_BOTTOM_OFFST, double b_Q_V2, double b_Q_FZ1, double
  b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2,
  double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double
  b_Q_FYS2, double b_Q_FYS3, double dpi, double omega, double b_gamma, double
  Fx_ext, double Fy_ext, double Fz)
{
  double RL;
  double b_y1;
  double d_idx_0;
  double x0;
  double x1;
  double ytol;
  int32_t i;
  bool converged;
  bool exitg1;
  x0 = b_UNLOADED_RADIUS * 0.5;
  x1 = b_UNLOADED_RADIUS * 0.95;
  ytol = b_FNOMIN * 1.0E-6;
  RL = x1;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 30)) {
    b_y1 = main_calculateFz_m(x1, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
      b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
      b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
      b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
      b_Q_FYS3, dpi, omega, b_gamma, Fx_ext, Fy_ext) - Fz;
    converged = (fabs(b_y1) < ytol);
    d_idx_0 = RL;
    if (converged) {
      d_idx_0 = x1;
    }

    RL = d_idx_0;
    if (converged) {
      exitg1 = true;
    } else {
      b_y1 = x1 - (x1 - x0) * b_y1 / (b_y1 - (main_calculateFz_m(x0, b_LONGVL,
        b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN,
        b_VERTICAL_STIFFNESS, b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST,
        b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2, b_Q_CAM1,
        b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3, dpi, omega, b_gamma,
        Fx_ext, Fy_ext) - Fz));
      d_idx_0 = x1;
      x0 = d_idx_0;
      d_idx_0 = b_y1;
      x1 = d_idx_0;
      i++;
    }
  }

  if (RL <= 0.0) {
    RL = 1.0E-8;
  }

  return RL;
}

static void main_vdyncsmtire(double omega, double Vx, double Vy, double psidot,
                             double b_gamma, double press, const double scaleFactors[27], double *rhoz,
                             double b_turnslip, double b_PRESMAX, double b_PRESMIN, double b_FZMAX, double b_FZMIN,
                             double b_VXLOW, double b_KPUMAX, double b_KPUMIN, double b_ALPMAX, double b_ALPMIN,
                             double b_CAMMIN, double b_CAMMAX, double b_LONGVL, double b_UNLOADED_RADIUS,
                             double b_RIM_RADIUS, double b_NOMPRES, double b_FNOMIN, double b_VERTICAL_STIFFNESS,
                             double b_DREFF, double b_BREFF, double b_FREFF, double b_Q_RE0, double b_Q_V1, double b_Q_V2,
                             double b_Q_FZ1, double b_Q_FZ2, double b_Q_FCX, double b_Q_FCY, double b_PFZ1, double b_Q_FCY2,
                             double b_BOTTOM_OFFST, double b_BOTTOM_STIFF, double b_PCX1, double b_PDX1, double b_PDX2,
                             double b_PDX3, double b_PEX1, double b_PEX2, double b_PEX3, double b_PEX4, double b_PKX1,
                             double b_PKX2, double b_PKX3, double b_PHX1, double b_PHX2, double b_PVX1, double b_PVX2,
                             double b_PPX1, double b_PPX2, double b_PPX3, double b_PPX4, double b_RBX1, double b_RBX2,
                             double b_RBX3, double b_RCX1, double b_REX1, double b_REX2, double b_RHX1, double b_QSX1,
                             double b_QSX2, double b_QSX3, double b_QSX4, double b_QSX5, double b_QSX6, double b_QSX7,
                             double b_QSX8, double b_QSX9, double b_QSX10, double b_QSX11, double b_PPMX1, double b_PCY1,
                             double b_PDY1, double b_PDY2, double b_PDY3, double b_PEY1, double b_PEY2, double b_PEY3,
                             double b_PEY4, double b_PEY5, double b_PKY1, double b_PKY2, double b_PKY3, double b_PKY4,
                             double b_PKY5, double b_PKY6, double b_PKY7, double b_PHY1, double b_PHY2, double b_PVY1,
                             double b_PVY2, double b_PVY3, double b_PVY4, double b_PPY1, double b_PPY2, double b_PPY3,
                             double b_PPY4, double b_PPY5, double b_RBY1, double b_RBY2, double b_RBY3, double b_RBY4,
                             double b_RCY1, double b_REY1, double b_REY2, double b_RHY1, double b_RHY2, double b_RVY1,
                             double b_RVY2, double b_RVY3, double b_RVY4, double b_RVY5, double b_RVY6, double b_QSY1,
                             double b_QSY2, double b_QSY3, double b_QSY4, double b_QSY5, double b_QSY6, double b_QSY7,
                             double b_QSY8, double b_QBZ1, double b_QBZ2, double b_QBZ3, double b_QBZ4, double b_QBZ5,
                             double b_QBZ6, double b_QBZ9, double b_QBZ10, double b_QCZ1, double b_QDZ1, double b_QDZ2,
                             double b_QDZ3, double b_QDZ4, double b_QDZ6, double b_QDZ7, double b_QDZ8, double b_QDZ9,
                             double b_QDZ10, double b_QDZ11, double b_QEZ1, double b_QEZ2, double b_QEZ3, double b_QEZ4,
                             double b_QEZ5, double b_QHZ1, double b_QHZ2, double b_QHZ3, double b_QHZ4, double b_PPZ1,
                             double b_PPZ2, double b_SSZ1, double b_SSZ2, double b_SSZ3, double b_SSZ4, double b_PDXP1,
                             double b_PDXP2, double b_PDXP3, double b_PKYP1, double b_PDYP1, double b_PDYP2, double b_PDYP3,
                             double b_PDYP4, double b_PHYP1, double b_PHYP2, double b_PHYP3, double b_PHYP4, double b_PECP1,
                             double b_PECP2, double b_QDTP1, double b_QCRP1, double b_QCRP2, double b_QBRP1, double b_QDRP1,
                             double b_QDRP2, double b_WIDTH, double b_Q_RA1, double b_Q_RA2, double b_Q_RB1, double b_Q_RB2,
                             double b_QSX12, double b_QSX13, double b_QSX14, double b_LONGITUDINAL_STIFFNESS,
                             double b_LATERAL_STIFFNESS, double b_PCFX1, double b_PCFX2, double b_PCFX3, double b_PCFY1,
                             double b_PCFY2, double b_PCFY3, double Fx_ext, double Fy_ext, double Fz_ext, double vertType,
                             double b_Q_CAM1, double b_Q_CAM2, double b_Q_CAM3, double b_Q_FYS1, double b_Q_FYS2, double b_Q_FYS3,
                             double b_ASPECT_RATIO, double *Fx, double *Fy, double *Fz, double *Mx, double *My, double *Mz,
                             double *Re, double *kappa, double *alpha, double *sig_x, double *sig_y, double *patch_a,
                             double *patch_b, double *RL, double *Tw) {
    __m128d tmp_0;
    double zeta[9];
    double tmp_1[2];
    double Cz;
    double DHyphi;
    double Fzo_prime;
    double Kyalpha;
    double Kyalpha_tmp;
    double Kygammao;
    double Re_tmp;
    double SHy;
    double SHykappa;
    double SVygamma;
    double SVygamma_tmp;
    double Vc;
    double Vs;
    double Vsy;
    double b_idx_0;
    double c_u;
    double dfz;
    double dpi;
    double epsilon_gamma;
    double f_idx_0;
    double gamma_star;
    double ib;
    double jb_idx_0;
    double kappa_x;
    double lam_mux_star;
    double lam_mux_star_tmp;
    double lam_muy_prime;
    double lb_idx_0;
    double mu_y;
    double mu_y_tmp;
    double n_idx_0;
    double pb_idx_0;
    double phi;
    double phi_data;
    double phi_data_0;
    double phi_t;
    double rb_idx_0;
    double tmpDrphiVar_data;
    double tmp_data_0;
    int32_t ib_tmp[2];
    int32_t nb_size[2];
    int32_t nb_tmp_size[2];
    int32_t phi_size[2];
    int32_t phi_size_0[2];
    int32_t tmpDrphiVar_size[2];
    int32_t tmp_size[2];
    int32_t vc_tmp_size[2];
    int32_t i;
    int32_t loop_ub;
    int32_t ob_size_idx_0;
    int32_t tmp;
    int32_t tmp_data;
    int32_t trueCount;
    __int8_t nb_data;
    bool isLowSpeed;
    bool tmp_2;
    bool turnslipinds;
    
    main_div0protect(Vx, b_VXLOW, &dpi, &Vs);
    b_idx_0 = b_gamma;
    if (b_gamma < b_CAMMIN) {
        b_idx_0 = b_CAMMIN;
    }

    if (b_idx_0 > b_CAMMAX) {
        b_idx_0 = b_CAMMAX;
    }

    f_idx_0 = press;
    if (press < b_PRESMIN) {
        f_idx_0 = b_PRESMIN;
    }

    if (f_idx_0 > b_PRESMAX) {
        f_idx_0 = b_PRESMAX;
    }

    dpi = (f_idx_0 - b_NOMPRES) / b_NOMPRES;
    lam_mux_star = scaleFactors[1];
    if (scaleFactors[1] <= 0.0) {
        lam_mux_star = 1.0;
    }

    DHyphi = scaleFactors[2];
    if (scaleFactors[2] <= 0.0) {
        DHyphi = 1.0;
    }

    n_idx_0 = scaleFactors[0];
    if (scaleFactors[0] <= 0.0) {
        n_idx_0 = 1.0;
    }

    Cz = scaleFactors[22];
    if (scaleFactors[22] <= 0.0) {
        Cz = 1.0;
    }

    *RL = b_UNLOADED_RADIUS * 0.95;
    if (vertType == 2.0) {
        *RL = main_solveRLwithRhoz(b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
                                  b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
                                  b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
                                  b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
                                  b_Q_FYS3, dpi, omega, b_idx_0, Fx_ext, Fy_ext, *rhoz);
        *Fz = main_calculateFz_m(*RL, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
                                 b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
                                 b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
                                 b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
                                 b_Q_FYS3, dpi, omega, b_idx_0, Fx_ext, Fy_ext);
    } else {
        *Fz = Fz_ext;
    }

    Kyalpha = *Fz;
    if (*Fz <= 0.0) {
        Kyalpha = 1.0;
    }

    if (*Fz < b_FZMIN) {
        *Fz = b_FZMIN;
    }

    if (*Fz > b_FZMAX) {
        *Fz = b_FZMAX;
    }

    Fzo_prime = n_idx_0 * b_FNOMIN;
    dfz = (*Fz - Fzo_prime) / Fzo_prime;
    epsilon_gamma = (b_PECP2 * dfz + 1.0) * b_PECP1;
    Cz = (b_PFZ1 * dpi + 1.0) * (b_VERTICAL_STIFFNESS * Cz);
    gamma_star = omega * b_UNLOADED_RADIUS / b_LONGVL;
    Re_tmp = Kyalpha / b_FNOMIN;
    *Re = (gamma_star * gamma_star * b_Q_V1 + b_Q_RE0) * b_UNLOADED_RADIUS - (atan
                                                                              (Re_tmp * b_BREFF) * b_DREFF + Re_tmp * b_FREFF) * (b_FNOMIN / Cz);
    if (*Re < 0.001) {
        *Re = 0.001;
    }

    *kappa = (*Re * omega - Vx) / Vs;
    if (*kappa < b_KPUMIN) {
        *kappa = b_KPUMIN;
    }

    if (*kappa > b_KPUMAX) {
        *kappa = b_KPUMAX;
    }

    kappa_x = (b_PHX2 * dfz + b_PHX1) * scaleFactors[10] + *kappa;
    *alpha = rt_atan2d_snf(Vy, Vs);
    if (*alpha < b_ALPMIN) {
        *alpha = b_ALPMIN;
    }

    if (*alpha > b_ALPMAX) {
        *alpha = b_ALPMAX;
    }

    gamma_star = sin(b_idx_0);
    phi_t = -Vs * *kappa;
    Kyalpha = tan(*alpha);
    Vsy = -Vs * Kyalpha;
    Vsy *= Vsy;
    Vs = sqrt(phi_t * phi_t + Vsy);
    main_div0protect(Vx, b_VXLOW, &phi_t, &Vc);
    Vc = sqrt(Vx * Vx + Vsy);
    main_div0protect(Vc, b_VXLOW, &Vsy, &mu_y);
    Vc = main_div0protect_k(Vc);
    lam_mux_star_tmp = scaleFactors[3] * Vs / b_LONGVL + 1.0;
    lam_mux_star /= lam_mux_star_tmp;
    Vs = DHyphi / lam_mux_star_tmp;
    lam_muy_prime = Vs * 10.0 / (9.0 * Vs + 1.0);
    lam_mux_star_tmp = gamma_star * gamma_star;
    mu_y_tmp = dpi * dpi;
    mu_y = ((b_PPY3 * dpi + 1.0) + mu_y_tmp * b_PPY4) * (b_PDY2 * dfz + b_PDY1) *
            (1.0 - lam_mux_star_tmp * b_PDY3) * Vs;
    phi_t = -psidot / phi_t * cos(*alpha);
    ib = phi_t;
    trueCount = 0;
    if (Vx < b_VXLOW) {
        for (i = 0; i < 1; i++) {
            trueCount++;
        }
    }

    *Fx = ((b_PVX2 * dfz + b_PVX1) * *Fz * (lam_mux_star * 10.0 / (9.0 * lam_mux_star + 1.0)) * scaleFactors[12] * zeta[1] + sin(atan(kappa_x - (kappa_x - atan(kappa_x)) * lb_idx_0) * Kyalpha_tmp) * jb_idx_0) * SHykappa;
    *Fy = (sin(atan(lam_muy_prime - (lam_muy_prime - atan(lam_muy_prime)) * Kygammao) * mu_y_tmp) * phi + lam_mux_star) * rb_idx_0 + mu_y;
    *Mx = 0.0;
    *My = ((((*Fx / b_FNOMIN * b_QSY2 + b_QSY1) + fabs(lam_muy_prime) * b_QSY3) + rt_powd_snf(lam_muy_prime, 4.0) * b_QSY4) + (Re_tmp * b_QSY6 + b_QSY5) * b_idx_0 * b_idx_0) * (-b_UNLOADED_RADIUS * b_FNOMIN * scaleFactors[25]) * (rt_powd_snf(fmax(f_idx_0 / b_NOMPRES, 0.05), b_QSY8) * rt_powd_snf(fmax(Re_tmp, 0.05), b_QSY7)) * tanh(10.0 * omega);
    *Mz = 0.0;
    *sig_x = fabs(epsilon_gamma / (((b_PCFX1 * dfz + 1.0) + DHyphi * b_PCFX2) * b_LONGITUDINAL_STIFFNESS * (b_PCFX3 * dpi + 1.0)));
    *sig_y = fabs(Kyalpha / (((b_PCFY1 * dfz + 1.0) + DHyphi * b_PCFY2) * b_LATERAL_STIFFNESS * (b_PCFY3 * dpi + 1.0)));
    *Tw = *Fx * *RL - *My;
}

