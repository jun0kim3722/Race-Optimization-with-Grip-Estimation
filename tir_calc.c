/*
 * main.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.3
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Oct 10 10:35:59 2024
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "main.h"
#include "rtwtypes.h"
#include <string.h>
#include <math.h>
#include "main_private.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include "rt_defines.h"
#include "main_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 0;
const char *gblSlvrJacPatternFileName = "main_rsim_rtw\\main_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 0;
const int_T gblNumModelInputs = 0;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { -1 };

const int_T gblInportDims[] = { -1 } ;

const int_T gblInportComplex[] = { -1 };

const int_T gblInportInterpoFlag[] = { -1 };

const int_T gblInportContinuous[] = { -1 };

#include "simstruc.h"
#include "fixedpoint.h"

/* Block signals (default storage) */
B rtB;

/* Continuous states */
X rtX;

/* Disabled State Vector */
XDis rtXDis;

/* Block states (default storage) */
DW rtDW;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;

/* Forward declaration for local functions */
static void main_div0protect(real_T u, real_T tol, real_T *y, real_T *yabs);
static void main_calculateFz(real_T RL, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0,
  real_T b_Q_V1, real_T b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T
  b_RIM_RADIUS, real_T b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2,
  real_T b_Q_FZ1, real_T b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1,
  real_T b_Q_FCY2, real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T
  b_Q_FYS1, real_T b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T
  b_gamma, real_T Fx_ext, real_T Fy_ext, real_T *Fz, real_T *rhoz);
static real_T main_solveRLwithRhoz(real_T b_LONGVL, real_T b_UNLOADED_RADIUS,
  real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0, real_T b_Q_V1, real_T
  b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T b_RIM_RADIUS, real_T
  b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2, real_T b_Q_FZ1, real_T
  b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2,
  real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T
  b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T b_gamma, real_T
  Fx_ext, real_T Fy_ext, real_T rhoz);
static real_T main_calculateFz_m(real_T RL, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0,
  real_T b_Q_V1, real_T b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T
  b_RIM_RADIUS, real_T b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2,
  real_T b_Q_FZ1, real_T b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1,
  real_T b_Q_FCY2, real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T
  b_Q_FYS1, real_T b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T
  b_gamma, real_T Fx_ext, real_T Fy_ext);
static real_T main_div0protect_k(real_T u);
static void main_abs(const real_T x_data[], const int32_T x_size[2], real_T
                     y_data[], int32_T y_size[2]);
static void main_binary_expand_op_4(real_T *in1, real_T in3, const int32_T in4[2],
  real_T in5, real_T in6);
static void main_atan(real_T x_data[], const int32_T x_size[2]);
static void main_cos(real_T x_data[], const int32_T x_size[2]);
static void main_sqrt(real_T x_data[], const int32_T x_size[2]);
static void main_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
  real_T in2, real_T in3, real_T in4, real_T in5, real_T in6, const int32_T in7
  [2], real_T in8, real_T in9, int32_T in10, real_T in11);
static void main_div0protect_kw(real_T u, real_T *y, real_T *yabs);
static void main_binary_expand_op_2(real_T in1_data[], int32_T in1_size[2],
  const real_T *in2, real_T in3, real_T in4, const real_T *in5, const real_T
  *in6, const int32_T in7[2], real_T in8, const real_T *in9);
static void main_acos(real_T x_data[], const int32_T x_size[2]);
static void main_binary_expand_op_1(real_T *in1, real_T in3, real_T in4, real_T
  in5, const int32_T in6[2], const real_T in7[27], const int32_T in8_size[2],
  real_T in9, real_T in10, int32_T in11, real_T in12);
static void main_binary_expand_op(real_T *in1, const int32_T in2_size[2], real_T
  in3, real_T in4, real_T in5, const int32_T in6[2], const real_T in7[27], const
  int32_T in8_size[2], real_T in9, real_T in10, real_T in11, real_T in12, const
  real_T in13[9]);
static real_T main_solveRLwithFz(real_T b_LONGVL, real_T b_UNLOADED_RADIUS,
  real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0, real_T b_Q_V1, real_T
  b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T b_RIM_RADIUS, real_T
  b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2, real_T b_Q_FZ1, real_T
  b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2,
  real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T
  b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T b_gamma, real_T
  Fx_ext, real_T Fy_ext, real_T Fz);
static void main_vdyncsmtire(real_T omega, real_T Vx, real_T Vy, real_T psidot,
  real_T b_gamma, real_T press, const real_T scaleFactors[27], real_T *rhoz,
  real_T b_turnslip, real_T b_PRESMAX, real_T b_PRESMIN, real_T b_FZMAX, real_T
  b_FZMIN, real_T b_VXLOW, real_T b_KPUMAX, real_T b_KPUMIN, real_T b_ALPMAX,
  real_T b_ALPMIN, real_T b_CAMMIN, real_T b_CAMMAX, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_RIM_RADIUS, real_T b_NOMPRES, real_T b_FNOMIN,
  real_T b_VERTICAL_STIFFNESS, real_T b_DREFF, real_T b_BREFF, real_T b_FREFF,
  real_T b_Q_RE0, real_T b_Q_V1, real_T b_Q_V2, real_T b_Q_FZ1, real_T b_Q_FZ2,
  real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2, real_T
  b_BOTTOM_OFFST, real_T b_BOTTOM_STIFF, real_T b_PCX1, real_T b_PDX1, real_T
  b_PDX2, real_T b_PDX3, real_T b_PEX1, real_T b_PEX2, real_T b_PEX3, real_T
  b_PEX4, real_T b_PKX1, real_T b_PKX2, real_T b_PKX3, real_T b_PHX1, real_T
  b_PHX2, real_T b_PVX1, real_T b_PVX2, real_T b_PPX1, real_T b_PPX2, real_T
  b_PPX3, real_T b_PPX4, real_T b_RBX1, real_T b_RBX2, real_T b_RBX3, real_T
  b_RCX1, real_T b_REX1, real_T b_REX2, real_T b_RHX1, real_T b_QSX1, real_T
  b_QSX2, real_T b_QSX3, real_T b_QSX4, real_T b_QSX5, real_T b_QSX6, real_T
  b_QSX7, real_T b_QSX8, real_T b_QSX9, real_T b_QSX10, real_T b_QSX11, real_T
  b_PPMX1, real_T b_PCY1, real_T b_PDY1, real_T b_PDY2, real_T b_PDY3, real_T
  b_PEY1, real_T b_PEY2, real_T b_PEY3, real_T b_PEY4, real_T b_PEY5, real_T
  b_PKY1, real_T b_PKY2, real_T b_PKY3, real_T b_PKY4, real_T b_PKY5, real_T
  b_PKY6, real_T b_PKY7, real_T b_PHY1, real_T b_PHY2, real_T b_PVY1, real_T
  b_PVY2, real_T b_PVY3, real_T b_PVY4, real_T b_PPY1, real_T b_PPY2, real_T
  b_PPY3, real_T b_PPY4, real_T b_PPY5, real_T b_RBY1, real_T b_RBY2, real_T
  b_RBY3, real_T b_RBY4, real_T b_RCY1, real_T b_REY1, real_T b_REY2, real_T
  b_RHY1, real_T b_RHY2, real_T b_RVY1, real_T b_RVY2, real_T b_RVY3, real_T
  b_RVY4, real_T b_RVY5, real_T b_RVY6, real_T b_QSY1, real_T b_QSY2, real_T
  b_QSY3, real_T b_QSY4, real_T b_QSY5, real_T b_QSY6, real_T b_QSY7, real_T
  b_QSY8, real_T b_QBZ1, real_T b_QBZ2, real_T b_QBZ3, real_T b_QBZ4, real_T
  b_QBZ5, real_T b_QBZ6, real_T b_QBZ9, real_T b_QBZ10, real_T b_QCZ1, real_T
  b_QDZ1, real_T b_QDZ2, real_T b_QDZ3, real_T b_QDZ4, real_T b_QDZ6, real_T
  b_QDZ7, real_T b_QDZ8, real_T b_QDZ9, real_T b_QDZ10, real_T b_QDZ11, real_T
  b_QEZ1, real_T b_QEZ2, real_T b_QEZ3, real_T b_QEZ4, real_T b_QEZ5, real_T
  b_QHZ1, real_T b_QHZ2, real_T b_QHZ3, real_T b_QHZ4, real_T b_PPZ1, real_T
  b_PPZ2, real_T b_SSZ1, real_T b_SSZ2, real_T b_SSZ3, real_T b_SSZ4, real_T
  b_PDXP1, real_T b_PDXP2, real_T b_PDXP3, real_T b_PKYP1, real_T b_PDYP1,
  real_T b_PDYP2, real_T b_PDYP3, real_T b_PDYP4, real_T b_PHYP1, real_T b_PHYP2,
  real_T b_PHYP3, real_T b_PHYP4, real_T b_PECP1, real_T b_PECP2, real_T b_QDTP1,
  real_T b_QCRP1, real_T b_QCRP2, real_T b_QBRP1, real_T b_QDRP1, real_T b_QDRP2,
  real_T b_WIDTH, real_T b_Q_RA1, real_T b_Q_RA2, real_T b_Q_RB1, real_T b_Q_RB2,
  real_T b_QSX12, real_T b_QSX13, real_T b_QSX14, real_T
  b_LONGITUDINAL_STIFFNESS, real_T b_LATERAL_STIFFNESS, real_T b_PCFX1, real_T
  b_PCFX2, real_T b_PCFX3, real_T b_PCFY1, real_T b_PCFY2, real_T b_PCFY3,
  real_T Fx_ext, real_T Fy_ext, real_T Fz_ext, real_T vertType, real_T b_Q_CAM1,
  real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T b_Q_FYS2, real_T
  b_Q_FYS3, real_T b_ASPECT_RATIO, real_T *Fx, real_T *Fy, real_T *Fz, real_T
  *Mx, real_T *My, real_T *Mz, real_T *Re, real_T *kappa, real_T *alpha, real_T *
  sig_x, real_T *sig_y, real_T *patch_a, real_T *patch_b, real_T *RL, real_T *Tw);

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_div0protect(real_T u, real_T tol, real_T *y, real_T *yabs)
{
  real_T x;
  *yabs = fabs(u);
  x = 2.0 * tol;
  if (*yabs < tol) {
    real_T varargin_1;
    varargin_1 = *yabs / tol;
    varargin_1 *= varargin_1;
    *yabs = x / (3.0 - varargin_1);
  }

  *y = *yabs;
  if (u < 0.0) {
    *y = -*yabs;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
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
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_calculateFz(real_T RL, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0,
  real_T b_Q_V1, real_T b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T
  b_RIM_RADIUS, real_T b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2,
  real_T b_Q_FZ1, real_T b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1,
  real_T b_Q_FCY2, real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T
  b_Q_FYS1, real_T b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T
  b_gamma, real_T Fx_ext, real_T Fy_ext, real_T *Fz, real_T *rhoz)
{
  real_T Q_FZ1_squared;
  real_T Romega;
  real_T rho_zfr;
  real_T rho_zg;
  boolean_T d;
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
  d = rtIsNaN(rho_zg);
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
static real_T main_solveRLwithRhoz(real_T b_LONGVL, real_T b_UNLOADED_RADIUS,
  real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0, real_T b_Q_V1, real_T
  b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T b_RIM_RADIUS, real_T
  b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2, real_T b_Q_FZ1, real_T
  b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2,
  real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T
  b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T b_gamma, real_T
  Fx_ext, real_T Fy_ext, real_T rhoz)
{
  real_T RL;
  real_T b_calcRhoz;
  real_T b_y1;
  real_T x0;
  real_T x1;
  real_T x2;
  real_T ytol;
  int32_T i;
  boolean_T converged;
  boolean_T exitg1;
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
static real_T main_calculateFz_m(real_T RL, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0,
  real_T b_Q_V1, real_T b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T
  b_RIM_RADIUS, real_T b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2,
  real_T b_Q_FZ1, real_T b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1,
  real_T b_Q_FCY2, real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T
  b_Q_FYS1, real_T b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T
  b_gamma, real_T Fx_ext, real_T Fy_ext)
{
  real_T Fz;
  real_T Q_FZ1_squared;
  real_T Romega;
  real_T Romega_tmp;
  real_T rho_zfr;
  real_T rho_zg;
  boolean_T d;
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
  d = rtIsNaN(rho_zg);
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

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
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
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static real_T main_div0protect_k(real_T u)
{
  real_T y;
  y = fabs(u);
  if (y < 0.0001) {
    y /= 0.0001;
    y *= y;
    y = 0.0002 / (3.0 - y);
  }

  return y;
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_abs(const real_T x_data[], const int32_T x_size[2], real_T
                     y_data[], int32_T y_size[2])
{
  int32_T b;
  y_size[0] = 1;
  b = x_size[1];
  y_size[1] = b;
  if (b - 1 >= 0) {
    y_data[0] = fabs(x_data[0]);
  }
}

static void main_binary_expand_op_4(real_T *in1, real_T in3, const int32_T in4[2],
  real_T in5, real_T in6)
{
  real_T tmp_data;
  int32_T in5_size[2];
  int32_T tmp_size[2];
  int32_T in4_idx_0;
  int32_T in4_idx_1;
  int32_T in4_idx_1_0;

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
static void main_atan(real_T x_data[], const int32_T x_size[2])
{
  int32_T b;
  int32_T k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = atan(x_data[0]);
  }
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_cos(real_T x_data[], const int32_T x_size[2])
{
  int32_T b;
  int32_T k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = cos(x_data[0]);
  }
}

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_sqrt(real_T x_data[], const int32_T x_size[2])
{
  int32_T b;
  int32_T k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = sqrt(x_data[0]);
  }
}

static void main_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
  real_T in2, real_T in3, real_T in4, real_T in5, real_T in6, const int32_T in7
  [2], real_T in8, real_T in9, int32_T in10, real_T in11)
{
  real_T in9_data;
  real_T tmp;
  real_T tmp_data;
  int32_T in9_size[2];
  int32_T tmp_size[2];
  int32_T i;
  int32_T in7_idx_1;
  int32_T stride_2_1;

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
static void main_div0protect_kw(real_T u, real_T *y, real_T *yabs)
{
  *yabs = fabs(u);
  if (*yabs < 0.0001) {
    real_T varargin_1;
    varargin_1 = *yabs / 0.0001;
    varargin_1 *= varargin_1;
    *yabs = 0.0002 / (3.0 - varargin_1);
  }

  *y = *yabs;
  if (u < 0.0) {
    *y = -*yabs;
  }
}

static void main_binary_expand_op_2(real_T in1_data[], int32_T in1_size[2],
  const real_T *in2, real_T in3, real_T in4, const real_T *in5, const real_T
  *in6, const int32_T in7[2], real_T in8, const real_T *in9)
{
  real_T tmp;
  real_T tmp_data;
  int32_T in8_size[2];
  int32_T tmp_size[2];
  int32_T in7_idx_0;
  int32_T in7_idx_1;
  int32_T in7_idx_1_0;

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
static void main_acos(real_T x_data[], const int32_T x_size[2])
{
  int32_T b;
  int32_T k;
  b = x_size[1];
  for (k = 0; k < b; k++) {
    x_data[0] = acos(x_data[0]);
  }
}

static void main_binary_expand_op_1(real_T *in1, real_T in3, real_T in4, real_T
  in5, const int32_T in6[2], const real_T in7[27], const int32_T in8_size[2],
  real_T in9, real_T in10, int32_T in11, real_T in12)
{
  int32_T i;
  int32_T in6_idx_1;
  int32_T in6_idx_1_0;

  /* MATLAB Function: '<S3>/Magic Tire Const Input' incorporates:
   *  SignalConversion generated from: '<S6>/ SFunction '
   */
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

  /* End of MATLAB Function: '<S3>/Magic Tire Const Input' */
}

static void main_binary_expand_op(real_T *in1, const int32_T in2_size[2], real_T
  in3, real_T in4, real_T in5, const int32_T in6[2], const real_T in7[27], const
  int32_T in8_size[2], real_T in9, real_T in10, real_T in11, real_T in12, const
  real_T in13[9])
{
  real_T in3_data;
  int32_T in6_idx_1;
  int32_T in6_idx_1_0;
  int32_T tmp;

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
static real_T main_solveRLwithFz(real_T b_LONGVL, real_T b_UNLOADED_RADIUS,
  real_T b_ASPECT_RATIO, real_T b_WIDTH, real_T b_Q_RE0, real_T b_Q_V1, real_T
  b_FNOMIN, real_T b_VERTICAL_STIFFNESS, real_T b_RIM_RADIUS, real_T
  b_BOTTOM_STIFF, real_T b_BOTTOM_OFFST, real_T b_Q_V2, real_T b_Q_FZ1, real_T
  b_Q_FZ2, real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2,
  real_T b_Q_CAM1, real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T
  b_Q_FYS2, real_T b_Q_FYS3, real_T dpi, real_T omega, real_T b_gamma, real_T
  Fx_ext, real_T Fy_ext, real_T Fz)
{
  real_T RL;
  real_T b_y1;
  real_T d_idx_0;
  real_T x0;
  real_T x1;
  real_T ytol;
  int32_T i;
  boolean_T converged;
  boolean_T exitg1;
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

/* Function for MATLAB Function: '<S3>/Magic Tire Const Input' */
static void main_vdyncsmtire(real_T omega, real_T Vx, real_T Vy, real_T psidot,
  real_T b_gamma, real_T press, const real_T scaleFactors[27], real_T *rhoz,
  real_T b_turnslip, real_T b_PRESMAX, real_T b_PRESMIN, real_T b_FZMAX, real_T
  b_FZMIN, real_T b_VXLOW, real_T b_KPUMAX, real_T b_KPUMIN, real_T b_ALPMAX,
  real_T b_ALPMIN, real_T b_CAMMIN, real_T b_CAMMAX, real_T b_LONGVL, real_T
  b_UNLOADED_RADIUS, real_T b_RIM_RADIUS, real_T b_NOMPRES, real_T b_FNOMIN,
  real_T b_VERTICAL_STIFFNESS, real_T b_DREFF, real_T b_BREFF, real_T b_FREFF,
  real_T b_Q_RE0, real_T b_Q_V1, real_T b_Q_V2, real_T b_Q_FZ1, real_T b_Q_FZ2,
  real_T b_Q_FCX, real_T b_Q_FCY, real_T b_PFZ1, real_T b_Q_FCY2, real_T
  b_BOTTOM_OFFST, real_T b_BOTTOM_STIFF, real_T b_PCX1, real_T b_PDX1, real_T
  b_PDX2, real_T b_PDX3, real_T b_PEX1, real_T b_PEX2, real_T b_PEX3, real_T
  b_PEX4, real_T b_PKX1, real_T b_PKX2, real_T b_PKX3, real_T b_PHX1, real_T
  b_PHX2, real_T b_PVX1, real_T b_PVX2, real_T b_PPX1, real_T b_PPX2, real_T
  b_PPX3, real_T b_PPX4, real_T b_RBX1, real_T b_RBX2, real_T b_RBX3, real_T
  b_RCX1, real_T b_REX1, real_T b_REX2, real_T b_RHX1, real_T b_QSX1, real_T
  b_QSX2, real_T b_QSX3, real_T b_QSX4, real_T b_QSX5, real_T b_QSX6, real_T
  b_QSX7, real_T b_QSX8, real_T b_QSX9, real_T b_QSX10, real_T b_QSX11, real_T
  b_PPMX1, real_T b_PCY1, real_T b_PDY1, real_T b_PDY2, real_T b_PDY3, real_T
  b_PEY1, real_T b_PEY2, real_T b_PEY3, real_T b_PEY4, real_T b_PEY5, real_T
  b_PKY1, real_T b_PKY2, real_T b_PKY3, real_T b_PKY4, real_T b_PKY5, real_T
  b_PKY6, real_T b_PKY7, real_T b_PHY1, real_T b_PHY2, real_T b_PVY1, real_T
  b_PVY2, real_T b_PVY3, real_T b_PVY4, real_T b_PPY1, real_T b_PPY2, real_T
  b_PPY3, real_T b_PPY4, real_T b_PPY5, real_T b_RBY1, real_T b_RBY2, real_T
  b_RBY3, real_T b_RBY4, real_T b_RCY1, real_T b_REY1, real_T b_REY2, real_T
  b_RHY1, real_T b_RHY2, real_T b_RVY1, real_T b_RVY2, real_T b_RVY3, real_T
  b_RVY4, real_T b_RVY5, real_T b_RVY6, real_T b_QSY1, real_T b_QSY2, real_T
  b_QSY3, real_T b_QSY4, real_T b_QSY5, real_T b_QSY6, real_T b_QSY7, real_T
  b_QSY8, real_T b_QBZ1, real_T b_QBZ2, real_T b_QBZ3, real_T b_QBZ4, real_T
  b_QBZ5, real_T b_QBZ6, real_T b_QBZ9, real_T b_QBZ10, real_T b_QCZ1, real_T
  b_QDZ1, real_T b_QDZ2, real_T b_QDZ3, real_T b_QDZ4, real_T b_QDZ6, real_T
  b_QDZ7, real_T b_QDZ8, real_T b_QDZ9, real_T b_QDZ10, real_T b_QDZ11, real_T
  b_QEZ1, real_T b_QEZ2, real_T b_QEZ3, real_T b_QEZ4, real_T b_QEZ5, real_T
  b_QHZ1, real_T b_QHZ2, real_T b_QHZ3, real_T b_QHZ4, real_T b_PPZ1, real_T
  b_PPZ2, real_T b_SSZ1, real_T b_SSZ2, real_T b_SSZ3, real_T b_SSZ4, real_T
  b_PDXP1, real_T b_PDXP2, real_T b_PDXP3, real_T b_PKYP1, real_T b_PDYP1,
  real_T b_PDYP2, real_T b_PDYP3, real_T b_PDYP4, real_T b_PHYP1, real_T b_PHYP2,
  real_T b_PHYP3, real_T b_PHYP4, real_T b_PECP1, real_T b_PECP2, real_T b_QDTP1,
  real_T b_QCRP1, real_T b_QCRP2, real_T b_QBRP1, real_T b_QDRP1, real_T b_QDRP2,
  real_T b_WIDTH, real_T b_Q_RA1, real_T b_Q_RA2, real_T b_Q_RB1, real_T b_Q_RB2,
  real_T b_QSX12, real_T b_QSX13, real_T b_QSX14, real_T
  b_LONGITUDINAL_STIFFNESS, real_T b_LATERAL_STIFFNESS, real_T b_PCFX1, real_T
  b_PCFX2, real_T b_PCFX3, real_T b_PCFY1, real_T b_PCFY2, real_T b_PCFY3,
  real_T Fx_ext, real_T Fy_ext, real_T Fz_ext, real_T vertType, real_T b_Q_CAM1,
  real_T b_Q_CAM2, real_T b_Q_CAM3, real_T b_Q_FYS1, real_T b_Q_FYS2, real_T
  b_Q_FYS3, real_T b_ASPECT_RATIO, real_T *Fx, real_T *Fy, real_T *Fz, real_T
  *Mx, real_T *My, real_T *Mz, real_T *Re, real_T *kappa, real_T *alpha, real_T *
  sig_x, real_T *sig_y, real_T *patch_a, real_T *patch_b, real_T *RL, real_T *Tw)
{
  __m128d tmp_0;
  real_T zeta[9];
  real_T tmp_1[2];
  real_T Cz;
  real_T DHyphi;
  real_T Fzo_prime;
  real_T Kyalpha;
  real_T Kyalpha_tmp;
  real_T Kygammao;
  real_T Re_tmp;
  real_T SHy;
  real_T SHykappa;
  real_T SVygamma;
  real_T SVygamma_tmp;
  real_T Vc;
  real_T Vs;
  real_T Vsy;
  real_T b_idx_0;
  real_T c_u;
  real_T dfz;
  real_T dpi;
  real_T epsilon_gamma;
  real_T f_idx_0;
  real_T gamma_star;
  real_T ib;
  real_T jb_idx_0;
  real_T kappa_x;
  real_T lam_mux_star;
  real_T lam_mux_star_tmp;
  real_T lam_muy_prime;
  real_T lb_idx_0;
  real_T mu_y;
  real_T mu_y_tmp;
  real_T n_idx_0;
  real_T pb_idx_0;
  real_T phi;
  real_T phi_data;
  real_T phi_data_0;
  real_T phi_t;
  real_T rb_idx_0;
  real_T tmpDrphiVar_data;
  real_T tmp_data_0;
  int32_T ib_tmp[2];
  int32_T nb_size[2];
  int32_T nb_tmp_size[2];
  int32_T phi_size[2];
  int32_T phi_size_0[2];
  int32_T tmpDrphiVar_size[2];
  int32_T tmp_size[2];
  int32_T vc_tmp_size[2];
  int32_T i;
  int32_T loop_ub;
  int32_T ob_size_idx_0;
  int32_T tmp;
  int32_T tmp_data;
  int32_T trueCount;
  int8_T nb_data;
  boolean_T isLowSpeed;
  boolean_T tmp_2;
  boolean_T turnslipinds;
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

  ib_tmp[0] = 1;
  ib_tmp[1] = trueCount;
  if (Vx < b_VXLOW) {
    nb_data = 0;
  }

  tmpDrphiVar_size[0] = 1;
  tmpDrphiVar_size[1] = ib_tmp[1];
  loop_ub = ib_tmp[1];
  if (loop_ub - 1 >= 0) {
    tmpDrphiVar_data = Vx;
  }

  main_abs(&tmpDrphiVar_data, tmpDrphiVar_size, &tmp_data_0, tmp_size);
  if (ib_tmp[1] == tmp_size[1]) {
    tmpDrphiVar_size[0] = 1;
    tmpDrphiVar_size[1] = ib_tmp[1];
    loop_ub = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      tmpDrphiVar_data = Vx;
    }

    main_abs(&tmpDrphiVar_data, tmpDrphiVar_size, &tmp_data_0, tmp_size);
    loop_ub = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      ib = tmp_data_0 / b_VXLOW * phi_t;
    }
  } else {
    main_binary_expand_op_4(&ib, phi_t, ib_tmp, Vx, b_VXLOW);
  }

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

    main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
    main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
    i = ob_size_idx_0;
    if (i - 1 >= 0) {
      zeta[1] = tmpDrphiVar_data;
    }

    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    ob_size_idx_0 = trueCount;
    phi_size[0] = 1;
    phi_size[1] = ib_tmp[1];
    loop_ub = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      phi_data = phi;
    }

    main_abs(&phi_data, phi_size, &tmp_data_0, tmp_size);
    tmpDrphiVar_size[0] = 1;
    loop_ub = tmp_size[1];
    tmpDrphiVar_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      tmpDrphiVar_data = b_UNLOADED_RADIUS * tmp_data_0;
    }

    main_sqrt(&tmpDrphiVar_data, tmpDrphiVar_size);
    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    phi_size[0] = 1;
    phi_size[1] = trueCount;
    phi_size_0[0] = 1;
    phi_size_0[1] = trueCount;
    if (trueCount - 1 >= 0) {
      phi_data = phi;
      phi_data_0 = phi;
    }

    main_abs(&phi_data, phi_size, &tmp_data_0, tmp_size);
    main_abs(&phi_data_0, phi_size_0, &phi_data, phi_size);
    if (phi_size[1] == 1) {
      i = tmpDrphiVar_size[1];
    } else {
      i = phi_size[1];
    }

    if ((tmp_size[1] == tmpDrphiVar_size[1]) && (i == ib_tmp[1])) {
      SHy = atan(b_PDYP3 * Kyalpha);
      SHy = cos(SHy);
      phi_size[0] = 1;
      phi_size[1] = trueCount;
      if (trueCount - 1 >= 0) {
        phi_data = phi;
      }

      main_abs(&phi_data, phi_size, &tmp_data_0, tmp_size);
      loop_ub = ib_tmp[1] - 1;
      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = ib_tmp[1];
      for (i = 0; i <= loop_ub; i++) {
        tmpDrphiVar_data = (b_PDYP2 * dfz + 1.0) * b_PDYP1 * SHy *
          (b_UNLOADED_RADIUS * tmp_data_0 + b_PDYP4 * tmpDrphiVar_data);
      }
    } else {
      main_binary_expand_op_3(&tmpDrphiVar_data, tmpDrphiVar_size, b_PDYP1,
        b_PDYP2, dfz, b_PDYP3, Kyalpha, ib_tmp, b_UNLOADED_RADIUS, phi,
        trueCount, b_PDYP4);
    }

    main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
    main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
    i = ob_size_idx_0;
    if (i - 1 >= 0) {
      zeta[2] = tmpDrphiVar_data;
    }

    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    ob_size_idx_0 = trueCount;
    Kyalpha = b_UNLOADED_RADIUS * b_UNLOADED_RADIUS;
    tmpDrphiVar_size[0] = 1;
    tmpDrphiVar_size[1] = ib_tmp[1];
    Kyalpha *= b_PKYP1;
    loop_ub = ib_tmp[0] * ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      phi_t = phi * phi;
      tmpDrphiVar_data = Kyalpha * phi_t;
    }

    main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
    main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
    i = ob_size_idx_0;
    if (i - 1 >= 0) {
      zeta[3] = tmpDrphiVar_data;
    }
  }

  //------------------------------------------------------------------------

  Kygammao = (b_PKY7 * dfz + b_PKY6) * *Fz * (b_PPY5 * dpi + 1.0) *
    scaleFactors[14];
  SVygamma_tmp = *Fz / Fzo_prime;
  SVygamma = sin(atan(SVygamma_tmp / (lam_mux_star_tmp * b_PKY5 + b_PKY2) /
                      (b_PPY2 * dpi + 1.0)) * b_PKY4);
  phi_t = fabs(gamma_star);
  Kyalpha_tmp = (b_PPY1 * dpi + 1.0) * (b_PKY1 * Fzo_prime);
  Kyalpha = (1.0 - b_PKY3 * phi_t) * Kyalpha_tmp * SVygamma * zeta[3] *
    scaleFactors[5];
  main_div0protect_kw(Kyalpha, &Vc, &SHy);
  main_div0protect_kw(Kyalpha_tmp * (1.0 - b_PKY3 * 0.0) * SVygamma * zeta[3] *
                      scaleFactors[5], &SHy, &DHyphi);
  pb_idx_0 = b_PHYP1;
  if (b_PHYP1 < 0.0) {
    pb_idx_0 = 0.0;
  }

  SVygamma = tanh(Vx);
  DHyphi = (b_PHYP3 * dfz + b_PHYP2) * SVygamma;
  rb_idx_0 = b_PHYP4;
  if (b_PHYP4 > 1.0) {
    rb_idx_0 = 1.0;
  }

  SHy = Kygammao / (1.0 - epsilon_gamma) / (pb_idx_0 * DHyphi * SHy);
  Kyalpha_tmp = b_UNLOADED_RADIUS * phi;
  SHy *= Kyalpha_tmp;
  DHyphi = sin(atan(SHy - (SHy - atan(SHy)) * rb_idx_0) * pb_idx_0) * DHyphi *
    SVygamma;
  SVygamma = (b_PVY4 * dfz + b_PVY3) * *Fz * gamma_star * zeta[2] *
    scaleFactors[14] * lam_muy_prime;
  SHy = 0.0;
  pb_idx_0 = lb_idx_0 * c_u;
  SHykappa *= lb_idx_0;
  SHykappa = cos(atan(pb_idx_0 - (pb_idx_0 - atan(pb_idx_0)) * jb_idx_0) *
                 b_RCY1) / cos(atan(SHykappa - (SHykappa - atan(SHykappa)) *
    jb_idx_0) * b_RCY1);
  rb_idx_0 = SHykappa;
  if (SHykappa < 0.0) {
    rb_idx_0 = 0.0;
  }

  if (tmp_2) {
    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    ib_tmp[0] = 1;
    ib_tmp[1] = tmp;
    if (trueCount - 1 >= 0) {
      zeta[4] = (DHyphi + 1.0) - SVygamma / Vc;
    }

    tmpDrphiVar_size[0] = 1;
    tmpDrphiVar_size[1] = ib_tmp[1];
    loop_ub = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      tmpDrphiVar_data = b_QDTP1 * b_UNLOADED_RADIUS * phi;
    }

    main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
    main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
    if (trueCount - 1 >= 0) {
      zeta[5] = tmpDrphiVar_data;
    }

    tmpDrphiVar_size[0] = 1;
    tmpDrphiVar_size[1] = ib_tmp[1];
    loop_ub = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      tmpDrphiVar_data = b_QBRP1 * b_UNLOADED_RADIUS * phi;
    }

    main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
    main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
    if (trueCount - 1 >= 0) {
      zeta[6] = tmpDrphiVar_data;
    }

    SHy = b_QCRP1 * mu_y * b_UNLOADED_RADIUS * *Fz * sqrt(SVygamma_tmp) *
      scaleFactors[26];
    jb_idx_0 = SHy;
    if (SHy < 0.0) {
      jb_idx_0 = 1.0E-6;
    }

    SHykappa = b_QDRP1;
    if (b_QDRP1 < 0.0) {
      SHykappa = 0.0;
    }

    pb_idx_0 = b_QDRP2;
    if (b_QDRP2 < 0.0) {
      pb_idx_0 = 0.0;
    }

    SHy = jb_idx_0 / sin(1.5707963267948966 * SHykappa);
    c_u = 1.0 - epsilon_gamma;
    if (rtIsNaN(c_u)) {
      c_u = (rtNaN);
    } else if (c_u < 0.0) {
      c_u = -1.0;
    } else {
      c_u = (c_u > 0.0);
    }

    epsilon_gamma = ((b_QDZ11 * dfz + b_QDZ10) * fabs(b_idx_0) + (b_QDZ9 * dfz +
      b_QDZ8)) * (*Fz * b_UNLOADED_RADIUS) * scaleFactors[15] / (SHykappa * SHy *
      (1.0 - epsilon_gamma) + 0.0001 * c_u);
    phi = Kyalpha_tmp;
    c_u = epsilon_gamma * phi;
    epsilon_gamma = sin(atan(c_u - (c_u - atan(c_u)) * pb_idx_0) * SHykappa) *
      SHy;
    if (rtIsNaN(epsilon_gamma)) {
      SHy = (rtNaN);
    } else if (epsilon_gamma < 0.0) {
      SHy = -1.0;
    } else {
      SHy = (epsilon_gamma > 0.0);
    }

    phi = SHy;
    if (SHy == 0.0) {
      phi = 1.0;
    }

    phi_size[0] = 1;
    phi_size[1] = ib_tmp[1];
    loop_ub = ib_tmp[1];
    phi_size_0[0] = 1;
    phi_size_0[1] = ib_tmp[1];
    if (loop_ub - 1 >= 0) {
      phi_data = epsilon_gamma;
      phi_data_0 = epsilon_gamma;
    }

    main_abs(&phi_data, phi_size, &tmp_data_0, tmp_size);
    main_abs(&phi_data_0, phi_size_0, &phi_data, phi_size);
    if (phi_size[1] == 1) {
      i = ib_tmp[1];
    } else {
      i = phi_size[1];
    }

    if ((tmp_size[1] == ib_tmp[1]) && (i == ib_tmp[1])) {
      SHy = fabs(ib);
      SHy = atan(b_QCRP2 * b_UNLOADED_RADIUS * SHy);
      phi_size[0] = 1;
      phi_size[1] = ib_tmp[1];
      loop_ub = ib_tmp[1];
      if (loop_ub - 1 >= 0) {
        phi_data = epsilon_gamma;
      }

      main_abs(&phi_data, phi_size, &tmp_data_0, tmp_size);
      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = ib_tmp[1];
      loop_ub = ib_tmp[1];
      if (loop_ub - 1 >= 0) {
        tmpDrphiVar_data = jb_idx_0 * 2.0 / 3.1415926535897931 * SHy * rb_idx_0 /
          (0.0001 * phi + tmp_data_0);
      }
    } else {
      main_binary_expand_op_2(&tmpDrphiVar_data, tmpDrphiVar_size, &jb_idx_0,
        b_QCRP2, b_UNLOADED_RADIUS, &ib, &rb_idx_0, ib_tmp, epsilon_gamma, &phi);
    }

    loop_ub = tmpDrphiVar_size[1];
    for (i = 0; i < loop_ub; i++) {
      if (tmpDrphiVar_data > 1.0) {
        tmpDrphiVar_data = 1.0;
      }
    }

    for (i = 0; i < loop_ub; i++) {
      if (tmpDrphiVar_data < -1.0) {
        tmpDrphiVar_data = -1.0;
      }
    }

    main_acos(&tmpDrphiVar_data, tmpDrphiVar_size);
    if (trueCount - 1 >= 0) {
      zeta[7] = 0.63661977236758138 * tmpDrphiVar_data;
      zeta[8] = epsilon_gamma + 1.0;
    }

    SHy = 0.0;
    if (tmp - 1 >= 0) {
      tmp_data = 0;
    }

    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    if (ib_tmp[1] == 1) {
      i = tmp;
      loop_ub = tmp;
    } else {
      i = ib_tmp[1];
      loop_ub = ib_tmp[1];
    }

    if (loop_ub == 1) {
      loop_ub = ib_tmp[1];
    } else if (ib_tmp[1] == 1) {
      loop_ub = tmp;
    } else {
      loop_ub = ib_tmp[1];
    }

    if ((ib_tmp[1] == tmp) && (i == ib_tmp[1]) && (loop_ub == trueCount)) {
      loop_ub = ib_tmp[0] * ib_tmp[1];
      if (loop_ub - 1 >= 0) {
        SHy = ((b_PHY2 * dfz + b_PHY1) * scaleFactors[11] + DHyphi) - SVygamma /
          Vc;
      }
    } else {
      main_binary_expand_op_1(&SHy, b_PHY1, b_PHY2, dfz, ib_tmp, scaleFactors,
        nb_tmp_size, DHyphi, SVygamma, trueCount, Vc);
    }
  }

  epsilon_gamma = b_PCX1 * scaleFactors[6];
  Kyalpha_tmp = epsilon_gamma;
  if (epsilon_gamma < 0.0) {
    Kyalpha_tmp = 0.0;
  }

  c_u = b_idx_0 * b_idx_0;
  epsilon_gamma = ((b_PPX3 * dpi + 1.0) + mu_y_tmp * b_PPX4) * (b_PDX2 * dfz +
    b_PDX1) * (1.0 - c_u * b_PDX3) * lam_mux_star * *Fz * zeta[1];
  jb_idx_0 = epsilon_gamma;
  if (epsilon_gamma < 0.0) {
    jb_idx_0 = 0.0;
  }

  DHyphi = dfz * dfz;
  epsilon_gamma = ((b_PEX2 * dfz + b_PEX1) + DHyphi * b_PEX3) * (1.0 - tanh(10.0
    * kappa_x) * b_PEX4) * scaleFactors[8];
  lb_idx_0 = epsilon_gamma;
  if (epsilon_gamma > 1.0) {
    lb_idx_0 = 1.0;
  }

  epsilon_gamma = (b_PKX2 * dfz + b_PKX1) * *Fz * exp(b_PKX3 * dfz) * ((b_PPX1 *
    dpi + 1.0) + mu_y_tmp * b_PPX2) * scaleFactors[4];
  main_div0protect_kw(Kyalpha_tmp * jb_idx_0, &phi, &SHykappa);
  phi = epsilon_gamma / phi;
  SHykappa = b_REX2 * dfz + b_REX1;
  mu_y_tmp = SHykappa;
  if (SHykappa > 1.0) {
    mu_y_tmp = 1.0;
  }

  SHykappa = (lam_mux_star_tmp * b_RBX3 + b_RBX1) * cos(atan(b_RBX2 * *kappa)) *
    scaleFactors[18];
  SVygamma_tmp = SHykappa;
  if (SHykappa < 0.0) {
    SVygamma_tmp = 0.0;
  }

  SHykappa = *alpha + b_RHX1;
  pb_idx_0 = SVygamma_tmp * SHykappa;
  SHykappa = SVygamma_tmp * b_RHX1;
  SHykappa = cos(atan(pb_idx_0 - (pb_idx_0 - atan(pb_idx_0)) * mu_y_tmp) *
                 b_RCX1) / cos(atan(SHykappa - (SHykappa - atan(SHykappa)) *
    mu_y_tmp) * b_RCX1);
  if (SHykappa < 0.0) {
    SHykappa = 0.0;
  }

  kappa_x *= phi;
  *Fx = ((b_PVX2 * dfz + b_PVX1) * *Fz * (lam_mux_star * 10.0 / (9.0 *
           lam_mux_star + 1.0)) * scaleFactors[12] * zeta[1] + sin(atan(kappa_x
           - (kappa_x - atan(kappa_x)) * lb_idx_0) * Kyalpha_tmp) * jb_idx_0) *
    SHykappa;
  kappa_x = b_PCY1 * scaleFactors[7];
  mu_y_tmp = kappa_x;
  if (kappa_x < 0.0) {
    mu_y_tmp = 0.0;
  }

  mu_y *= *Fz;
  phi = mu_y * zeta[2];
  main_div0protect_kw(mu_y_tmp * phi, &kappa_x, &lam_mux_star);
  kappa_x = Kyalpha / kappa_x;
  if (isLowSpeed) {
    trueCount = 0;
    if (isLowSpeed) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    vc_tmp_size[0] = 1;
    vc_tmp_size[1] = trueCount;
    nb_size[0] = 1;
    loop_ub = vc_tmp_size[1];
    nb_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      nb_data = 0;
    }

    ib_tmp[0] = 1;
    ib_tmp[1] = loop_ub;
    if (ib_tmp[1] == 1) {
      i = loop_ub;
    } else {
      i = ib_tmp[1];
    }

    if ((ib_tmp[1] == loop_ub) && (i == ib_tmp[1])) {
      tmp = ib_tmp[1];
      if ((tmp - 1 >= 0) && (loop_ub - 1 >= 0)) {
        ib = (((Kygammao * gamma_star - SVygamma) / Vc * zeta[0] + (b_PHY2 * dfz
                + b_PHY1) * scaleFactors[11]) + zeta[4]) - 1.0;
      }

      if (loop_ub - 1 >= 0) {
        SHy = ib;
      }
    } else {
      main_binary_expand_op(&SHy, nb_size, b_PHY1, b_PHY2, dfz, ib_tmp,
                            scaleFactors, vc_tmp_size, Kygammao, gamma_star,
                            SVygamma, Vc, zeta);
    }
  }

  lam_mux_star = (b_PVY2 * dfz + b_PVY1) * *Fz * scaleFactors[13] *
    lam_muy_prime * zeta[2] + SVygamma;
  lam_muy_prime = *alpha + SHy;
  if (rtIsNaN(lam_muy_prime)) {
    Kygammao = (rtNaN);
  } else if (lam_muy_prime < 0.0) {
    Kygammao = -1.0;
  } else {
    Kygammao = (lam_muy_prime > 0.0);
  }

  if (Kygammao == 0.0) {
    Kygammao = 1.0;
  }

  Kygammao = ((lam_mux_star_tmp * b_PEY5 + 1.0) - (b_PEY4 * gamma_star + b_PEY3)
              * Kygammao) * (b_PEY2 * dfz + b_PEY1) * scaleFactors[9];
  if (Kygammao > 1.0) {
    Kygammao = 1.0;
  }

  mu_y = ((b_RVY2 * dfz + b_RVY1) + b_RVY3 * gamma_star) * mu_y * cos(atan
    (b_RVY4 * *alpha)) * zeta[2] * sin(atan(b_RVY6 * *kappa) * b_RVY5) *
    scaleFactors[20];
  lam_muy_prime *= kappa_x;
  *Fy = (sin(atan(lam_muy_prime - (lam_muy_prime - atan(lam_muy_prime)) *
                  Kygammao) * mu_y_tmp) * phi + lam_mux_star) * rb_idx_0 + mu_y;
  lam_muy_prime = Vx / b_LONGVL;
  *My = ((((*Fx / b_FNOMIN * b_QSY2 + b_QSY1) + fabs(lam_muy_prime) * b_QSY3) +
          rt_powd_snf(lam_muy_prime, 4.0) * b_QSY4) + (Re_tmp * b_QSY6 + b_QSY5)
         * b_idx_0 * b_idx_0) * (-b_UNLOADED_RADIUS * b_FNOMIN * scaleFactors[25])
    * (rt_powd_snf(fmax(f_idx_0 / b_NOMPRES, 0.05), b_QSY8) * rt_powd_snf(fmax
        (Re_tmp, 0.05), b_QSY7)) * tanh(10.0 * omega);
  lam_muy_prime = b_QSX6 * *Fz / b_FNOMIN;
  Kygammao = fabs(b_idx_0);
  Re_tmp = b_UNLOADED_RADIUS * *Fz;
  *Mx = (((((b_QSX1 * scaleFactors[24] - (b_PPMX1 * dpi + 1.0) * (b_QSX2 *
              b_idx_0)) - b_QSX12 * b_idx_0 * Kygammao) + b_QSX3 * *Fy /
           b_FNOMIN) + sin(atan(b_QSX9 * *Fy / b_FNOMIN) * b_QSX8 + b_QSX7 *
           b_idx_0) * (cos(atan(lam_muy_prime * lam_muy_prime) * b_QSX5) *
                       b_QSX4)) + atan(b_QSX11 * *Fz / b_FNOMIN) * b_QSX10 *
         b_idx_0) * (Re_tmp * scaleFactors[23]) + b_UNLOADED_RADIUS * *Fy *
    scaleFactors[23] * (b_QSX14 * Kygammao + b_QSX13);
  Vsy = Vx / Vsy;
  lam_muy_prime = ((b_QHZ4 * dfz + b_QHZ3) * gamma_star + (b_QHZ2 * dfz + b_QHZ1))
    + *alpha;
  lam_mux_star = (lam_mux_star / Vc + SHy) + *alpha;
  Kygammao = (((b_QBZ4 * b_idx_0 + 1.0) + b_QBZ5 * Kygammao) + lam_mux_star_tmp *
              b_QBZ6) * ((b_QBZ2 * dfz + b_QBZ1) + DHyphi * b_QBZ3) *
    scaleFactors[5] / Vs;
  f_idx_0 = Kygammao;
  if (Kygammao < 0.0) {
    f_idx_0 = 0.0;
  }

  phi = b_QCZ1;
  if (b_QCZ1 < 0.0) {
    phi = 0.0;
  }

  Kygammao = ((b_QEZ5 * gamma_star + b_QEZ4) * 2.0 / 3.1415926535897931 * atan
              (f_idx_0 * phi * lam_muy_prime) + 1.0) * ((b_QEZ2 * dfz + b_QEZ1)
    + DHyphi * b_QEZ3);
  SVygamma = Kygammao;
  if (Kygammao > 1.0) {
    SVygamma = 1.0;
  }

  kappa_x = (b_QBZ9 * scaleFactors[5] / Vs + b_QBZ10 * kappa_x * mu_y_tmp) *
    zeta[6];
  Kygammao = tan(lam_mux_star);
  SHy = epsilon_gamma / Vc;
  lam_mux_star_tmp = SHy * SHy * (*kappa * *kappa);
  lam_mux_star = atan(sqrt(Kygammao * Kygammao + lam_mux_star_tmp)) * tanh
    (1000.0 * lam_mux_star);
  Kygammao = tan(lam_muy_prime);
  Vc = atan(sqrt(Kygammao * Kygammao + lam_mux_star_tmp)) * tanh(1000.0 *
    lam_muy_prime);
  kappa_x *= lam_mux_star;
  Vc *= f_idx_0;
  *Mz = ((((((b_QDZ9 * dfz + b_QDZ8) * (b_PPZ2 * dpi + 1.0) + (b_QDZ11 * dfz +
              b_QDZ10) * phi_t) * gamma_star * scaleFactors[15] * zeta[0] +
            (b_QDZ7 * dfz + b_QDZ6) * scaleFactors[17] * zeta[2]) * Re_tmp * Vs *
           tanh(10.0 * Vx) * Vsy + zeta[8]) - 1.0) * cos(atan(kappa_x - (kappa_x
            - atan(kappa_x)) * 0.0) * zeta[7]) + -((b_QDZ2 * dfz + b_QDZ1) *
          (1.0 - b_PPZ1 * dpi) * ((b_QDZ3 * b_idx_0 + 1.0) + c_u * b_QDZ4) * *Fz
          * (b_UNLOADED_RADIUS / Fzo_prime) * scaleFactors[16] * zeta[5] * cos
          (atan(Vc - (Vc - atan(Vc)) * SVygamma) * phi) * Vsy * n_idx_0) * (*Fy
          - mu_y)) + ((b_SSZ2 * *Fy / b_FNOMIN + b_SSZ1) + (b_SSZ4 * dfz +
    b_SSZ3) * gamma_star) * b_UNLOADED_RADIUS * scaleFactors[21] * *Fx;
  if (vertType == 1.0) {
    *RL = main_solveRLwithFz(b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO,
      b_WIDTH, b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS, b_RIM_RADIUS,
      b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2, b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY,
      b_PFZ1, b_Q_FCY2, b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2,
      b_Q_FYS3, dpi, omega, b_idx_0, *Fx, *Fy, *Fz);
    main_calculateFz(*RL, b_LONGVL, b_UNLOADED_RADIUS, b_ASPECT_RATIO, b_WIDTH,
                     b_Q_RE0, b_Q_V1, b_FNOMIN, b_VERTICAL_STIFFNESS,
                     b_RIM_RADIUS, b_BOTTOM_STIFF, b_BOTTOM_OFFST, b_Q_V2,
                     b_Q_FZ1, b_Q_FZ2, b_Q_FCX, b_Q_FCY, b_PFZ1, b_Q_FCY2,
                     b_Q_CAM1, b_Q_CAM2, b_Q_CAM3, b_Q_FYS1, b_Q_FYS2, b_Q_FYS3,
                     dpi, omega, b_idx_0, *Fx, *Fy, &Fzo_prime, rhoz);
  }

  Cz *= b_UNLOADED_RADIUS;
  Fzo_prime = *Fz / Cz;
  if ((Cz == 0.0) || (Fzo_prime < 0.0)) {
    Fzo_prime = 0.0;
  }

  tmp_0 = _mm_mul_pd(_mm_add_pd(_mm_mul_pd(_mm_set_pd(b_Q_RB2, b_Q_RA2),
    _mm_set1_pd(Fzo_prime)), _mm_mul_pd(_mm_set_pd(b_Q_RB1, b_Q_RA1), _mm_set_pd
    (rt_powd_snf(Fzo_prime, 0.33333333333333331), sqrt(Fzo_prime)))), _mm_set_pd
                     (b_WIDTH, b_UNLOADED_RADIUS));
  _mm_storeu_pd(&tmp_1[0], tmp_0);
  *patch_a = tmp_1[0];
  *patch_b = tmp_1[1];
  if (*patch_a < 0.0) {
    *patch_a = 0.0;
  }

  if (*patch_b < 0.0) {
    *patch_b = 0.0;
  }

  *sig_x = fabs(epsilon_gamma / (((b_PCFX1 * dfz + 1.0) + DHyphi * b_PCFX2) *
    b_LONGITUDINAL_STIFFNESS * (b_PCFX3 * dpi + 1.0)));
  *sig_y = fabs(Kyalpha / (((b_PCFY1 * dfz + 1.0) + DHyphi * b_PCFY2) *
    b_LATERAL_STIFFNESS * (b_PCFY3 * dpi + 1.0)));
  *Tw = *Fx * *RL - *My;
}

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  rtX.Integrator_CSTATE = rtP.Integrator_IC;

  /* InitializeConditions for Integrator: '<S5>/Integrator' */
  rtX.Integrator_CSTATE_a = rtP.Integrator_IC_e;

  /* InitializeConditions for Integrator: '<S7>/Integrator' */
  rtX.Integrator_CSTATE_h = rtP.Integrator_IC_j;

  /* InitializeConditions for Integrator: '<S8>/Integrator' */
  rtX.Integrator_CSTATE_e = rtP.Integrator_IC_i;
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  MdlInitialize();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  __m128d tmp_1;
  real_T zeta[9];
  real_T tmp_2[2];
  real_T Alpha;
  real_T Cz;
  real_T DHyphi;
  real_T FzTire;
  real_T Fzo_prime;
  real_T Kappa;
  real_T Kyalpha;
  real_T Kyalpha_tmp;
  real_T Kygammao;
  real_T RL;
  real_T RadialDeflct;
  real_T Re;
  real_T Re_tmp;
  real_T SHy;
  real_T SHykappa;
  real_T SVygamma;
  real_T SVygamma_tmp;
  real_T Vc;
  real_T Vs;
  real_T Vsy;
  real_T c;
  real_T c_u;
  real_T dfz;
  real_T dpi;
  real_T e_idx_0;
  real_T epsilon_gamma;
  real_T g_idx_0;
  real_T gamma_star;
  real_T jb;
  real_T kappa_x;
  real_T kb_idx_0;
  real_T lam_mux_star;
  real_T lam_muy_prime;
  real_T mb_idx_0;
  real_T mu_y;
  real_T mu_y_tmp;
  real_T mu_y_tmp_0;
  real_T phi;
  real_T phi_data;
  real_T phi_data_0;
  real_T phi_t;
  real_T qb_idx_0;
  real_T sb_idx_0;
  real_T tmpDrphiVar_data;
  int32_T jb_tmp[2];
  int32_T ob_size[2];
  int32_T ob_tmp_size[2];
  int32_T phi_size[2];
  int32_T phi_size_0[2];
  int32_T tmpDrphiVar_size[2];
  int32_T tmp_size[2];
  int32_T wc_tmp_size[2];
  int32_T i;
  int32_T pb_size_idx_0;
  int32_T tmp_0;
  int32_T tmp_data;
  int32_T trueCount;
  int8_T ob_data;
  boolean_T isLowSpeed;
  boolean_T tmp;
  boolean_T tmp_3;
  boolean_T turnslipinds;

  /* Integrator: '<S4>/Integrator' */
  rtB.Integrator = rtX.Integrator_CSTATE;

  /* Integrator: '<S5>/Integrator' */
  rtB.Integrator_f = rtX.Integrator_CSTATE_a;

  /* Gain: '<S2>/Flip Tire1' */
  rtB.FlipTire1 = rtP.FlipTire1_Gain * rtB.Integrator_f;
  tmp = ssIsSampleHit(rtS, 1, 0);
  if (tmp) {
    /* Gain: '<S1>/Flip Tire' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    rtB.FlipTire = rtP.FlipTire_Gain * rtP.Constant2_Value;

    /* Gain: '<S1>/Flip Tire1' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    rtB.FlipTire1_n = rtP.FlipTire1_Gain_g * rtP.Constant3_Value;

    /* Gain: '<S3>/Gain' incorporates:
     *  Constant: '<Root>/Constant'
     */
    rtB.Gain = rtP.Gain_Gain * rtP.Constant_Value;

    /* Sum: '<S3>/Sum2' incorporates:
     *  Constant: '<S1>/RadialDeflctConstant'
     */
    rtB.Sum2 = rtP.RadialDeflctConstant_Value + rtB.Gain;

    /* Sum: '<S3>/Sum1' incorporates:
     *  Constant: '<Root>/Constant5'
     */
    rtB.Sum1 = rtB.Gain + rtP.Constant5_Value;
  }

  /* SignalConversion generated from: '<S6>/ SFunction ' incorporates:
   *  MATLAB Function: '<S3>/Magic Tire Const Input'
   */
  memset(&rtB.TmpSignalConversionAtSFunctionI[0], 0, 27U * sizeof(real_T));

  /* MATLAB Function: '<S3>/Magic Tire Const Input' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant7'
   *  Constant: '<S1>/vertType'
   *  SignalConversion generated from: '<S6>/ SFunction '
   */
  RadialDeflct = rtB.Sum2;

  /* :  [Fx,Fy,FzTire,Mx,My,Mz,Re,Kappa,Alpha,sig_x,sig_y,a,b,RL,RadialDeflct,Tw] = vdyncsmtire(Omega,Vx,Vy,psidot,Gamma,TirePrs,ScaleFactors,rhoz,plySteer,turnslip,... */
  /* :      PRESMAX,... */
  /* :      PRESMIN,... */
  /* :      FZMAX,... */
  /* :      FZMIN,... */
  /* :      VXLOW,... */
  /* :      KPUMAX,... */
  /* :      KPUMIN,... */
  /* :      ALPMAX,... */
  /* :      ALPMIN,... */
  /* :      CAMMIN,... */
  /* :      CAMMAX,... */
  /* :      LONGVL,... */
  /* :      UNLOADED_RADIUS,... */
  /* :      RIM_RADIUS,... */
  /* :      NOMPRES,... */
  /* :      FNOMIN,... */
  /* :      VERTICAL_STIFFNESS,...% vertical */
  /* :      DREFF,... */
  /* :      BREFF,... */
  /* :      FREFF,... */
  /* :      Q_RE0,... */
  /* :      Q_V1,... */
  /* :      Q_V2,... */
  /* :      Q_FZ1,... */
  /* :      Q_FZ2,... */
  /* :      Q_FCX,... */
  /* :      Q_FCY,... */
  /* :      PFZ1,... */
  /* :      Q_FCY2,... */
  /* :      BOTTOM_OFFST,... */
  /* :      BOTTOM_STIFF,... */
  /* :      PCX1,...% longitudinal */
  /* :      PDX1,... */
  /* :      PDX2,... */
  /* :      PDX3,... */
  /* :      PEX1,... */
  /* :      PEX2,... */
  /* :      PEX3,... */
  /* :      PEX4,... */
  /* :      PKX1,... */
  /* :      PKX2,... */
  /* :      PKX3,... */
  /* :      PHX1,... */
  /* :      PHX2,... */
  /* :      PVX1,... */
  /* :      PVX2,... */
  /* :      PPX1,... */
  /* :      PPX2,... */
  /* :      PPX3,... */
  /* :      PPX4,... */
  /* :      RBX1,... */
  /* :      RBX2,... */
  /* :      RBX3,... */
  /* :      RCX1,... */
  /* :      REX1,... */
  /* :      REX2,... */
  /* :      RHX1,... */
  /* :      QSX1,...% overturning */
  /* :      QSX2,... */
  /* :      QSX3,... */
  /* :      QSX4,... */
  /* :      QSX5,... */
  /* :      QSX6,... */
  /* :      QSX7,... */
  /* :      QSX8,... */
  /* :      QSX9,... */
  /* :      QSX10,... */
  /* :      QSX11,... */
  /* :      PPMX1,... */
  /* :      PCY1,...% lateral */
  /* :      PDY1,... */
  /* :      PDY2,... */
  /* :      PDY3,... */
  /* :      PEY1,... */
  /* :      PEY2,... */
  /* :      PEY3,... */
  /* :      PEY4,... */
  /* :      PEY5,... */
  /* :      PKY1,... */
  /* :      PKY2,... */
  /* :      PKY3,... */
  /* :      PKY4,... */
  /* :      PKY5,... */
  /* :      PKY6,... */
  /* :      PKY7,... */
  /* :      PHY1,... */
  /* :      PHY2,... */
  /* :      PVY1,... */
  /* :      PVY2,... */
  /* :      PVY3,... */
  /* :      PVY4,... */
  /* :      PPY1,... */
  /* :      PPY2,... */
  /* :      PPY3,... */
  /* :      PPY4,... */
  /* :      PPY5,... */
  /* :      RBY1,... */
  /* :      RBY2,... */
  /* :      RBY3,... */
  /* :      RBY4,... */
  /* :      RCY1,... */
  /* :      REY1,... */
  /* :      REY2,... */
  /* :      RHY1,... */
  /* :      RHY2,... */
  /* :      RVY1,... */
  /* :      RVY2,... */
  /* :      RVY3,... */
  /* :      RVY4,... */
  /* :      RVY5,... */
  /* :      RVY6,... */
  /* :      QSY1,...% rolling */
  /* :      QSY2,... */
  /* :      QSY3,... */
  /* :      QSY4,... */
  /* :      QSY5,... */
  /* :      QSY6,... */
  /* :      QSY7,... */
  /* :      QSY8,... */
  /* :      QBZ1,... */
  /* :      QBZ2,... */
  /* :      QBZ3,... */
  /* :      QBZ4,... */
  /* :      QBZ5,... */
  /* :      QBZ6,... */
  /* :      QBZ9,... */
  /* :      QBZ10,... */
  /* :      QCZ1,... */
  /* :      QDZ1,... */
  /* :      QDZ2,... */
  /* :      QDZ3,... */
  /* :      QDZ4,... */
  /* :      QDZ6,... */
  /* :      QDZ7,... */
  /* :      QDZ8,... */
  /* :      QDZ9,... */
  /* :      QDZ10,... */
  /* :      QDZ11,... */
  /* :      QEZ1,... */
  /* :      QEZ2,... */
  /* :      QEZ3,... */
  /* :      QEZ4,... */
  /* :      QEZ5,... */
  /* :      QHZ1,... */
  /* :      QHZ2,... */
  /* :      QHZ3,... */
  /* :      QHZ4,... */
  /* :      PPZ1,... */
  /* :      PPZ2,... */
  /* :      SSZ1,... */
  /* :      SSZ2,... */
  /* :      SSZ3,... */
  /* :      SSZ4,... */
  /* :      PDXP1,...% turn slip */
  /* :      PDXP2,... */
  /* :      PDXP3,... */
  /* :      PKYP1,... */
  /* :      PDYP1,... */
  /* :      PDYP2,... */
  /* :      PDYP3,... */
  /* :      PDYP4,... */
  /* :      PHYP1,... */
  /* :      PHYP2,... */
  /* :      PHYP3,... */
  /* :      PHYP4,... */
  /* :      PECP1,... */
  /* :      PECP2,... */
  /* :      QDTP1,... */
  /* :      QCRP1,...% aligning moment */
  /* :      QCRP2,... */
  /* :      QBRP1,... */
  /* :      QDRP1,... */
  /* :      QDRP2,... */
  /* :      WIDTH,... */
  /* :      Q_RA1,... % contact patch */
  /* :      Q_RA2,... */
  /* :      Q_RB1,... */
  /* :      Q_RB2,... */
  /* :      QSX12,... */
  /* :      QSX13,... */
  /* :      QSX14,... */
  /* :      Q_FZ3,... */
  /* :      LONGITUDINAL_STIFFNESS,...% structural */
  /* :      LATERAL_STIFFNESS,... */
  /* :      PCFX1,... */
  /* :      PCFX2,... */
  /* :      PCFX3,... */
  /* :      PCFY1,... */
  /* :      PCFY2,... */
  /* :      PCFY3,... */
  /* :      Fx_ext,... */
  /* :      Fy_ext,... */
  /* :      Fz_ext,... */
  /* :      0,... */
  /* :      vdynMF,... */
  /* :      vertType,... */
  /* :      2,... */
  /* :      Q_CAM1, ... */
  /* :      Q_CAM2, ... */
  /* :      Q_CAM3,... */
  /* :      Q_FYS1, ... */
  /* :      Q_FYS2, ... */
  /* :      Q_FYS3, ... */
  /* :      ASPECT_RATIO); */
  if (rtP.MagicTireConstInput_vdynMF[3] == 1.0) {
    main_div0protect(rtP.Constant1_Value, rtP.CombinedSlipWheelCPI_VXLOW,
                     &FzTire, &Vs);
    c = rtB.FlipTire1_n;
    if (rtB.FlipTire1_n < rtP.CombinedSlipWheelCPI_CAMMIN) {
      c = rtP.CombinedSlipWheelCPI_CAMMIN;
    }

    e_idx_0 = c;
    if (c > rtP.CombinedSlipWheelCPI_CAMMAX) {
      e_idx_0 = rtP.CombinedSlipWheelCPI_CAMMAX;
    }

    g_idx_0 = rtP.Constant7_Value;
    if (rtP.Constant7_Value < rtP.CombinedSlipWheelCPI_PRESMIN) {
      g_idx_0 = rtP.CombinedSlipWheelCPI_PRESMIN;
    }

    if (g_idx_0 > rtP.CombinedSlipWheelCPI_PRESMAX) {
      g_idx_0 = rtP.CombinedSlipWheelCPI_PRESMAX;
    }

    dpi = (g_idx_0 - rtP.CombinedSlipWheelCPI_NOMPRES) /
      rtP.CombinedSlipWheelCPI_NOMPRES;
    RL = rtP.CombinedSlipWheelCPI_UNLOADED_R * 0.95;
    if (rtP.vertType_Value == 2.0) {
      RL = main_solveRLwithRhoz(rtP.CombinedSlipWheelCPI_LONGVL,
        rtP.CombinedSlipWheelCPI_UNLOADED_R, rtP.CombinedSlipWheelCPI_ASPECT_RAT,
        rtP.CombinedSlipWheelCPI_WIDTH, rtP.CombinedSlipWheelCPI_Q_RE0,
        rtP.CombinedSlipWheelCPI_Q_V1, rtP.CombinedSlipWheelCPI_FNOMIN,
        rtP.CombinedSlipWheelCPI_VERTICAL_S, rtP.CombinedSlipWheelCPI_RIM_RADIUS,
        rtP.CombinedSlipWheelCPI_BOTTOM_STI, rtP.CombinedSlipWheelCPI_BOTTOM_OFF,
        rtP.CombinedSlipWheelCPI_Q_V2, rtP.CombinedSlipWheelCPI_Q_FZ1,
        rtP.CombinedSlipWheelCPI_Q_FZ2, rtP.CombinedSlipWheelCPI_Q_FCX,
        rtP.CombinedSlipWheelCPI_Q_FCY, rtP.CombinedSlipWheelCPI_PFZ1,
        rtP.CombinedSlipWheelCPI_Q_FCY2, rtP.CombinedSlipWheelCPI_Q_CAM1,
        rtP.CombinedSlipWheelCPI_Q_CAM2, rtP.CombinedSlipWheelCPI_Q_CAM3,
        rtP.CombinedSlipWheelCPI_Q_FYS1, rtP.CombinedSlipWheelCPI_Q_FYS2,
        rtP.CombinedSlipWheelCPI_Q_FYS3, dpi, rtP.Constant_Value, e_idx_0,
        rtB.Integrator, rtB.Integrator_f, rtB.Sum2);
      FzTire = main_calculateFz_m(RL, rtP.CombinedSlipWheelCPI_LONGVL,
        rtP.CombinedSlipWheelCPI_UNLOADED_R, rtP.CombinedSlipWheelCPI_ASPECT_RAT,
        rtP.CombinedSlipWheelCPI_WIDTH, rtP.CombinedSlipWheelCPI_Q_RE0,
        rtP.CombinedSlipWheelCPI_Q_V1, rtP.CombinedSlipWheelCPI_FNOMIN,
        rtP.CombinedSlipWheelCPI_VERTICAL_S, rtP.CombinedSlipWheelCPI_RIM_RADIUS,
        rtP.CombinedSlipWheelCPI_BOTTOM_STI, rtP.CombinedSlipWheelCPI_BOTTOM_OFF,
        rtP.CombinedSlipWheelCPI_Q_V2, rtP.CombinedSlipWheelCPI_Q_FZ1,
        rtP.CombinedSlipWheelCPI_Q_FZ2, rtP.CombinedSlipWheelCPI_Q_FCX,
        rtP.CombinedSlipWheelCPI_Q_FCY, rtP.CombinedSlipWheelCPI_PFZ1,
        rtP.CombinedSlipWheelCPI_Q_FCY2, rtP.CombinedSlipWheelCPI_Q_CAM1,
        rtP.CombinedSlipWheelCPI_Q_CAM2, rtP.CombinedSlipWheelCPI_Q_CAM3,
        rtP.CombinedSlipWheelCPI_Q_FYS1, rtP.CombinedSlipWheelCPI_Q_FYS2,
        rtP.CombinedSlipWheelCPI_Q_FYS3, dpi, rtP.Constant_Value, e_idx_0,
        rtB.Integrator, rtB.Integrator_f);
    } else {
      FzTire = rtB.Sum1;
    }

    kappa_x = FzTire;
    if (FzTire <= 0.0) {
      kappa_x = 1.0;
    }

    if (FzTire < rtP.CombinedSlipWheelCPI_FZMIN) {
      FzTire = rtP.CombinedSlipWheelCPI_FZMIN;
    }

    if (FzTire > rtP.CombinedSlipWheelCPI_FZMAX) {
      FzTire = rtP.CombinedSlipWheelCPI_FZMAX;
    }

    Fzo_prime = 1.0 * rtP.CombinedSlipWheelCPI_FNOMIN;
    dfz = (FzTire - Fzo_prime) / Fzo_prime;
    epsilon_gamma = (rtP.CombinedSlipWheelCPI_PECP2 * dfz + 1.0) *
      rtP.CombinedSlipWheelCPI_PECP1;
    Cz = (rtP.CombinedSlipWheelCPI_PFZ1 * dpi + 1.0) *
      (rtP.CombinedSlipWheelCPI_VERTICAL_S * 1.0);
    Re = rtP.Constant_Value * rtP.CombinedSlipWheelCPI_UNLOADED_R /
      rtP.CombinedSlipWheelCPI_LONGVL;
    Re_tmp = kappa_x / rtP.CombinedSlipWheelCPI_FNOMIN;
    Re = (Re * Re * rtP.CombinedSlipWheelCPI_Q_V1 +
          rtP.CombinedSlipWheelCPI_Q_RE0) * rtP.CombinedSlipWheelCPI_UNLOADED_R
      - (atan(Re_tmp * rtP.CombinedSlipWheelCPI_BREFF) *
         rtP.CombinedSlipWheelCPI_DREFF + Re_tmp *
         rtP.CombinedSlipWheelCPI_FREFF) * (rtP.CombinedSlipWheelCPI_FNOMIN / Cz);
    if (Re < 0.001) {
      Re = 0.001;
    }

    Kappa = (Re * rtP.Constant_Value - rtP.Constant1_Value) / Vs;
    if (Kappa < rtP.CombinedSlipWheelCPI_KPUMIN) {
      Kappa = rtP.CombinedSlipWheelCPI_KPUMIN;
    }

    if (Kappa > rtP.CombinedSlipWheelCPI_KPUMAX) {
      Kappa = rtP.CombinedSlipWheelCPI_KPUMAX;
    }

    kappa_x = (rtP.CombinedSlipWheelCPI_PHX2 * dfz +
               rtP.CombinedSlipWheelCPI_PHX1) * 0.0 + Kappa;
    Alpha = rt_atan2d_snf(rtB.FlipTire, Vs);
    if (Alpha < rtP.CombinedSlipWheelCPI_ALPMIN) {
      Alpha = rtP.CombinedSlipWheelCPI_ALPMIN;
    }

    if (Alpha > rtP.CombinedSlipWheelCPI_ALPMAX) {
      Alpha = rtP.CombinedSlipWheelCPI_ALPMAX;
    }

    gamma_star = sin(e_idx_0);
    phi_t = -Vs * Kappa;
    Kyalpha = tan(Alpha);
    Vsy = -Vs * Kyalpha;
    mu_y = Vsy * Vsy;
    Vs = sqrt(phi_t * phi_t + mu_y);
    main_div0protect(rtP.Constant1_Value, rtP.CombinedSlipWheelCPI_VXLOW, &phi_t,
                     &Vc);
    Vc = sqrt(rtP.Constant1_Value * rtP.Constant1_Value + mu_y);
    main_div0protect(Vc, rtP.CombinedSlipWheelCPI_VXLOW, &Vsy, &mu_y);
    Vc = main_div0protect_k(Vc);
    lam_mux_star = 1.0 / (0.0 * Vs / rtP.CombinedSlipWheelCPI_LONGVL + 1.0);
    Vs = lam_mux_star;
    lam_muy_prime = Vs * 10.0 / (9.0 * Vs + 1.0);
    mu_y_tmp = gamma_star * gamma_star;
    mu_y_tmp_0 = dpi * dpi;
    mu_y = ((rtP.CombinedSlipWheelCPI_PPY3 * dpi + 1.0) + mu_y_tmp_0 *
            rtP.CombinedSlipWheelCPI_PPY4) * (rtP.CombinedSlipWheelCPI_PDY2 *
      dfz + rtP.CombinedSlipWheelCPI_PDY1) * (1.0 - mu_y_tmp *
      rtP.CombinedSlipWheelCPI_PDY3) * Vs;
    phi_t = -rtP.Constant4_Value / phi_t * cos(Alpha);
    jb = phi_t;
    trueCount = 0;
    if (rtP.Constant1_Value < rtP.CombinedSlipWheelCPI_VXLOW) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    jb_tmp[0] = 1;
    jb_tmp[1] = trueCount;
    if (rtP.Constant1_Value < rtP.CombinedSlipWheelCPI_VXLOW) {
      ob_data = 0;
    }

    tmp_size[0] = 1;
    tmp_size[1] = jb_tmp[1];
    trueCount = jb_tmp[1];
    if (trueCount - 1 >= 0) {
      c = rtP.Constant1_Value;
    }

    main_abs(&c, tmp_size, &phi_data, phi_size);
    if (jb_tmp[1] == phi_size[1]) {
      tmp_size[0] = 1;
      tmp_size[1] = jb_tmp[1];
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        c = rtP.Constant1_Value;
      }

      main_abs(&c, tmp_size, &phi_data, phi_size);
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        jb = phi_data / rtP.CombinedSlipWheelCPI_VXLOW * phi_t;
      }
    } else {
      main_binary_expand_op_4(&jb, phi_t, jb_tmp, rtP.Constant1_Value,
        rtP.CombinedSlipWheelCPI_VXLOW);
    }

    phi = ((1.0 - epsilon_gamma) * fabs(rtP.Constant_Value) * gamma_star +
           rtP.Constant4_Value) * (1.0 / Vc);
    turnslipinds = ((rtP.CombinedSlipWheelCPI_turnslip == 1.0) && (fabs(phi) >
      0.01));
    isLowSpeed = !turnslipinds;
    SHykappa = rtP.CombinedSlipWheelCPI_RHY2 * dfz +
      rtP.CombinedSlipWheelCPI_RHY1;
    phi_t = rtP.CombinedSlipWheelCPI_REY2 * dfz + rtP.CombinedSlipWheelCPI_REY1;
    kb_idx_0 = phi_t;
    if (phi_t > 1.0) {
      kb_idx_0 = 1.0;
    }

    phi_t = (mu_y_tmp * rtP.CombinedSlipWheelCPI_RBY4 +
             rtP.CombinedSlipWheelCPI_RBY1) * cos(atan((Alpha -
      rtP.CombinedSlipWheelCPI_RBY3) * rtP.CombinedSlipWheelCPI_RBY2)) * 0.0;
    mb_idx_0 = phi_t;
    c_u = Kappa + SHykappa;
    for (i = 0; i < 9; i++) {
      zeta[i] = 1.0;
    }

    trueCount = 0;
    if (turnslipinds) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    ob_tmp_size[0] = 1;
    ob_tmp_size[1] = trueCount;
    tmp_0 = ob_tmp_size[1];
    if (tmp_0 - 1 >= 0) {
      zeta[0] = 0.0;
    }

    tmp_3 = !isLowSpeed;
    if (tmp_3) {
      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      pb_size_idx_0 = trueCount;
      jb_tmp[0] = 1;
      jb_tmp[1] = tmp_0;
      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = jb_tmp[1];
      SHy = atan(rtP.CombinedSlipWheelCPI_PDXP3 * Kappa);
      SHy = cos(SHy);
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        tmpDrphiVar_data = (rtP.CombinedSlipWheelCPI_PDXP2 * dfz + 1.0) *
          rtP.CombinedSlipWheelCPI_PDXP1 * SHy *
          rtP.CombinedSlipWheelCPI_UNLOADED_R * phi;
      }

      main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
      main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
      i = pb_size_idx_0;
      if (i - 1 >= 0) {
        zeta[1] = tmpDrphiVar_data;
      }

      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      pb_size_idx_0 = trueCount;
      phi_size[0] = 1;
      phi_size[1] = jb_tmp[1];
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        phi_data = phi;
      }

      main_abs(&phi_data, phi_size, &c, tmp_size);
      tmpDrphiVar_size[0] = 1;
      trueCount = tmp_size[1];
      tmpDrphiVar_size[1] = trueCount;
      if (trueCount - 1 >= 0) {
        tmpDrphiVar_data = rtP.CombinedSlipWheelCPI_UNLOADED_R * c;
      }

      main_sqrt(&tmpDrphiVar_data, tmpDrphiVar_size);
      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      phi_size[0] = 1;
      phi_size[1] = trueCount;
      phi_size_0[0] = 1;
      phi_size_0[1] = trueCount;
      if (trueCount - 1 >= 0) {
        phi_data = phi;
        phi_data_0 = phi;
      }

      main_abs(&phi_data, phi_size, &c, tmp_size);
      main_abs(&phi_data_0, phi_size_0, &phi_data, phi_size);
      if (phi_size[1] == 1) {
        i = tmpDrphiVar_size[1];
      } else {
        i = phi_size[1];
      }

      if ((tmp_size[1] == tmpDrphiVar_size[1]) && (i == jb_tmp[1])) {
        SHy = atan(rtP.CombinedSlipWheelCPI_PDYP3 * Kyalpha);
        SHy = cos(SHy);
        phi_size[0] = 1;
        phi_size[1] = trueCount;
        if (trueCount - 1 >= 0) {
          phi_data = phi;
        }

        main_abs(&phi_data, phi_size, &c, tmp_size);
        trueCount = jb_tmp[1] - 1;
        tmpDrphiVar_size[0] = 1;
        tmpDrphiVar_size[1] = jb_tmp[1];
        for (i = 0; i <= trueCount; i++) {
          tmpDrphiVar_data = (rtP.CombinedSlipWheelCPI_PDYP2 * dfz + 1.0) *
            rtP.CombinedSlipWheelCPI_PDYP1 * SHy *
            (rtP.CombinedSlipWheelCPI_UNLOADED_R * c +
             rtP.CombinedSlipWheelCPI_PDYP4 * tmpDrphiVar_data);
        }
      } else {
        main_binary_expand_op_3(&tmpDrphiVar_data, tmpDrphiVar_size,
          rtP.CombinedSlipWheelCPI_PDYP1, rtP.CombinedSlipWheelCPI_PDYP2, dfz,
          rtP.CombinedSlipWheelCPI_PDYP3, Kyalpha, jb_tmp,
          rtP.CombinedSlipWheelCPI_UNLOADED_R, phi, trueCount,
          rtP.CombinedSlipWheelCPI_PDYP4);
      }

      main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
      main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
      i = pb_size_idx_0;
      if (i - 1 >= 0) {
        zeta[2] = tmpDrphiVar_data;
      }

      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      pb_size_idx_0 = trueCount;
      Kyalpha = rtP.CombinedSlipWheelCPI_UNLOADED_R *
        rtP.CombinedSlipWheelCPI_UNLOADED_R;
      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = jb_tmp[1];
      SHy = rtP.CombinedSlipWheelCPI_PKYP1 * Kyalpha;
      trueCount = jb_tmp[0] * jb_tmp[1];
      if (trueCount - 1 >= 0) {
        Kyalpha = phi * phi;
        tmpDrphiVar_data = SHy * Kyalpha;
      }

      main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
      main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
      i = pb_size_idx_0;
      if (i - 1 >= 0) {
        zeta[3] = tmpDrphiVar_data;
      }
    }

    Kygammao = (rtP.CombinedSlipWheelCPI_PKY7 * dfz +
                rtP.CombinedSlipWheelCPI_PKY6) * FzTire *
      (rtP.CombinedSlipWheelCPI_PPY5 * dpi + 1.0) * 0.0;
    SVygamma_tmp = FzTire / Fzo_prime;
    SVygamma = sin(atan(SVygamma_tmp / (mu_y_tmp * rtP.CombinedSlipWheelCPI_PKY5
      + rtP.CombinedSlipWheelCPI_PKY2) / (rtP.CombinedSlipWheelCPI_PPY2 * dpi +
      1.0)) * rtP.CombinedSlipWheelCPI_PKY4);
    phi_t = fabs(gamma_star);
    Kyalpha_tmp = (rtP.CombinedSlipWheelCPI_PPY1 * dpi + 1.0) *
      (rtP.CombinedSlipWheelCPI_PKY1 * Fzo_prime);
    Kyalpha = (1.0 - rtP.CombinedSlipWheelCPI_PKY3 * phi_t) * Kyalpha_tmp *
      SVygamma * zeta[3] * 0.0;
    main_div0protect_kw(Kyalpha, &Vc, &SHy);
    main_div0protect_kw(Kyalpha_tmp * (1.0 - rtP.CombinedSlipWheelCPI_PKY3 * 0.0)
                        * SVygamma * zeta[3] * 0.0, &SHy, &DHyphi);
    qb_idx_0 = rtP.CombinedSlipWheelCPI_PHYP1;
    if (rtP.CombinedSlipWheelCPI_PHYP1 < 0.0) {
      qb_idx_0 = 0.0;
    }

    SVygamma = tanh(rtP.Constant1_Value);
    DHyphi = (rtP.CombinedSlipWheelCPI_PHYP3 * dfz +
              rtP.CombinedSlipWheelCPI_PHYP2) * SVygamma;
    sb_idx_0 = rtP.CombinedSlipWheelCPI_PHYP4;
    if (rtP.CombinedSlipWheelCPI_PHYP4 > 1.0) {
      sb_idx_0 = 1.0;
    }

    SHy = Kygammao / (1.0 - epsilon_gamma) / (qb_idx_0 * DHyphi * SHy);
    Kyalpha_tmp = rtP.CombinedSlipWheelCPI_UNLOADED_R * phi;
    SHy *= Kyalpha_tmp;
    DHyphi = sin(atan(SHy - (SHy - atan(SHy)) * sb_idx_0) * qb_idx_0) * DHyphi *
      SVygamma;
    SVygamma = (rtP.CombinedSlipWheelCPI_PVY4 * dfz +
                rtP.CombinedSlipWheelCPI_PVY3) * FzTire * gamma_star * zeta[2] *
      0.0 * lam_muy_prime;
    SHy = 0.0;
    c_u *= mb_idx_0;
    SHykappa *= mb_idx_0;
    SHykappa = cos(atan(c_u - (c_u - atan(c_u)) * kb_idx_0) *
                   rtP.CombinedSlipWheelCPI_RCY1) / cos(atan(SHykappa -
      (SHykappa - atan(SHykappa)) * kb_idx_0) * rtP.CombinedSlipWheelCPI_RCY1);
    qb_idx_0 = SHykappa;
    if (SHykappa < 0.0) {
      qb_idx_0 = 0.0;
    }

    if (tmp_3) {
      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      pb_size_idx_0 = trueCount;
      jb_tmp[0] = 1;
      jb_tmp[1] = tmp_0;
      if (pb_size_idx_0 - 1 >= 0) {
        zeta[4] = (DHyphi + 1.0) - SVygamma / Vc;
      }

      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = jb_tmp[1];
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        tmpDrphiVar_data = rtP.CombinedSlipWheelCPI_QDTP1 *
          rtP.CombinedSlipWheelCPI_UNLOADED_R * phi;
      }

      main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
      main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
      if (pb_size_idx_0 - 1 >= 0) {
        zeta[5] = tmpDrphiVar_data;
      }

      tmpDrphiVar_size[0] = 1;
      tmpDrphiVar_size[1] = jb_tmp[1];
      trueCount = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        tmpDrphiVar_data = rtP.CombinedSlipWheelCPI_QBRP1 *
          rtP.CombinedSlipWheelCPI_UNLOADED_R * phi;
      }

      main_atan(&tmpDrphiVar_data, tmpDrphiVar_size);
      main_cos(&tmpDrphiVar_data, tmpDrphiVar_size);
      if (pb_size_idx_0 - 1 >= 0) {
        zeta[6] = tmpDrphiVar_data;
      }

      SHy = rtP.CombinedSlipWheelCPI_QCRP1 * mu_y *
        rtP.CombinedSlipWheelCPI_UNLOADED_R * FzTire * sqrt(SVygamma_tmp) * 0.0;
      kb_idx_0 = SHy;
      SHykappa = rtP.CombinedSlipWheelCPI_QDRP1;
      if (rtP.CombinedSlipWheelCPI_QDRP1 < 0.0) {
        SHykappa = 0.0;
      }

      c_u = rtP.CombinedSlipWheelCPI_QDRP2;
      if (rtP.CombinedSlipWheelCPI_QDRP2 < 0.0) {
        c_u = 0.0;
      }

      SHy = kb_idx_0 / sin(1.5707963267948966 * SHykappa);
      phi = 1.0 - epsilon_gamma;
      if (rtIsNaN(phi)) {
        phi = (rtNaN);
      } else if (phi < 0.0) {
        phi = -1.0;
      } else {
        phi = (phi > 0.0);
      }

      epsilon_gamma = ((rtP.CombinedSlipWheelCPI_QDZ11 * dfz +
                        rtP.CombinedSlipWheelCPI_QDZ10) * fabs(e_idx_0) +
                       (rtP.CombinedSlipWheelCPI_QDZ9 * dfz +
                        rtP.CombinedSlipWheelCPI_QDZ8)) * (FzTire *
        rtP.CombinedSlipWheelCPI_UNLOADED_R) * 0.0 / (SHykappa * SHy * (1.0 -
        epsilon_gamma) + 0.0001 * phi);
      phi = Kyalpha_tmp;
      Kyalpha_tmp = epsilon_gamma * phi;
      epsilon_gamma = sin(atan(Kyalpha_tmp - (Kyalpha_tmp - atan(Kyalpha_tmp)) *
        c_u) * SHykappa) * SHy;
      if (rtIsNaN(epsilon_gamma)) {
        SHy = (rtNaN);
      } else {
        SHy = 0.0;
      }

      phi = SHy;
      if (SHy == 0.0) {
        phi = 1.0;
      }

      phi_size[0] = 1;
      phi_size[1] = jb_tmp[1];
      trueCount = jb_tmp[1];
      phi_size_0[0] = 1;
      phi_size_0[1] = jb_tmp[1];
      if (trueCount - 1 >= 0) {
        phi_data = epsilon_gamma;
        phi_data_0 = epsilon_gamma;
      }

      main_abs(&phi_data, phi_size, &c, tmp_size);
      main_abs(&phi_data_0, phi_size_0, &phi_data, phi_size);
      if (phi_size[1] == 1) {
        i = jb_tmp[1];
      } else {
        i = phi_size[1];
      }

      if ((tmp_size[1] == jb_tmp[1]) && (i == jb_tmp[1])) {
        SHy = fabs(jb);
        SHy = atan(rtP.CombinedSlipWheelCPI_QCRP2 *
                   rtP.CombinedSlipWheelCPI_UNLOADED_R * SHy);
        phi_size[0] = 1;
        phi_size[1] = jb_tmp[1];
        trueCount = jb_tmp[1];
        if (trueCount - 1 >= 0) {
          phi_data = epsilon_gamma;
        }

        main_abs(&phi_data, phi_size, &c, tmp_size);
        tmpDrphiVar_size[0] = 1;
        tmpDrphiVar_size[1] = jb_tmp[1];
        trueCount = jb_tmp[1];
        if (trueCount - 1 >= 0) {
          tmpDrphiVar_data = kb_idx_0 * 2.0 / 3.1415926535897931 * SHy *
            qb_idx_0 / (0.0001 * phi + c);
        }
      } else {
        main_binary_expand_op_2(&tmpDrphiVar_data, tmpDrphiVar_size, &kb_idx_0,
          rtP.CombinedSlipWheelCPI_QCRP2, rtP.CombinedSlipWheelCPI_UNLOADED_R,
          &jb, &qb_idx_0, jb_tmp, epsilon_gamma, &phi);
      }

      trueCount = tmpDrphiVar_size[1];
      for (i = 0; i < trueCount; i++) {
        if (tmpDrphiVar_data > 1.0) {
          tmpDrphiVar_data = 1.0;
        }
      }

      for (i = 0; i < trueCount; i++) {
        if (tmpDrphiVar_data < -1.0) {
          tmpDrphiVar_data = -1.0;
        }
      }

      main_acos(&tmpDrphiVar_data, tmpDrphiVar_size);
      if (pb_size_idx_0 - 1 >= 0) {
        zeta[7] = 0.63661977236758138 * tmpDrphiVar_data;
        zeta[8] = epsilon_gamma + 1.0;
      }

      c = 0.0;
      if (tmp_0 - 1 >= 0) {
        tmp_data = 0;
      }

      trueCount = 0;
      if (turnslipinds) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      if (jb_tmp[1] == 1) {
        i = tmp_0;
        pb_size_idx_0 = tmp_0;
      } else {
        i = jb_tmp[1];
        pb_size_idx_0 = jb_tmp[1];
      }

      if (pb_size_idx_0 == 1) {
        pb_size_idx_0 = jb_tmp[1];
      } else if (jb_tmp[1] == 1) {
        pb_size_idx_0 = tmp_0;
      } else {
        pb_size_idx_0 = jb_tmp[1];
      }

      if ((jb_tmp[1] == tmp_0) && (i == jb_tmp[1]) && (pb_size_idx_0 ==
           trueCount)) {
        trueCount = jb_tmp[0] * jb_tmp[1];
        for (i = 0; i < trueCount; i++) {
          c = ((rtP.CombinedSlipWheelCPI_PHY2 * dfz +
                rtP.CombinedSlipWheelCPI_PHY1) * 0.0 + DHyphi) - SVygamma / Vc;
        }
      } else {
        main_binary_expand_op_1(&c, rtP.CombinedSlipWheelCPI_PHY1,
          rtP.CombinedSlipWheelCPI_PHY2, dfz, jb_tmp,
          rtB.TmpSignalConversionAtSFunctionI, ob_tmp_size, DHyphi, SVygamma,
          trueCount, Vc);
      }

      SHy = c;
    }

    epsilon_gamma = rtP.CombinedSlipWheelCPI_PCX1 *
      rtB.TmpSignalConversionAtSFunctionI[6];
    kb_idx_0 = epsilon_gamma;
    if (epsilon_gamma < 0.0) {
      kb_idx_0 = 0.0;
    }

    Kyalpha_tmp = e_idx_0 * e_idx_0;
    epsilon_gamma = ((rtP.CombinedSlipWheelCPI_PPX3 * dpi + 1.0) + mu_y_tmp_0 *
                     rtP.CombinedSlipWheelCPI_PPX4) *
      (rtP.CombinedSlipWheelCPI_PDX2 * dfz + rtP.CombinedSlipWheelCPI_PDX1) *
      (1.0 - Kyalpha_tmp * rtP.CombinedSlipWheelCPI_PDX3) * lam_mux_star *
      FzTire * zeta[1];
    lam_mux_star = epsilon_gamma;
    if (epsilon_gamma < 0.0) {
      lam_mux_star = 0.0;
    }

    DHyphi = dfz * dfz;
    epsilon_gamma = ((rtP.CombinedSlipWheelCPI_PEX2 * dfz +
                      rtP.CombinedSlipWheelCPI_PEX1) + DHyphi *
                     rtP.CombinedSlipWheelCPI_PEX3) * (1.0 - tanh(10.0 * kappa_x)
      * rtP.CombinedSlipWheelCPI_PEX4) * rtB.TmpSignalConversionAtSFunctionI[8];
    mb_idx_0 = epsilon_gamma;
    if (epsilon_gamma > 1.0) {
      mb_idx_0 = 1.0;
    }

    epsilon_gamma = (rtP.CombinedSlipWheelCPI_PKX2 * dfz +
                     rtP.CombinedSlipWheelCPI_PKX1) * FzTire * exp
      (rtP.CombinedSlipWheelCPI_PKX3 * dfz) * ((rtP.CombinedSlipWheelCPI_PPX1 *
      dpi + 1.0) + mu_y_tmp_0 * rtP.CombinedSlipWheelCPI_PPX2) *
      rtB.TmpSignalConversionAtSFunctionI[4];
    main_div0protect_kw(kb_idx_0 * lam_mux_star, &phi, &SHykappa);
    phi = epsilon_gamma / phi;
    SHykappa = rtP.CombinedSlipWheelCPI_REX2 * dfz +
      rtP.CombinedSlipWheelCPI_REX1;
    mu_y_tmp_0 = SHykappa;
    if (SHykappa > 1.0) {
      mu_y_tmp_0 = 1.0;
    }

    SHykappa = (mu_y_tmp * rtP.CombinedSlipWheelCPI_RBX3 +
                rtP.CombinedSlipWheelCPI_RBX1) * cos(atan
      (rtP.CombinedSlipWheelCPI_RBX2 * Kappa)) *
      rtB.TmpSignalConversionAtSFunctionI[18];
    SVygamma_tmp = SHykappa;
    if (SHykappa < 0.0) {
      SVygamma_tmp = 0.0;
    }

    SHykappa = Alpha + rtP.CombinedSlipWheelCPI_RHX1;
    c_u = SVygamma_tmp * SHykappa;
    SHykappa = SVygamma_tmp * rtP.CombinedSlipWheelCPI_RHX1;
    SHykappa = cos(atan(c_u - (c_u - atan(c_u)) * mu_y_tmp_0) *
                   rtP.CombinedSlipWheelCPI_RCX1) / cos(atan(SHykappa -
      (SHykappa - atan(SHykappa)) * mu_y_tmp_0) * rtP.CombinedSlipWheelCPI_RCX1);
    if (SHykappa < 0.0) {
      SHykappa = 0.0;
    }

    kappa_x *= phi;
    kappa_x = ((rtP.CombinedSlipWheelCPI_PVX2 * dfz +
                rtP.CombinedSlipWheelCPI_PVX1) * FzTire * lam_muy_prime *
               rtB.TmpSignalConversionAtSFunctionI[12] * zeta[1] + sin(atan
                (kappa_x - (kappa_x - atan(kappa_x)) * mb_idx_0) * kb_idx_0) *
               lam_mux_star) * SHykappa;
    lam_mux_star = rtP.CombinedSlipWheelCPI_PCY1 *
      rtB.TmpSignalConversionAtSFunctionI[7];
    kb_idx_0 = lam_mux_star;
    if (lam_mux_star < 0.0) {
      kb_idx_0 = 0.0;
    }

    c_u = mu_y * FzTire;
    SHykappa = c_u * zeta[2];
    main_div0protect_kw(kb_idx_0 * SHykappa, &lam_mux_star, &phi);
    phi = Kyalpha / lam_mux_star;
    if (isLowSpeed) {
      trueCount = 0;
      if (isLowSpeed) {
        for (i = 0; i < 1; i++) {
          trueCount++;
        }
      }

      wc_tmp_size[0] = 1;
      wc_tmp_size[1] = trueCount;
      ob_size[0] = 1;
      trueCount = wc_tmp_size[1];
      ob_size[1] = trueCount;
      if (trueCount - 1 >= 0) {
        ob_data = 0;
      }

      jb_tmp[0] = 1;
      jb_tmp[1] = trueCount;
      if (jb_tmp[1] == 1) {
        i = trueCount;
      } else {
        i = jb_tmp[1];
      }

      if ((jb_tmp[1] == trueCount) && (i == jb_tmp[1])) {
        tmp_0 = jb_tmp[1];
        for (i = 0; i < tmp_0; i++) {
          for (pb_size_idx_0 = 0; pb_size_idx_0 < trueCount; pb_size_idx_0++) {
            c = (((Kygammao * gamma_star - SVygamma) / Vc * zeta[0] +
                  (rtP.CombinedSlipWheelCPI_PHY2 * dfz +
                   rtP.CombinedSlipWheelCPI_PHY1) *
                  rtB.TmpSignalConversionAtSFunctionI[11]) + zeta[4]) - 1.0;
          }
        }

        if (trueCount - 1 >= 0) {
          SHy = c;
        }
      } else {
        main_binary_expand_op(&SHy, ob_size, rtP.CombinedSlipWheelCPI_PHY1,
                              rtP.CombinedSlipWheelCPI_PHY2, dfz, jb_tmp,
                              rtB.TmpSignalConversionAtSFunctionI, wc_tmp_size,
                              Kygammao, gamma_star, SVygamma, Vc, zeta);
      }
    }

    SVygamma += (rtP.CombinedSlipWheelCPI_PVY2 * dfz +
                 rtP.CombinedSlipWheelCPI_PVY1) * FzTire *
      rtB.TmpSignalConversionAtSFunctionI[13] * lam_muy_prime * zeta[2];
    lam_muy_prime = Alpha + SHy;
    if (rtIsNaN(lam_muy_prime)) {
      lam_mux_star = (rtNaN);
    } else if (lam_muy_prime < 0.0) {
      lam_mux_star = -1.0;
    } else {
      lam_mux_star = (lam_muy_prime > 0.0);
    }

    if (lam_mux_star == 0.0) {
      lam_mux_star = 1.0;
    }

    lam_mux_star = ((mu_y_tmp * rtP.CombinedSlipWheelCPI_PEY5 + 1.0) -
                    (rtP.CombinedSlipWheelCPI_PEY4 * gamma_star +
                     rtP.CombinedSlipWheelCPI_PEY3) * lam_mux_star) *
      (rtP.CombinedSlipWheelCPI_PEY2 * dfz + rtP.CombinedSlipWheelCPI_PEY1) *
      rtB.TmpSignalConversionAtSFunctionI[9];
    mu_y = lam_mux_star;
    if (lam_mux_star > 1.0) {
      mu_y = 1.0;
    }

    lam_mux_star = ((rtP.CombinedSlipWheelCPI_RVY2 * dfz +
                     rtP.CombinedSlipWheelCPI_RVY1) +
                    rtP.CombinedSlipWheelCPI_RVY3 * gamma_star) * c_u * cos(atan
      (rtP.CombinedSlipWheelCPI_RVY4 * Alpha)) * zeta[2] * sin(atan
      (rtP.CombinedSlipWheelCPI_RVY6 * Kappa) * rtP.CombinedSlipWheelCPI_RVY5) *
      rtB.TmpSignalConversionAtSFunctionI[20];
    mu_y_tmp_0 = phi * lam_muy_prime;
    mu_y = (sin(atan(mu_y_tmp_0 - (mu_y_tmp_0 - atan(mu_y_tmp_0)) * mu_y) *
                kb_idx_0) * SHykappa + SVygamma) * qb_idx_0 + lam_mux_star;
    lam_muy_prime = rtP.Constant1_Value / rtP.CombinedSlipWheelCPI_LONGVL;
    lam_muy_prime = ((((kappa_x / rtP.CombinedSlipWheelCPI_FNOMIN *
                        rtP.CombinedSlipWheelCPI_QSY2 +
                        rtP.CombinedSlipWheelCPI_QSY1) + fabs(lam_muy_prime) *
                       rtP.CombinedSlipWheelCPI_QSY3) + rt_powd_snf
                      (lam_muy_prime, 4.0) * rtP.CombinedSlipWheelCPI_QSY4) +
                     (Re_tmp * rtP.CombinedSlipWheelCPI_QSY6 +
                      rtP.CombinedSlipWheelCPI_QSY5) * e_idx_0 * e_idx_0) *
      (-rtP.CombinedSlipWheelCPI_UNLOADED_R * rtP.CombinedSlipWheelCPI_FNOMIN *
       rtB.TmpSignalConversionAtSFunctionI[25]) * (rt_powd_snf(fmax(g_idx_0 /
      rtP.CombinedSlipWheelCPI_NOMPRES, 0.05), rtP.CombinedSlipWheelCPI_QSY8) *
      rt_powd_snf(fmax(Re_tmp, 0.05), rtP.CombinedSlipWheelCPI_QSY7)) * tanh
      (10.0 * rtP.Constant_Value);
    Kygammao = rtP.CombinedSlipWheelCPI_QSX6 * FzTire /
      rtP.CombinedSlipWheelCPI_FNOMIN;
    SHykappa = fabs(e_idx_0);
    Re_tmp = rtP.CombinedSlipWheelCPI_UNLOADED_R * FzTire;
    rtB.Mx = (((((rtP.CombinedSlipWheelCPI_QSX1 *
                  rtB.TmpSignalConversionAtSFunctionI[24] -
                  (rtP.CombinedSlipWheelCPI_PPMX1 * dpi + 1.0) *
                  (rtP.CombinedSlipWheelCPI_QSX2 * e_idx_0)) -
                 rtP.CombinedSlipWheelCPI_QSX12 * e_idx_0 * SHykappa) +
                rtP.CombinedSlipWheelCPI_QSX3 * mu_y /
                rtP.CombinedSlipWheelCPI_FNOMIN) + sin(atan
                (rtP.CombinedSlipWheelCPI_QSX9 * mu_y /
                 rtP.CombinedSlipWheelCPI_FNOMIN) *
                rtP.CombinedSlipWheelCPI_QSX8 + rtP.CombinedSlipWheelCPI_QSX7 *
                e_idx_0) * (cos(atan(Kygammao * Kygammao) *
      rtP.CombinedSlipWheelCPI_QSX5) * rtP.CombinedSlipWheelCPI_QSX4)) + atan
              (rtP.CombinedSlipWheelCPI_QSX11 * FzTire /
               rtP.CombinedSlipWheelCPI_FNOMIN) * rtP.CombinedSlipWheelCPI_QSX10
              * e_idx_0) * (Re_tmp * rtB.TmpSignalConversionAtSFunctionI[23]) +
      rtP.CombinedSlipWheelCPI_UNLOADED_R * mu_y *
      rtB.TmpSignalConversionAtSFunctionI[23] * (rtP.CombinedSlipWheelCPI_QSX14 *
      SHykappa + rtP.CombinedSlipWheelCPI_QSX13);
    Vsy = rtP.Constant1_Value / Vsy;
    Kygammao = ((rtP.CombinedSlipWheelCPI_QHZ4 * dfz +
                 rtP.CombinedSlipWheelCPI_QHZ3) * gamma_star +
                (rtP.CombinedSlipWheelCPI_QHZ2 * dfz +
                 rtP.CombinedSlipWheelCPI_QHZ1)) + Alpha;
    SHy = (SVygamma / Vc + SHy) + Alpha;
    SVygamma = (((rtP.CombinedSlipWheelCPI_QBZ4 * e_idx_0 + 1.0) +
                 rtP.CombinedSlipWheelCPI_QBZ5 * SHykappa) + mu_y_tmp *
                rtP.CombinedSlipWheelCPI_QBZ6) * ((rtP.CombinedSlipWheelCPI_QBZ2
      * dfz + rtP.CombinedSlipWheelCPI_QBZ1) + DHyphi *
      rtP.CombinedSlipWheelCPI_QBZ3) * rtB.TmpSignalConversionAtSFunctionI[5] /
      Vs;
    g_idx_0 = SVygamma;
    if (SVygamma < 0.0) {
      g_idx_0 = 0.0;
    }

    mu_y_tmp_0 = rtP.CombinedSlipWheelCPI_QCZ1;
    if (rtP.CombinedSlipWheelCPI_QCZ1 < 0.0) {
      mu_y_tmp_0 = 0.0;
    }

    SVygamma = ((rtP.CombinedSlipWheelCPI_QEZ5 * gamma_star +
                 rtP.CombinedSlipWheelCPI_QEZ4) * 2.0 / 3.1415926535897931 *
                atan(g_idx_0 * mu_y_tmp_0 * Kygammao) + 1.0) *
      ((rtP.CombinedSlipWheelCPI_QEZ2 * dfz + rtP.CombinedSlipWheelCPI_QEZ1) +
       DHyphi * rtP.CombinedSlipWheelCPI_QEZ3);
    c_u = SVygamma;
    if (SVygamma > 1.0) {
      c_u = 1.0;
    }

    SVygamma = (rtP.CombinedSlipWheelCPI_QBZ9 *
                rtB.TmpSignalConversionAtSFunctionI[5] / Vs +
                rtP.CombinedSlipWheelCPI_QBZ10 * phi * kb_idx_0) * zeta[6];
    phi = tan(SHy);
    SHykappa = epsilon_gamma / Vc;
    Vc = SHykappa * SHykappa * (Kappa * Kappa);
    SHy = atan(sqrt(phi * phi + Vc)) * tanh(1000.0 * SHy);
    phi = tan(Kygammao);
    Vc = atan(sqrt(phi * phi + Vc)) * tanh(1000.0 * Kygammao);
    mu_y_tmp = SVygamma * SHy;
    Vc *= g_idx_0;
    rtB.Mz = ((((((rtP.CombinedSlipWheelCPI_QDZ9 * dfz +
                   rtP.CombinedSlipWheelCPI_QDZ8) *
                  (rtP.CombinedSlipWheelCPI_PPZ2 * dpi + 1.0) +
                  (rtP.CombinedSlipWheelCPI_QDZ11 * dfz +
                   rtP.CombinedSlipWheelCPI_QDZ10) * phi_t) * gamma_star *
                 rtB.TmpSignalConversionAtSFunctionI[15] * zeta[0] +
                 (rtP.CombinedSlipWheelCPI_QDZ7 * dfz +
                  rtP.CombinedSlipWheelCPI_QDZ6) *
                 rtB.TmpSignalConversionAtSFunctionI[17] * zeta[2]) * Re_tmp *
                Vs * tanh(10.0 * rtP.Constant1_Value) * Vsy + zeta[8]) - 1.0) *
              cos(atan(mu_y_tmp - (mu_y_tmp - atan(mu_y_tmp)) * 0.0) * zeta[7])
              + -((rtP.CombinedSlipWheelCPI_QDZ2 * dfz +
                   rtP.CombinedSlipWheelCPI_QDZ1) * (1.0 -
                rtP.CombinedSlipWheelCPI_PPZ1 * dpi) *
                  ((rtP.CombinedSlipWheelCPI_QDZ3 * e_idx_0 + 1.0) + Kyalpha_tmp
                   * rtP.CombinedSlipWheelCPI_QDZ4) * FzTire *
                  (rtP.CombinedSlipWheelCPI_UNLOADED_R / Fzo_prime) *
                  rtB.TmpSignalConversionAtSFunctionI[16] * zeta[5] * cos(atan
                (Vc - (Vc - atan(Vc)) * c_u) * mu_y_tmp_0) * Vsy * 1.0) * (mu_y
               - lam_mux_star)) + ((rtP.CombinedSlipWheelCPI_SSZ2 * mu_y /
      rtP.CombinedSlipWheelCPI_FNOMIN + rtP.CombinedSlipWheelCPI_SSZ1) +
      (rtP.CombinedSlipWheelCPI_SSZ4 * dfz + rtP.CombinedSlipWheelCPI_SSZ3) *
      gamma_star) * rtP.CombinedSlipWheelCPI_UNLOADED_R *
      rtB.TmpSignalConversionAtSFunctionI[21] * kappa_x;
    if (rtP.vertType_Value == 1.0) {
      RL = main_solveRLwithFz(rtP.CombinedSlipWheelCPI_LONGVL,
        rtP.CombinedSlipWheelCPI_UNLOADED_R, rtP.CombinedSlipWheelCPI_ASPECT_RAT,
        rtP.CombinedSlipWheelCPI_WIDTH, rtP.CombinedSlipWheelCPI_Q_RE0,
        rtP.CombinedSlipWheelCPI_Q_V1, rtP.CombinedSlipWheelCPI_FNOMIN,
        rtP.CombinedSlipWheelCPI_VERTICAL_S, rtP.CombinedSlipWheelCPI_RIM_RADIUS,
        rtP.CombinedSlipWheelCPI_BOTTOM_STI, rtP.CombinedSlipWheelCPI_BOTTOM_OFF,
        rtP.CombinedSlipWheelCPI_Q_V2, rtP.CombinedSlipWheelCPI_Q_FZ1,
        rtP.CombinedSlipWheelCPI_Q_FZ2, rtP.CombinedSlipWheelCPI_Q_FCX,
        rtP.CombinedSlipWheelCPI_Q_FCY, rtP.CombinedSlipWheelCPI_PFZ1,
        rtP.CombinedSlipWheelCPI_Q_FCY2, rtP.CombinedSlipWheelCPI_Q_CAM1,
        rtP.CombinedSlipWheelCPI_Q_CAM2, rtP.CombinedSlipWheelCPI_Q_CAM3,
        rtP.CombinedSlipWheelCPI_Q_FYS1, rtP.CombinedSlipWheelCPI_Q_FYS2,
        rtP.CombinedSlipWheelCPI_Q_FYS3, dpi, rtP.Constant_Value, e_idx_0,
        kappa_x, mu_y, FzTire);
      main_calculateFz(RL, rtP.CombinedSlipWheelCPI_LONGVL,
                       rtP.CombinedSlipWheelCPI_UNLOADED_R,
                       rtP.CombinedSlipWheelCPI_ASPECT_RAT,
                       rtP.CombinedSlipWheelCPI_WIDTH,
                       rtP.CombinedSlipWheelCPI_Q_RE0,
                       rtP.CombinedSlipWheelCPI_Q_V1,
                       rtP.CombinedSlipWheelCPI_FNOMIN,
                       rtP.CombinedSlipWheelCPI_VERTICAL_S,
                       rtP.CombinedSlipWheelCPI_RIM_RADIUS,
                       rtP.CombinedSlipWheelCPI_BOTTOM_STI,
                       rtP.CombinedSlipWheelCPI_BOTTOM_OFF,
                       rtP.CombinedSlipWheelCPI_Q_V2,
                       rtP.CombinedSlipWheelCPI_Q_FZ1,
                       rtP.CombinedSlipWheelCPI_Q_FZ2,
                       rtP.CombinedSlipWheelCPI_Q_FCX,
                       rtP.CombinedSlipWheelCPI_Q_FCY,
                       rtP.CombinedSlipWheelCPI_PFZ1,
                       rtP.CombinedSlipWheelCPI_Q_FCY2,
                       rtP.CombinedSlipWheelCPI_Q_CAM1,
                       rtP.CombinedSlipWheelCPI_Q_CAM2,
                       rtP.CombinedSlipWheelCPI_Q_CAM3,
                       rtP.CombinedSlipWheelCPI_Q_FYS1,
                       rtP.CombinedSlipWheelCPI_Q_FYS2,
                       rtP.CombinedSlipWheelCPI_Q_FYS3, dpi, rtP.Constant_Value,
                       e_idx_0, kappa_x, mu_y, &Fzo_prime, &RadialDeflct);
    }

    Vs = Cz * rtP.CombinedSlipWheelCPI_UNLOADED_R;
    Fzo_prime = FzTire / Vs;
    if ((Vs == 0.0) || (Fzo_prime < 0.0)) {
      Fzo_prime = 0.0;
    }

    tmp_1 = _mm_mul_pd(_mm_add_pd(_mm_mul_pd(_mm_set_pd
      (rtP.CombinedSlipWheelCPI_Q_RB2, rtP.CombinedSlipWheelCPI_Q_RA2),
      _mm_set1_pd(Fzo_prime)), _mm_mul_pd(_mm_set_pd
      (rtP.CombinedSlipWheelCPI_Q_RB1, rtP.CombinedSlipWheelCPI_Q_RA1),
      _mm_set_pd(rt_powd_snf(Fzo_prime, 0.33333333333333331), sqrt(Fzo_prime)))),
                       _mm_set_pd(rtP.CombinedSlipWheelCPI_WIDTH,
      rtP.CombinedSlipWheelCPI_UNLOADED_R));
    _mm_storeu_pd(&tmp_2[0], tmp_1);
    Cz = tmp_2[0];
    Fzo_prime = tmp_2[1];
    if (Cz < 0.0) {
      Cz = 0.0;
    }

    rtB.a = Cz;
    if (Fzo_prime < 0.0) {
      Fzo_prime = 0.0;
    }

    rtB.b = Fzo_prime;
    rtB.sig_x = fabs(epsilon_gamma / (((rtP.CombinedSlipWheelCPI_PCFX1 * dfz +
      1.0) + DHyphi * rtP.CombinedSlipWheelCPI_PCFX2) *
      rtP.CombinedSlipWheelCPI_LONGITUDIN * (rtP.CombinedSlipWheelCPI_PCFX3 *
      dpi + 1.0)));
    rtB.sig_y = Kyalpha / (((rtP.CombinedSlipWheelCPI_PCFY1 * dfz + 1.0) +
      DHyphi * rtP.CombinedSlipWheelCPI_PCFY2) *
      rtP.CombinedSlipWheelCPI_LATERAL_ST * (rtP.CombinedSlipWheelCPI_PCFY3 *
      dpi + 1.0));
    rtB.Tw = kappa_x * RL - lam_muy_prime;
  } else {
    main_vdyncsmtire(rtP.Constant_Value, rtP.Constant1_Value, rtB.FlipTire,
                     rtP.Constant4_Value, rtB.FlipTire1_n, rtP.Constant7_Value,
                     rtB.TmpSignalConversionAtSFunctionI, &RadialDeflct,
                     rtP.CombinedSlipWheelCPI_turnslip,
                     rtP.CombinedSlipWheelCPI_PRESMAX,
                     rtP.CombinedSlipWheelCPI_PRESMIN,
                     rtP.CombinedSlipWheelCPI_FZMAX,
                     rtP.CombinedSlipWheelCPI_FZMIN,
                     rtP.CombinedSlipWheelCPI_VXLOW,
                     rtP.CombinedSlipWheelCPI_KPUMAX,
                     rtP.CombinedSlipWheelCPI_KPUMIN,
                     rtP.CombinedSlipWheelCPI_ALPMAX,
                     rtP.CombinedSlipWheelCPI_ALPMIN,
                     rtP.CombinedSlipWheelCPI_CAMMIN,
                     rtP.CombinedSlipWheelCPI_CAMMAX,
                     rtP.CombinedSlipWheelCPI_LONGVL,
                     rtP.CombinedSlipWheelCPI_UNLOADED_R,
                     rtP.CombinedSlipWheelCPI_RIM_RADIUS,
                     rtP.CombinedSlipWheelCPI_NOMPRES,
                     rtP.CombinedSlipWheelCPI_FNOMIN,
                     rtP.MagicTireConstInput_vdynMF[38],
                     rtP.MagicTireConstInput_vdynMF[43],
                     rtP.MagicTireConstInput_vdynMF[42],
                     rtP.MagicTireConstInput_vdynMF[44],
                     rtP.MagicTireConstInput_vdynMF[45],
                     rtP.MagicTireConstInput_vdynMF[46],
                     rtP.MagicTireConstInput_vdynMF[47],
                     rtP.MagicTireConstInput_vdynMF[48],
                     rtP.MagicTireConstInput_vdynMF[49],
                     rtP.MagicTireConstInput_vdynMF[51],
                     rtP.MagicTireConstInput_vdynMF[52],
                     rtP.MagicTireConstInput_vdynMF[54],
                     rtP.MagicTireConstInput_vdynMF[55],
                     rtP.MagicTireConstInput_vdynMF[62],
                     rtP.MagicTireConstInput_vdynMF[63],
                     rtP.MagicTireConstInput_vdynMF[134],
                     rtP.MagicTireConstInput_vdynMF[135],
                     rtP.MagicTireConstInput_vdynMF[136],
                     rtP.MagicTireConstInput_vdynMF[137],
                     rtP.MagicTireConstInput_vdynMF[138],
                     rtP.MagicTireConstInput_vdynMF[139],
                     rtP.MagicTireConstInput_vdynMF[140],
                     rtP.MagicTireConstInput_vdynMF[141],
                     rtP.MagicTireConstInput_vdynMF[142],
                     rtP.MagicTireConstInput_vdynMF[143],
                     rtP.MagicTireConstInput_vdynMF[144],
                     rtP.MagicTireConstInput_vdynMF[145],
                     rtP.MagicTireConstInput_vdynMF[146],
                     rtP.MagicTireConstInput_vdynMF[147],
                     rtP.MagicTireConstInput_vdynMF[148],
                     rtP.MagicTireConstInput_vdynMF[149],
                     rtP.MagicTireConstInput_vdynMF[150],
                     rtP.MagicTireConstInput_vdynMF[151],
                     rtP.MagicTireConstInput_vdynMF[152],
                     rtP.MagicTireConstInput_vdynMF[153],
                     rtP.MagicTireConstInput_vdynMF[154],
                     rtP.MagicTireConstInput_vdynMF[155],
                     rtP.MagicTireConstInput_vdynMF[156],
                     rtP.MagicTireConstInput_vdynMF[157],
                     rtP.MagicTireConstInput_vdynMF[158],
                     rtP.MagicTireConstInput_vdynMF[159],
                     rtP.MagicTireConstInput_vdynMF[160],
                     rtP.MagicTireConstInput_vdynMF[161],
                     rtP.MagicTireConstInput_vdynMF[162],
                     rtP.MagicTireConstInput_vdynMF[163],
                     rtP.MagicTireConstInput_vdynMF[164],
                     rtP.MagicTireConstInput_vdynMF[165],
                     rtP.MagicTireConstInput_vdynMF[166],
                     rtP.MagicTireConstInput_vdynMF[167],
                     rtP.MagicTireConstInput_vdynMF[168],
                     rtP.MagicTireConstInput_vdynMF[169],
                     rtP.MagicTireConstInput_vdynMF[170],
                     rtP.MagicTireConstInput_vdynMF[174],
                     rtP.MagicTireConstInput_vdynMF[175],
                     rtP.MagicTireConstInput_vdynMF[176],
                     rtP.MagicTireConstInput_vdynMF[177],
                     rtP.MagicTireConstInput_vdynMF[178],
                     rtP.MagicTireConstInput_vdynMF[179],
                     rtP.MagicTireConstInput_vdynMF[180],
                     rtP.MagicTireConstInput_vdynMF[181],
                     rtP.MagicTireConstInput_vdynMF[182],
                     rtP.MagicTireConstInput_vdynMF[183],
                     rtP.MagicTireConstInput_vdynMF[184],
                     rtP.MagicTireConstInput_vdynMF[185],
                     rtP.MagicTireConstInput_vdynMF[186],
                     rtP.MagicTireConstInput_vdynMF[187],
                     rtP.MagicTireConstInput_vdynMF[188],
                     rtP.MagicTireConstInput_vdynMF[189],
                     rtP.MagicTireConstInput_vdynMF[190],
                     rtP.MagicTireConstInput_vdynMF[191],
                     rtP.MagicTireConstInput_vdynMF[192],
                     rtP.MagicTireConstInput_vdynMF[193],
                     rtP.MagicTireConstInput_vdynMF[194],
                     rtP.MagicTireConstInput_vdynMF[195],
                     rtP.MagicTireConstInput_vdynMF[196],
                     rtP.MagicTireConstInput_vdynMF[197],
                     rtP.MagicTireConstInput_vdynMF[198],
                     rtP.MagicTireConstInput_vdynMF[199],
                     rtP.MagicTireConstInput_vdynMF[200],
                     rtP.MagicTireConstInput_vdynMF[201],
                     rtP.MagicTireConstInput_vdynMF[202],
                     rtP.MagicTireConstInput_vdynMF[203],
                     rtP.MagicTireConstInput_vdynMF[204],
                     rtP.MagicTireConstInput_vdynMF[205],
                     rtP.MagicTireConstInput_vdynMF[206],
                     rtP.MagicTireConstInput_vdynMF[207],
                     rtP.MagicTireConstInput_vdynMF[208],
                     rtP.MagicTireConstInput_vdynMF[209],
                     rtP.MagicTireConstInput_vdynMF[210],
                     rtP.MagicTireConstInput_vdynMF[211],
                     rtP.MagicTireConstInput_vdynMF[212],
                     rtP.MagicTireConstInput_vdynMF[213],
                     rtP.MagicTireConstInput_vdynMF[214],
                     rtP.MagicTireConstInput_vdynMF[215],
                     rtP.MagicTireConstInput_vdynMF[216],
                     rtP.MagicTireConstInput_vdynMF[217],
                     rtP.MagicTireConstInput_vdynMF[218],
                     rtP.MagicTireConstInput_vdynMF[219],
                     rtP.MagicTireConstInput_vdynMF[220],
                     rtP.MagicTireConstInput_vdynMF[221],
                     rtP.MagicTireConstInput_vdynMF[222],
                     rtP.MagicTireConstInput_vdynMF[223],
                     rtP.MagicTireConstInput_vdynMF[224],
                     rtP.MagicTireConstInput_vdynMF[225],
                     rtP.MagicTireConstInput_vdynMF[226],
                     rtP.MagicTireConstInput_vdynMF[227],
                     rtP.MagicTireConstInput_vdynMF[228],
                     rtP.MagicTireConstInput_vdynMF[229],
                     rtP.MagicTireConstInput_vdynMF[230],
                     rtP.MagicTireConstInput_vdynMF[231],
                     rtP.MagicTireConstInput_vdynMF[232],
                     rtP.MagicTireConstInput_vdynMF[233],
                     rtP.MagicTireConstInput_vdynMF[234],
                     rtP.MagicTireConstInput_vdynMF[235],
                     rtP.MagicTireConstInput_vdynMF[236],
                     rtP.MagicTireConstInput_vdynMF[237],
                     rtP.MagicTireConstInput_vdynMF[238],
                     rtP.MagicTireConstInput_vdynMF[239],
                     rtP.MagicTireConstInput_vdynMF[240],
                     rtP.MagicTireConstInput_vdynMF[242],
                     rtP.MagicTireConstInput_vdynMF[242],
                     rtP.MagicTireConstInput_vdynMF[243],
                     rtP.MagicTireConstInput_vdynMF[244],
                     rtP.MagicTireConstInput_vdynMF[245],
                     rtP.MagicTireConstInput_vdynMF[246],
                     rtP.MagicTireConstInput_vdynMF[247],
                     rtP.MagicTireConstInput_vdynMF[248],
                     rtP.MagicTireConstInput_vdynMF[249],
                     rtP.MagicTireConstInput_vdynMF[250],
                     rtP.MagicTireConstInput_vdynMF[251],
                     rtP.MagicTireConstInput_vdynMF[252],
                     rtP.MagicTireConstInput_vdynMF[253],
                     rtP.MagicTireConstInput_vdynMF[254],
                     rtP.MagicTireConstInput_vdynMF[255],
                     rtP.MagicTireConstInput_vdynMF[256],
                     rtP.MagicTireConstInput_vdynMF[257],
                     rtP.MagicTireConstInput_vdynMF[258],
                     rtP.MagicTireConstInput_vdynMF[259],
                     rtP.MagicTireConstInput_vdynMF[260],
                     rtP.MagicTireConstInput_vdynMF[261],
                     rtP.MagicTireConstInput_vdynMF[262],
                     rtP.MagicTireConstInput_vdynMF[263],
                     rtP.MagicTireConstInput_vdynMF[264],
                     rtP.MagicTireConstInput_vdynMF[265],
                     rtP.MagicTireConstInput_vdynMF[266],
                     rtP.MagicTireConstInput_vdynMF[267],
                     rtP.MagicTireConstInput_vdynMF[268],
                     rtP.MagicTireConstInput_vdynMF[269],
                     rtP.MagicTireConstInput_vdynMF[270],
                     rtP.MagicTireConstInput_vdynMF[271],
                     rtP.MagicTireConstInput_vdynMF[272],
                     rtP.MagicTireConstInput_vdynMF[273],
                     rtP.MagicTireConstInput_vdynMF[274],
                     rtP.MagicTireConstInput_vdynMF[275],
                     rtP.MagicTireConstInput_vdynMF[276],
                     rtP.MagicTireConstInput_vdynMF[277],
                     rtP.MagicTireConstInput_vdynMF[278],
                     rtP.CombinedSlipWheelCPI_WIDTH,
                     rtP.MagicTireConstInput_vdynMF[86],
                     rtP.MagicTireConstInput_vdynMF[87],
                     rtP.MagicTireConstInput_vdynMF[88],
                     rtP.MagicTireConstInput_vdynMF[89],
                     rtP.MagicTireConstInput_vdynMF[171],
                     rtP.MagicTireConstInput_vdynMF[172],
                     rtP.MagicTireConstInput_vdynMF[173],
                     rtP.MagicTireConstInput_vdynMF[64],
                     rtP.MagicTireConstInput_vdynMF[65],
                     rtP.MagicTireConstInput_vdynMF[79],
                     rtP.MagicTireConstInput_vdynMF[80],
                     rtP.MagicTireConstInput_vdynMF[81],
                     rtP.MagicTireConstInput_vdynMF[82],
                     rtP.MagicTireConstInput_vdynMF[83],
                     rtP.MagicTireConstInput_vdynMF[84], rtB.Integrator,
                     rtB.Integrator_f, rtB.Sum1, rtP.vertType_Value,
                     rtP.MagicTireConstInput_vdynMF[56],
                     rtP.MagicTireConstInput_vdynMF[57],
                     rtP.MagicTireConstInput_vdynMF[58],
                     rtP.MagicTireConstInput_vdynMF[59],
                     rtP.MagicTireConstInput_vdynMF[60],
                     rtP.MagicTireConstInput_vdynMF[61],
                     rtP.MagicTireConstInput_vdynMF[62], &kappa_x, &mu_y,
                     &FzTire, &rtB.Mx, &lam_muy_prime, &rtB.Mz, &Re, &Kappa,
                     &Alpha, &rtB.sig_x, &rtB.sig_y, &rtB.a, &rtB.b, &RL,
                     &rtB.Tw);
  }

  rtB.Fx = kappa_x;
  rtB.Fy = mu_y;
  rtB.FzTire = FzTire;
  rtB.My = lam_muy_prime;
  rtB.Re = Re;
  rtB.Kappa = Kappa;
  rtB.Alpha = Alpha;
  rtB.RL = RL;
  rtB.RadialDeflct = RadialDeflct;

  /* Gain: '<S2>/Flip Tire2' */
  rtB.FlipTire2 = rtP.FlipTire2_Gain * rtB.Mx;

  /* Integrator: '<S7>/Integrator' */
  rtB.Integrator_e = rtX.Integrator_CSTATE_h;

  /* Gain: '<S2>/Flip Tire3' */
  rtB.FlipTire3 = rtP.FlipTire3_Gain * rtB.Mz;
  if (tmp) {
  }

  /* Product: '<S3>/Product' */
  rtB.Product = rtB.Fx * rtB.RL;

  /* Sum: '<S3>/Add' */
  rtB.Add = rtB.Product - rtB.My;

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<Root>/Constant'
   *  Product: '<S5>/Product2'
   *  Product: '<S7>/Product2'
   *  Product: '<S8>/Product2'
   */
  RadialDeflct = rtP.Constant_Value * rtB.Re;

  /* Product: '<S4>/Product2' */
  rtB.Product2 = RadialDeflct;

  /* Sum: '<S4>/Add1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Sum: '<S7>/Add1'
   *  Sum: '<S8>/Add1'
   */
  FzTire = rtP.Constant1_Value - rtB.Product2;

  /* Sum: '<S4>/Add1' */
  rtB.Add1 = FzTire;

  /* Abs: '<S4>/Abs' incorporates:
   *  Abs: '<S7>/Abs'
   *  Abs: '<S8>/Abs'
   */
  Re = fabs(rtB.Add1);

  /* Abs: '<S4>/Abs' */
  rtB.Abs = Re;

  /* Sum: '<S4>/Add' */
  rtB.Add_a = rtB.Fx - rtB.Integrator;

  /* Saturate: '<S4>/Saturation1' */
  Kappa = rtB.sig_x;
  Alpha = rtP.Saturation1_LowerSat;
  RL = rtP.Saturation1_UpperSat;
  if (Kappa > RL) {
    /* Saturate: '<S4>/Saturation1' */
    rtB.Saturation1 = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S4>/Saturation1' */
    rtB.Saturation1 = Alpha;
  } else {
    /* Saturate: '<S4>/Saturation1' */
    rtB.Saturation1 = Kappa;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* Product: '<S4>/Product3' */
  rtB.Product3 = rtB.Abs / rtB.Saturation1;

  /* Saturate: '<S4>/Saturation' */
  Kappa = rtB.Product3;
  Alpha = rtP.Saturation_LowerSat;
  RL = rtP.Saturation_UpperSat;
  if (Kappa > RL) {
    /* Saturate: '<S4>/Saturation' */
    rtB.Saturation = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S4>/Saturation' */
    rtB.Saturation = Alpha;
  } else {
    /* Saturate: '<S4>/Saturation' */
    rtB.Saturation = Kappa;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Product: '<S4>/Product1' */
  rtB.Product1 = rtB.Saturation * rtB.Add_a;

  /* Product: '<S5>/Product2' */
  rtB.Product2_p = RadialDeflct;

  /* Sum: '<S5>/Add1' */
  rtB.Add1_e = rtB.FlipTire - rtB.Product2_p;

  /* Abs: '<S5>/Abs' */
  rtB.Abs_c = fabs(rtB.Add1_e);

  /* Sum: '<S5>/Add' */
  rtB.Add_i = rtB.Fy - rtB.Integrator_f;

  /* Saturate: '<S5>/Saturation1' */
  Kappa = rtB.sig_y;
  Alpha = rtP.Saturation1_LowerSat_l;
  RL = rtP.Saturation1_UpperSat_d;
  if (Kappa > RL) {
    /* Saturate: '<S5>/Saturation1' */
    rtB.Saturation1_l = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S5>/Saturation1' */
    rtB.Saturation1_l = Alpha;
  } else {
    /* Saturate: '<S5>/Saturation1' */
    rtB.Saturation1_l = Kappa;
  }

  /* End of Saturate: '<S5>/Saturation1' */

  /* Product: '<S5>/Product3' */
  rtB.Product3_e = rtB.Abs_c / rtB.Saturation1_l;

  /* Saturate: '<S5>/Saturation' */
  Kappa = rtB.Product3_e;
  Alpha = rtP.Saturation_LowerSat_f;
  RL = rtP.Saturation_UpperSat_f;
  if (Kappa > RL) {
    /* Saturate: '<S5>/Saturation' */
    rtB.Saturation_f = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S5>/Saturation' */
    rtB.Saturation_f = Alpha;
  } else {
    /* Saturate: '<S5>/Saturation' */
    rtB.Saturation_f = Kappa;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Product: '<S5>/Product1' */
  rtB.Product1_l = rtB.Saturation_f * rtB.Add_i;

  /* Product: '<S7>/Product2' */
  rtB.Product2_pg = RadialDeflct;

  /* Sum: '<S7>/Add1' */
  rtB.Add1_k = FzTire;

  /* Abs: '<S7>/Abs' */
  rtB.Abs_f = Re;

  /* Sum: '<S7>/Add' */
  rtB.Add_f = rtB.My - rtB.Integrator_e;

  /* Saturate: '<S7>/Saturation1' */
  Kappa = rtB.sig_x;
  Alpha = rtP.Saturation1_LowerSat_c;
  RL = rtP.Saturation1_UpperSat_n;
  if (Kappa > RL) {
    /* Saturate: '<S7>/Saturation1' */
    rtB.Saturation1_lc = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S7>/Saturation1' */
    rtB.Saturation1_lc = Alpha;
  } else {
    /* Saturate: '<S7>/Saturation1' */
    rtB.Saturation1_lc = Kappa;
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* Product: '<S7>/Product3' */
  rtB.Product3_c = rtB.Abs_f / rtB.Saturation1_lc;

  /* Saturate: '<S7>/Saturation' */
  Kappa = rtB.Product3_c;
  Alpha = rtP.Saturation_LowerSat_d;
  RL = rtP.Saturation_UpperSat_k;
  if (Kappa > RL) {
    /* Saturate: '<S7>/Saturation' */
    rtB.Saturation_d = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S7>/Saturation' */
    rtB.Saturation_d = Alpha;
  } else {
    /* Saturate: '<S7>/Saturation' */
    rtB.Saturation_d = Kappa;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Product: '<S7>/Product1' */
  rtB.Product1_f = rtB.Saturation_d * rtB.Add_f;

  /* Product: '<S8>/Product2' */
  rtB.Product2_n = RadialDeflct;

  /* Sum: '<S8>/Add1' */
  rtB.Add1_ke = FzTire;

  /* Abs: '<S8>/Abs' */
  rtB.Abs_k = Re;

  /* Integrator: '<S8>/Integrator' */
  rtB.Integrator_k = rtX.Integrator_CSTATE_e;

  /* Sum: '<S8>/Add' */
  rtB.Add_k = rtB.Add - rtB.Integrator_k;

  /* Saturate: '<S8>/Saturation1' */
  Kappa = rtB.sig_x;
  Alpha = rtP.Saturation1_LowerSat_h;
  RL = rtP.Saturation1_UpperSat_b;
  if (Kappa > RL) {
    /* Saturate: '<S8>/Saturation1' */
    rtB.Saturation1_i = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S8>/Saturation1' */
    rtB.Saturation1_i = Alpha;
  } else {
    /* Saturate: '<S8>/Saturation1' */
    rtB.Saturation1_i = Kappa;
  }

  /* End of Saturate: '<S8>/Saturation1' */

  /* Product: '<S8>/Product3' */
  rtB.Product3_p = rtB.Abs_k / rtB.Saturation1_i;

  /* Saturate: '<S8>/Saturation' */
  Kappa = rtB.Product3_p;
  Alpha = rtP.Saturation_LowerSat_h;
  RL = rtP.Saturation_UpperSat_fp;
  if (Kappa > RL) {
    /* Saturate: '<S8>/Saturation' */
    rtB.Saturation_fn = RL;
  } else if (Kappa < Alpha) {
    /* Saturate: '<S8>/Saturation' */
    rtB.Saturation_fn = Alpha;
  } else {
    /* Saturate: '<S8>/Saturation' */
    rtB.Saturation_fn = Kappa;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Product: '<S8>/Product1' */
  rtB.Product1_a = rtB.Saturation_fn * rtB.Add_k;
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void MdlDerivatives(void)
{
  XDot *_rtXdot;
  _rtXdot = ((XDot *) ssGetdX(rtS));

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE = rtB.Product1;

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE_a = rtB.Product1_l;

  /* Derivatives for Integrator: '<S7>/Integrator' */
  _rtXdot->Integrator_CSTATE_h = rtB.Product1_f;

  /* Derivatives for Integrator: '<S8>/Integrator' */
  _rtXdot->Integrator_CSTATE_e = rtB.Product1_a;
}

/* Projection for root system: '<Root>' */
void MdlProjection(void)
{
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 4);          /* Number of continuous states */
  ssSetNumPeriodicContStates(rtS, 0); /* Number of periodic continuous states */
  ssSetNumY(rtS, 0);                   /* Number of model outputs */
  ssSetNumU(rtS, 0);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 0);      /* The model is not direct feedthrough */
  ssSetNumSampleTimes(rtS, 2);         /* Number of sample times */
  ssSetNumBlocks(rtS, 59);             /* Number of blocks */
  ssSetNumBlockIO(rtS, 63);            /* Number of block outputs */
  ssSetNumBlockParams(rtS, 512);       /* Sum of parameter "widths" */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.0);
  ssSetSampleTime(rtS, 1, 0.02);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 0.0);
  ssSetOffsetTime(rtS, 1, 0.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * main(void)
{
  static struct _ssMdlInfo mdlInfo;
  static struct _ssBlkInfo2 blkInfo2;
  static struct _ssBlkInfoSLSize blkInfoSLSize;
  (void) memset((char_T *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char_T *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  (void) memset((char_T *)&blkInfo2, 0,
                sizeof(struct _ssBlkInfo2));
  (void) memset((char_T *)&blkInfoSLSize, 0,
                sizeof(struct _ssBlkInfoSLSize));
  ssSetBlkInfo2Ptr(rtS, &blkInfo2);
  ssSetBlkInfoSLSizePtr(rtS, &blkInfoSLSize);
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &rtB));
    (void) memset(((void *) &rtB), 0,
                  sizeof(B));
  }

  /* states (continuous)*/
  {
    real_T *x = (real_T *) &rtX;
    ssSetContStates(rtS, x);
    (void) memset((void *)x, 0,
                  sizeof(X));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &rtDW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 23;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "main");
  ssSetPath(rtS, "main");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 1.0);
  ssSetStepSize(rtS, 0.02);
  ssSetFixedStepSize(rtS, 0.02);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "tout");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  {
    static struct _ssStatesInfo2 statesInfo2;
    ssSetStatesInfo2(rtS, &statesInfo2);
  }

  {
    static ssPeriodicStatesInfo periodicStatesInfo;
    ssSetPeriodicStatesInfo(rtS, &periodicStatesInfo);
  }

  {
    static ssJacobianPerturbationBounds jacobianPerturbationBounds;
    ssSetJacobianPerturbationBounds(rtS, &jacobianPerturbationBounds);
  }

  ssSetChecksumVal(rtS, 0, 2763915399U);
  ssSetChecksumVal(rtS, 1, 212292232U);
  ssSetChecksumVal(rtS, 2, 4176857063U);
  ssSetChecksumVal(rtS, 3, 4011425084U);
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif
