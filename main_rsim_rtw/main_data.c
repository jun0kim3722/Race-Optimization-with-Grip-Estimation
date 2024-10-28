/*
 * main_data.c
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

/* Block parameters (default storage) */
P rtP = {
  /* Mask Parameter: CombinedSlipWheelCPI_ALPMAX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.523599,

  /* Mask Parameter: CombinedSlipWheelCPI_ALPMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.523599,

  /* Mask Parameter: CombinedSlipWheelCPI_ASPECT_RAT
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.388,

  /* Mask Parameter: CombinedSlipWheelCPI_BOTTOM_OFF
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.01,

  /* Mask Parameter: CombinedSlipWheelCPI_BOTTOM_STI
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  2.93478E+6,

  /* Mask Parameter: CombinedSlipWheelCPI_BREFF
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.67769,

  /* Mask Parameter: CombinedSlipWheelCPI_CAMMAX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.087266,

  /* Mask Parameter: CombinedSlipWheelCPI_CAMMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.087266,

  /* Mask Parameter: CombinedSlipWheelCPI_DREFF
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.105132,

  /* Mask Parameter: CombinedSlipWheelCPI_FNOMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  3112.0,

  /* Mask Parameter: CombinedSlipWheelCPI_FREFF
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0763774,

  /* Mask Parameter: CombinedSlipWheelCPI_FZMAX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  8000.0,

  /* Mask Parameter: CombinedSlipWheelCPI_FZMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  100.0,

  /* Mask Parameter: CombinedSlipWheelCPI_KPUMAX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.0,

  /* Mask Parameter: CombinedSlipWheelCPI_KPUMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.0,

  /* Mask Parameter: CombinedSlipWheelCPI_LATERAL_ST
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_LONGITUDIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_LONGVL
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  66.9666,

  /* Mask Parameter: CombinedSlipWheelCPI_NOMPRES
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  200573.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCFY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PCX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.66628,

  /* Mask Parameter: CombinedSlipWheelCPI_PCY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.5496,

  /* Mask Parameter: CombinedSlipWheelCPI_PDX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.72645,

  /* Mask Parameter: CombinedSlipWheelCPI_PDX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.278479,

  /* Mask Parameter: CombinedSlipWheelCPI_PDX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  6.54553,

  /* Mask Parameter: CombinedSlipWheelCPI_PDXP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDXP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDXP3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.70839,

  /* Mask Parameter: CombinedSlipWheelCPI_PDY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.354062,

  /* Mask Parameter: CombinedSlipWheelCPI_PDY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  3.35762,

  /* Mask Parameter: CombinedSlipWheelCPI_PDYP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDYP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDYP3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PDYP4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PECP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PECP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PEX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -5.04761E-6,

  /* Mask Parameter: CombinedSlipWheelCPI_PEX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.463966,

  /* Mask Parameter: CombinedSlipWheelCPI_PEX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0359398,

  /* Mask Parameter: CombinedSlipWheelCPI_PEX4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.38592,

  /* Mask Parameter: CombinedSlipWheelCPI_PEY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.98642,

  /* Mask Parameter: CombinedSlipWheelCPI_PEY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.62092,

  /* Mask Parameter: CombinedSlipWheelCPI_PEY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.408939,

  /* Mask Parameter: CombinedSlipWheelCPI_PEY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -4.08114,

  /* Mask Parameter: CombinedSlipWheelCPI_PEY5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  5.64917,

  /* Mask Parameter: CombinedSlipWheelCPI_PFZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.896152,

  /* Mask Parameter: CombinedSlipWheelCPI_PHX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00060979,

  /* Mask Parameter: CombinedSlipWheelCPI_PHX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.000659181,

  /* Mask Parameter: CombinedSlipWheelCPI_PHY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00234094,

  /* Mask Parameter: CombinedSlipWheelCPI_PHY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00326645,

  /* Mask Parameter: CombinedSlipWheelCPI_PHYP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PHYP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PHYP3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PHYP4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PKX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  64.6315,

  /* Mask Parameter: CombinedSlipWheelCPI_PKX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.95099,

  /* Mask Parameter: CombinedSlipWheelCPI_PKX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.015721,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -53.0946,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  2.23333,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.872111,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  2.10492,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.95099,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -2.40799,

  /* Mask Parameter: CombinedSlipWheelCPI_PKY7
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -2.70746,

  /* Mask Parameter: CombinedSlipWheelCPI_PKYP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PPMX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.192994,

  /* Mask Parameter: CombinedSlipWheelCPI_PPX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PPX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PPX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PPX4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PPY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.716732,

  /* Mask Parameter: CombinedSlipWheelCPI_PPY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.64013,

  /* Mask Parameter: CombinedSlipWheelCPI_PPY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0572745,

  /* Mask Parameter: CombinedSlipWheelCPI_PPY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.543181,

  /* Mask Parameter: CombinedSlipWheelCPI_PPY5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.996956,

  /* Mask Parameter: CombinedSlipWheelCPI_PPZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.09916,

  /* Mask Parameter: CombinedSlipWheelCPI_PPZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.41332,

  /* Mask Parameter: CombinedSlipWheelCPI_PRESMAX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  214409.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PRESMIN
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  172715.0,

  /* Mask Parameter: CombinedSlipWheelCPI_PVX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0560991,

  /* Mask Parameter: CombinedSlipWheelCPI_PVX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0646569,

  /* Mask Parameter: CombinedSlipWheelCPI_PVY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0625501,

  /* Mask Parameter: CombinedSlipWheelCPI_PVY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0628882,

  /* Mask Parameter: CombinedSlipWheelCPI_PVY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.50157,

  /* Mask Parameter: CombinedSlipWheelCPI_PVY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.80795,

  /* Mask Parameter: CombinedSlipWheelCPI_QBRP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  9.58435,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ10
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0106191,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.320338,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.117051,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.88053,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.52129,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QBZ9
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QCRP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QCRP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QCZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.24211,

  /* Mask Parameter: CombinedSlipWheelCPI_QDRP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QDRP2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QDTP1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.109243,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ10
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  5.75951,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ11
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.59703,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00324279,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.956087,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -18.9248,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.00999806,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ7
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0136136,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ8
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.5519,

  /* Mask Parameter: CombinedSlipWheelCPI_QDZ9
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.392793,

  /* Mask Parameter: CombinedSlipWheelCPI_QEZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -6.82198,

  /* Mask Parameter: CombinedSlipWheelCPI_QEZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.891157,

  /* Mask Parameter: CombinedSlipWheelCPI_QEZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.23965,

  /* Mask Parameter: CombinedSlipWheelCPI_QEZ4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.621374,

  /* Mask Parameter: CombinedSlipWheelCPI_QEZ5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -3.45744,

  /* Mask Parameter: CombinedSlipWheelCPI_QHZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0088485,

  /* Mask Parameter: CombinedSlipWheelCPI_QHZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00259685,

  /* Mask Parameter: CombinedSlipWheelCPI_QHZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0518341,

  /* Mask Parameter: CombinedSlipWheelCPI_QHZ4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0782043,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.00469662,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX10
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -2.94964,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX11
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  13.9701,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX12
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX13
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX14
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -5.13093,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.117227,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.764013,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.569854,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -3.0208,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX7
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -4.74982,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX8
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -5.9049,

  /* Mask Parameter: CombinedSlipWheelCPI_QSX9
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0425242,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0291029,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0106797,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00150037,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY7
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.293107,

  /* Mask Parameter: CombinedSlipWheelCPI_QSY8
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.27727,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FCX
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.147144,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FCY
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.171698,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FCY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  28.1283,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  2.78052,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_RA1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.602,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_RA2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.024,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_RB1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.1137,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_RB2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.09748,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_RE0
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.994334,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_V1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00542853,

  /* Mask Parameter: CombinedSlipWheelCPI_Q_V2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0867414,

  /* Mask Parameter: CombinedSlipWheelCPI_RBX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  23.0974,

  /* Mask Parameter: CombinedSlipWheelCPI_RBX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -22.9129,

  /* Mask Parameter: CombinedSlipWheelCPI_RBX3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.5445,

  /* Mask Parameter: CombinedSlipWheelCPI_RBY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  29.6888,

  /* Mask Parameter: CombinedSlipWheelCPI_RBY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  17.9759,

  /* Mask Parameter: CombinedSlipWheelCPI_RBY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.00317577,

  /* Mask Parameter: CombinedSlipWheelCPI_RBY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.229929,

  /* Mask Parameter: CombinedSlipWheelCPI_RCX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.05471,

  /* Mask Parameter: CombinedSlipWheelCPI_RCY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.993821,

  /* Mask Parameter: CombinedSlipWheelCPI_REX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  3.97084E-8,

  /* Mask Parameter: CombinedSlipWheelCPI_REX2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  5.73425E-9,

  /* Mask Parameter: CombinedSlipWheelCPI_REY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.00271301,

  /* Mask Parameter: CombinedSlipWheelCPI_REY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0831273,

  /* Mask Parameter: CombinedSlipWheelCPI_RHX1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00655663,

  /* Mask Parameter: CombinedSlipWheelCPI_RHY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00988171,

  /* Mask Parameter: CombinedSlipWheelCPI_RHY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.00695088,

  /* Mask Parameter: CombinedSlipWheelCPI_RIM_RADIUS
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.1905,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.042693,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0364021,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.284909,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  20.1816,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY5
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -2.79814,

  /* Mask Parameter: CombinedSlipWheelCPI_RVY6
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -20.8171,

  /* Mask Parameter: CombinedSlipWheelCPI_SSZ1
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -0.0916292,

  /* Mask Parameter: CombinedSlipWheelCPI_SSZ2
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.0115969,

  /* Mask Parameter: CombinedSlipWheelCPI_SSZ3
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.69749,

  /* Mask Parameter: CombinedSlipWheelCPI_SSZ4
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  -1.7076,

  /* Mask Parameter: CombinedSlipWheelCPI_UNLOADED_R
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.3004,

  /* Mask Parameter: CombinedSlipWheelCPI_VERTICAL_S
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  293478.0,

  /* Mask Parameter: CombinedSlipWheelCPI_VXLOW
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.0,

  /* Mask Parameter: CombinedSlipWheelCPI_WIDTH
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  0.283464,

  /* Mask Parameter: CombinedSlipWheelCPI_turnslip
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  1.0,

  /* Expression: vdynMF
   * Referenced by: '<S3>/Magic Tire Const Input'
   */
  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S4>/Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/Integrator'
   */
  0.0,

  /* Expression: FlipTire
   * Referenced by: '<S2>/Flip Tire1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Expression: FlipTire
   * Referenced by: '<S1>/Flip Tire'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant3'
   */
  1.0,

  /* Expression: FlipTire
   * Referenced by: '<S1>/Flip Tire1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant7'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/RadialDeflctConstant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Gain'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/vertType'
   */
  1.0,

  /* Expression: FlipTire
   * Referenced by: '<S2>/Flip Tire2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S7>/Integrator'
   */
  0.0,

  /* Expression: FlipTire
   * Referenced by: '<S2>/Flip Tire3'
   */
  1.0,

  /* Expression: inf
   * Referenced by: '<S4>/Saturation1'
   */
  INFINITY,

  /* Expression: 1e-2
   * Referenced by: '<S4>/Saturation1'
   */
  0.01,

  /* Expression: inf
   * Referenced by: '<S4>/Saturation'
   */
  INFINITY,

  /* Expression: FxRelFreqLwrLim
   * Referenced by: '<S4>/Saturation'
   */
  314.15926535897933,

  /* Expression: inf
   * Referenced by: '<S5>/Saturation1'
   */
  INFINITY,

  /* Expression: 1e-2
   * Referenced by: '<S5>/Saturation1'
   */
  0.01,

  /* Expression: inf
   * Referenced by: '<S5>/Saturation'
   */
  INFINITY,

  /* Expression: FyRelFreqLwrLim
   * Referenced by: '<S5>/Saturation'
   */
  628.31853071795865,

  /* Expression: inf
   * Referenced by: '<S7>/Saturation1'
   */
  INFINITY,

  /* Expression: 1e-2
   * Referenced by: '<S7>/Saturation1'
   */
  0.01,

  /* Expression: inf
   * Referenced by: '<S7>/Saturation'
   */
  INFINITY,

  /* Expression: MyRelFreqLwrLim
   * Referenced by: '<S7>/Saturation'
   */
  628.31853071795865,

  /* Expression: 0
   * Referenced by: '<S8>/Integrator'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S8>/Saturation1'
   */
  INFINITY,

  /* Expression: 1e-2
   * Referenced by: '<S8>/Saturation1'
   */
  0.01,

  /* Expression: inf
   * Referenced by: '<S8>/Saturation'
   */
  INFINITY,

  /* Expression: MyRelFreqLwrLim
   * Referenced by: '<S8>/Saturation'
   */
  628.31853071795865
};
