/*
 * main.h
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

#ifndef main_h_
#define main_h_
#ifndef main_COMMON_INCLUDES_
#define main_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#endif                                 /* main_COMMON_INCLUDES_ */

#include "main_types.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include <stddef.h>
#include <string.h>
#define MODEL_NAME                     main
#define NSAMPLE_TIMES                  (2)                       /* Number of sample times */
#define NINPUTS                        (0)                       /* Number of model inputs */
#define NOUTPUTS                       (0)                       /* Number of model outputs */
#define NBLOCKIO                       (63)                      /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (4)                       /* Number of continuous states */
#elif NCSTATES != 4
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (NULL)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Integrator;                   /* '<S4>/Integrator' */
  real_T Integrator_f;                 /* '<S5>/Integrator' */
  real_T FlipTire1;                    /* '<S2>/Flip Tire1' */
  real_T FlipTire;                     /* '<S1>/Flip Tire' */
  real_T FlipTire1_n;                  /* '<S1>/Flip Tire1' */
  real_T Gain;                         /* '<S3>/Gain' */
  real_T Sum2;                         /* '<S3>/Sum2' */
  real_T Sum1;                         /* '<S3>/Sum1' */
  real_T FlipTire2;                    /* '<S2>/Flip Tire2' */
  real_T Integrator_e;                 /* '<S7>/Integrator' */
  real_T FlipTire3;                    /* '<S2>/Flip Tire3' */
  real_T Product;                      /* '<S3>/Product' */
  real_T Add;                          /* '<S3>/Add' */
  real_T Product2;                     /* '<S4>/Product2' */
  real_T Add1;                         /* '<S4>/Add1' */
  real_T Abs;                          /* '<S4>/Abs' */
  real_T Add_a;                        /* '<S4>/Add' */
  real_T Saturation1;                  /* '<S4>/Saturation1' */
  real_T Product3;                     /* '<S4>/Product3' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T Product1;                     /* '<S4>/Product1' */
  real_T Product2_p;                   /* '<S5>/Product2' */
  real_T Add1_e;                       /* '<S5>/Add1' */
  real_T Abs_c;                        /* '<S5>/Abs' */
  real_T Add_i;                        /* '<S5>/Add' */
  real_T Saturation1_l;                /* '<S5>/Saturation1' */
  real_T Product3_e;                   /* '<S5>/Product3' */
  real_T Saturation_f;                 /* '<S5>/Saturation' */
  real_T Product1_l;                   /* '<S5>/Product1' */
  real_T Product2_pg;                  /* '<S7>/Product2' */
  real_T Add1_k;                       /* '<S7>/Add1' */
  real_T Abs_f;                        /* '<S7>/Abs' */
  real_T Add_f;                        /* '<S7>/Add' */
  real_T Saturation1_lc;               /* '<S7>/Saturation1' */
  real_T Product3_c;                   /* '<S7>/Product3' */
  real_T Saturation_d;                 /* '<S7>/Saturation' */
  real_T Product1_f;                   /* '<S7>/Product1' */
  real_T Product2_n;                   /* '<S8>/Product2' */
  real_T Add1_ke;                      /* '<S8>/Add1' */
  real_T Abs_k;                        /* '<S8>/Abs' */
  real_T Integrator_k;                 /* '<S8>/Integrator' */
  real_T Add_k;                        /* '<S8>/Add' */
  real_T Saturation1_i;                /* '<S8>/Saturation1' */
  real_T Product3_p;                   /* '<S8>/Product3' */
  real_T Saturation_fn;                /* '<S8>/Saturation' */
  real_T Product1_a;                   /* '<S8>/Product1' */
  real_T TmpSignalConversionAtSFunctionI[27];/* '<S3>/Magic Tire Const Input' */
  real_T Fx;                           /* '<S3>/Magic Tire Const Input' */
  real_T Fy;                           /* '<S3>/Magic Tire Const Input' */
  real_T FzTire;                       /* '<S3>/Magic Tire Const Input' */
  real_T Mx;                           /* '<S3>/Magic Tire Const Input' */
  real_T My;                           /* '<S3>/Magic Tire Const Input' */
  real_T Mz;                           /* '<S3>/Magic Tire Const Input' */
  real_T Re;                           /* '<S3>/Magic Tire Const Input' */
  real_T Kappa;                        /* '<S3>/Magic Tire Const Input' */
  real_T Alpha;                        /* '<S3>/Magic Tire Const Input' */
  real_T sig_x;                        /* '<S3>/Magic Tire Const Input' */
  real_T sig_y;                        /* '<S3>/Magic Tire Const Input' */
  real_T a;                            /* '<S3>/Magic Tire Const Input' */
  real_T b;                            /* '<S3>/Magic Tire Const Input' */
  real_T RL;                           /* '<S3>/Magic Tire Const Input' */
  real_T RadialDeflct;                 /* '<S3>/Magic Tire Const Input' */
  real_T Tw;                           /* '<S3>/Magic Tire Const Input' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[6];
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S4>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S7>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S8>/Integrator' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S4>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S7>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S8>/Integrator' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S4>/Integrator' */
  boolean_T Integrator_CSTATE_a;       /* '<S5>/Integrator' */
  boolean_T Integrator_CSTATE_h;       /* '<S7>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S8>/Integrator' */
} XDis;

/* Parameters (default storage) */
struct P_ {
  real_T CombinedSlipWheelCPI_ALPMAX;
                                  /* Mask Parameter: CombinedSlipWheelCPI_ALPMAX
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_ALPMIN;
                                  /* Mask Parameter: CombinedSlipWheelCPI_ALPMIN
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_ASPECT_RAT;
                              /* Mask Parameter: CombinedSlipWheelCPI_ASPECT_RAT
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_BOTTOM_OFF;
                              /* Mask Parameter: CombinedSlipWheelCPI_BOTTOM_OFF
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_BOTTOM_STI;
                              /* Mask Parameter: CombinedSlipWheelCPI_BOTTOM_STI
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_BREFF;
                                   /* Mask Parameter: CombinedSlipWheelCPI_BREFF
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_CAMMAX;
                                  /* Mask Parameter: CombinedSlipWheelCPI_CAMMAX
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_CAMMIN;
                                  /* Mask Parameter: CombinedSlipWheelCPI_CAMMIN
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_DREFF;
                                   /* Mask Parameter: CombinedSlipWheelCPI_DREFF
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_FNOMIN;
                                  /* Mask Parameter: CombinedSlipWheelCPI_FNOMIN
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_FREFF;
                                   /* Mask Parameter: CombinedSlipWheelCPI_FREFF
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_FZMAX;
                                   /* Mask Parameter: CombinedSlipWheelCPI_FZMAX
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_FZMIN;
                                   /* Mask Parameter: CombinedSlipWheelCPI_FZMIN
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_KPUMAX;
                                  /* Mask Parameter: CombinedSlipWheelCPI_KPUMAX
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_KPUMIN;
                                  /* Mask Parameter: CombinedSlipWheelCPI_KPUMIN
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_LATERAL_ST;
                              /* Mask Parameter: CombinedSlipWheelCPI_LATERAL_ST
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_LONGITUDIN;
                              /* Mask Parameter: CombinedSlipWheelCPI_LONGITUDIN
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_LONGVL;
                                  /* Mask Parameter: CombinedSlipWheelCPI_LONGVL
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_NOMPRES;
                                 /* Mask Parameter: CombinedSlipWheelCPI_NOMPRES
                                  * Referenced by: '<S3>/Magic Tire Const Input'
                                  */
  real_T CombinedSlipWheelCPI_PCFX1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFX1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCFX2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFX2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCFX3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFX3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCFY1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFY1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCFY2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFY2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCFY3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PCFY3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PCX1; /* Mask Parameter: CombinedSlipWheelCPI_PCX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PCY1; /* Mask Parameter: CombinedSlipWheelCPI_PCY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDX1; /* Mask Parameter: CombinedSlipWheelCPI_PDX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDX2; /* Mask Parameter: CombinedSlipWheelCPI_PDX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDX3; /* Mask Parameter: CombinedSlipWheelCPI_PDX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDXP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDXP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDXP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDXP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDXP3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDXP3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDY1; /* Mask Parameter: CombinedSlipWheelCPI_PDY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDY2; /* Mask Parameter: CombinedSlipWheelCPI_PDY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDY3; /* Mask Parameter: CombinedSlipWheelCPI_PDY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PDYP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDYP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDYP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDYP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDYP3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDYP3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PDYP4;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PDYP4
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PECP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PECP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PECP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PECP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PEX1; /* Mask Parameter: CombinedSlipWheelCPI_PEX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEX2; /* Mask Parameter: CombinedSlipWheelCPI_PEX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEX3; /* Mask Parameter: CombinedSlipWheelCPI_PEX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEX4; /* Mask Parameter: CombinedSlipWheelCPI_PEX4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEY1; /* Mask Parameter: CombinedSlipWheelCPI_PEY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEY2; /* Mask Parameter: CombinedSlipWheelCPI_PEY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEY3; /* Mask Parameter: CombinedSlipWheelCPI_PEY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEY4; /* Mask Parameter: CombinedSlipWheelCPI_PEY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PEY5; /* Mask Parameter: CombinedSlipWheelCPI_PEY5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PFZ1; /* Mask Parameter: CombinedSlipWheelCPI_PFZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PHX1; /* Mask Parameter: CombinedSlipWheelCPI_PHX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PHX2; /* Mask Parameter: CombinedSlipWheelCPI_PHX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PHY1; /* Mask Parameter: CombinedSlipWheelCPI_PHY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PHY2; /* Mask Parameter: CombinedSlipWheelCPI_PHY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PHYP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PHYP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PHYP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PHYP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PHYP3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PHYP3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PHYP4;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PHYP4
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PKX1; /* Mask Parameter: CombinedSlipWheelCPI_PKX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKX2; /* Mask Parameter: CombinedSlipWheelCPI_PKX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKX3; /* Mask Parameter: CombinedSlipWheelCPI_PKX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY1; /* Mask Parameter: CombinedSlipWheelCPI_PKY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY2; /* Mask Parameter: CombinedSlipWheelCPI_PKY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY3; /* Mask Parameter: CombinedSlipWheelCPI_PKY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY4; /* Mask Parameter: CombinedSlipWheelCPI_PKY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY5; /* Mask Parameter: CombinedSlipWheelCPI_PKY5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY6; /* Mask Parameter: CombinedSlipWheelCPI_PKY6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKY7; /* Mask Parameter: CombinedSlipWheelCPI_PKY7
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PKYP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PKYP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PPMX1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_PPMX1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_PPX1; /* Mask Parameter: CombinedSlipWheelCPI_PPX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPX2; /* Mask Parameter: CombinedSlipWheelCPI_PPX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPX3; /* Mask Parameter: CombinedSlipWheelCPI_PPX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPX4; /* Mask Parameter: CombinedSlipWheelCPI_PPX4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPY1; /* Mask Parameter: CombinedSlipWheelCPI_PPY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPY2; /* Mask Parameter: CombinedSlipWheelCPI_PPY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPY3; /* Mask Parameter: CombinedSlipWheelCPI_PPY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPY4; /* Mask Parameter: CombinedSlipWheelCPI_PPY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPY5; /* Mask Parameter: CombinedSlipWheelCPI_PPY5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPZ1; /* Mask Parameter: CombinedSlipWheelCPI_PPZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PPZ2; /* Mask Parameter: CombinedSlipWheelCPI_PPZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PRESMAX;
                                 /* Mask Parameter: CombinedSlipWheelCPI_PRESMAX
                                  * Referenced by: '<S3>/Magic Tire Const Input'
                                  */
  real_T CombinedSlipWheelCPI_PRESMIN;
                                 /* Mask Parameter: CombinedSlipWheelCPI_PRESMIN
                                  * Referenced by: '<S3>/Magic Tire Const Input'
                                  */
  real_T CombinedSlipWheelCPI_PVX1; /* Mask Parameter: CombinedSlipWheelCPI_PVX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PVX2; /* Mask Parameter: CombinedSlipWheelCPI_PVX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PVY1; /* Mask Parameter: CombinedSlipWheelCPI_PVY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PVY2; /* Mask Parameter: CombinedSlipWheelCPI_PVY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PVY3; /* Mask Parameter: CombinedSlipWheelCPI_PVY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_PVY4; /* Mask Parameter: CombinedSlipWheelCPI_PVY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBRP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QBRP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QBZ1; /* Mask Parameter: CombinedSlipWheelCPI_QBZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ10;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QBZ10
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QBZ2; /* Mask Parameter: CombinedSlipWheelCPI_QBZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ3; /* Mask Parameter: CombinedSlipWheelCPI_QBZ3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ4; /* Mask Parameter: CombinedSlipWheelCPI_QBZ4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ5; /* Mask Parameter: CombinedSlipWheelCPI_QBZ5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ6; /* Mask Parameter: CombinedSlipWheelCPI_QBZ6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QBZ9; /* Mask Parameter: CombinedSlipWheelCPI_QBZ9
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QCRP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QCRP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QCRP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QCRP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QCZ1; /* Mask Parameter: CombinedSlipWheelCPI_QCZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDRP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QDRP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QDRP2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QDRP2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QDTP1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QDTP1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QDZ1; /* Mask Parameter: CombinedSlipWheelCPI_QDZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ10;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QDZ10
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QDZ11;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QDZ11
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QDZ2; /* Mask Parameter: CombinedSlipWheelCPI_QDZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ3; /* Mask Parameter: CombinedSlipWheelCPI_QDZ3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ4; /* Mask Parameter: CombinedSlipWheelCPI_QDZ4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ6; /* Mask Parameter: CombinedSlipWheelCPI_QDZ6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ7; /* Mask Parameter: CombinedSlipWheelCPI_QDZ7
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ8; /* Mask Parameter: CombinedSlipWheelCPI_QDZ8
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QDZ9; /* Mask Parameter: CombinedSlipWheelCPI_QDZ9
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QEZ1; /* Mask Parameter: CombinedSlipWheelCPI_QEZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QEZ2; /* Mask Parameter: CombinedSlipWheelCPI_QEZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QEZ3; /* Mask Parameter: CombinedSlipWheelCPI_QEZ3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QEZ4; /* Mask Parameter: CombinedSlipWheelCPI_QEZ4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QEZ5; /* Mask Parameter: CombinedSlipWheelCPI_QEZ5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QHZ1; /* Mask Parameter: CombinedSlipWheelCPI_QHZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QHZ2; /* Mask Parameter: CombinedSlipWheelCPI_QHZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QHZ3; /* Mask Parameter: CombinedSlipWheelCPI_QHZ3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QHZ4; /* Mask Parameter: CombinedSlipWheelCPI_QHZ4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX1; /* Mask Parameter: CombinedSlipWheelCPI_QSX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX10;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QSX10
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QSX11;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QSX11
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QSX12;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QSX12
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QSX13;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QSX13
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QSX14;
                                   /* Mask Parameter: CombinedSlipWheelCPI_QSX14
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_QSX2; /* Mask Parameter: CombinedSlipWheelCPI_QSX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX3; /* Mask Parameter: CombinedSlipWheelCPI_QSX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX4; /* Mask Parameter: CombinedSlipWheelCPI_QSX4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX5; /* Mask Parameter: CombinedSlipWheelCPI_QSX5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX6; /* Mask Parameter: CombinedSlipWheelCPI_QSX6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX7; /* Mask Parameter: CombinedSlipWheelCPI_QSX7
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX8; /* Mask Parameter: CombinedSlipWheelCPI_QSX8
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSX9; /* Mask Parameter: CombinedSlipWheelCPI_QSX9
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY1; /* Mask Parameter: CombinedSlipWheelCPI_QSY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY2; /* Mask Parameter: CombinedSlipWheelCPI_QSY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY3; /* Mask Parameter: CombinedSlipWheelCPI_QSY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY4; /* Mask Parameter: CombinedSlipWheelCPI_QSY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY5; /* Mask Parameter: CombinedSlipWheelCPI_QSY5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY6; /* Mask Parameter: CombinedSlipWheelCPI_QSY6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY7; /* Mask Parameter: CombinedSlipWheelCPI_QSY7
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_QSY8; /* Mask Parameter: CombinedSlipWheelCPI_QSY8
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_Q_CAM1;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM1
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_CAM2;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM2
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_CAM3;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_CAM3
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_FCX;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_FCX
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_FCY;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_FCY
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_FCY2;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_FCY2
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_FYS1;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS1
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_FYS2;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS2
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_FYS3;
                                  /* Mask Parameter: CombinedSlipWheelCPI_Q_FYS3
                                   * Referenced by: '<S3>/Magic Tire Const Input'
                                   */
  real_T CombinedSlipWheelCPI_Q_FZ1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_FZ2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_FZ3;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_FZ3
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_RA1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_RA1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_RA2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_RA2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_RB1;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_RB1
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_RB2;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_RB2
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_RE0;
                                   /* Mask Parameter: CombinedSlipWheelCPI_Q_RE0
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_Q_V1; /* Mask Parameter: CombinedSlipWheelCPI_Q_V1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_Q_V2; /* Mask Parameter: CombinedSlipWheelCPI_Q_V2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBX1; /* Mask Parameter: CombinedSlipWheelCPI_RBX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBX2; /* Mask Parameter: CombinedSlipWheelCPI_RBX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBX3; /* Mask Parameter: CombinedSlipWheelCPI_RBX3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBY1; /* Mask Parameter: CombinedSlipWheelCPI_RBY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBY2; /* Mask Parameter: CombinedSlipWheelCPI_RBY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBY3; /* Mask Parameter: CombinedSlipWheelCPI_RBY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RBY4; /* Mask Parameter: CombinedSlipWheelCPI_RBY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RCX1; /* Mask Parameter: CombinedSlipWheelCPI_RCX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RCY1; /* Mask Parameter: CombinedSlipWheelCPI_RCY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_REX1; /* Mask Parameter: CombinedSlipWheelCPI_REX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_REX2; /* Mask Parameter: CombinedSlipWheelCPI_REX2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_REY1; /* Mask Parameter: CombinedSlipWheelCPI_REY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_REY2; /* Mask Parameter: CombinedSlipWheelCPI_REY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RHX1; /* Mask Parameter: CombinedSlipWheelCPI_RHX1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RHY1; /* Mask Parameter: CombinedSlipWheelCPI_RHY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RHY2; /* Mask Parameter: CombinedSlipWheelCPI_RHY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RIM_RADIUS;
                              /* Mask Parameter: CombinedSlipWheelCPI_RIM_RADIUS
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_RVY1; /* Mask Parameter: CombinedSlipWheelCPI_RVY1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RVY2; /* Mask Parameter: CombinedSlipWheelCPI_RVY2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RVY3; /* Mask Parameter: CombinedSlipWheelCPI_RVY3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RVY4; /* Mask Parameter: CombinedSlipWheelCPI_RVY4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RVY5; /* Mask Parameter: CombinedSlipWheelCPI_RVY5
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_RVY6; /* Mask Parameter: CombinedSlipWheelCPI_RVY6
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_SSZ1; /* Mask Parameter: CombinedSlipWheelCPI_SSZ1
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_SSZ2; /* Mask Parameter: CombinedSlipWheelCPI_SSZ2
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_SSZ3; /* Mask Parameter: CombinedSlipWheelCPI_SSZ3
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_SSZ4; /* Mask Parameter: CombinedSlipWheelCPI_SSZ4
                                     * Referenced by: '<S3>/Magic Tire Const Input'
                                     */
  real_T CombinedSlipWheelCPI_UNLOADED_R;
                              /* Mask Parameter: CombinedSlipWheelCPI_UNLOADED_R
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_VERTICAL_S;
                              /* Mask Parameter: CombinedSlipWheelCPI_VERTICAL_S
                               * Referenced by: '<S3>/Magic Tire Const Input'
                               */
  real_T CombinedSlipWheelCPI_VXLOW;
                                   /* Mask Parameter: CombinedSlipWheelCPI_VXLOW
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_WIDTH;
                                   /* Mask Parameter: CombinedSlipWheelCPI_WIDTH
                                    * Referenced by: '<S3>/Magic Tire Const Input'
                                    */
  real_T CombinedSlipWheelCPI_turnslip;
                                /* Mask Parameter: CombinedSlipWheelCPI_turnslip
                                 * Referenced by: '<S3>/Magic Tire Const Input'
                                 */
  real_T MagicTireConstInput_vdynMF[279];/* Expression: vdynMF
                                          * Referenced by: '<S3>/Magic Tire Const Input'
                                          */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Integrator_IC_e;              /* Expression: 0
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real_T FlipTire1_Gain;               /* Expression: FlipTire
                                        * Referenced by: '<S2>/Flip Tire1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T FlipTire_Gain;                /* Expression: FlipTire
                                        * Referenced by: '<S1>/Flip Tire'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T FlipTire1_Gain_g;             /* Expression: FlipTire
                                        * Referenced by: '<S1>/Flip Tire1'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T RadialDeflctConstant_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/RadialDeflctConstant'
                                        */
  real_T Gain_Gain;                    /* Expression: 0
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T vertType_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/vertType'
                                        */
  real_T FlipTire2_Gain;               /* Expression: FlipTire
                                        * Referenced by: '<S2>/Flip Tire2'
                                        */
  real_T Integrator_IC_j;              /* Expression: 0
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T FlipTire3_Gain;               /* Expression: FlipTire
                                        * Referenced by: '<S2>/Flip Tire3'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-2
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: FxRelFreqLwrLim
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation1_UpperSat_d;       /* Expression: inf
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: 1e-2
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: inf
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: FyRelFreqLwrLim
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation1_UpperSat_n;       /* Expression: inf
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_c;       /* Expression: 1e-2
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: inf
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: MyRelFreqLwrLim
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Integrator_IC_i;              /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Saturation1_UpperSat_b;       /* Expression: inf
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_h;       /* Expression: 1e-2
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T Saturation_UpperSat_fp;       /* Expression: inf
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: MyRelFreqLwrLim
                                        * Referenced by: '<S8>/Saturation'
                                        */
};

/* External data declarations for dependent source files */
extern const char_T *RT_MEMORY_ALLOCATION_ERROR;
extern B rtB;                          /* block i/o */
extern X rtX;                          /* states (continuous) */
extern DW rtDW;                        /* states (dwork) */
extern P rtP;                          /* parameters */

/* Simulation Structure */
extern SimStruct *const rtS;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Flip Tire4' : Unused code path elimination
 * Block '<S2>/Flip Tire5' : Unused code path elimination
 * Block '<S3>/Selector' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'main'
 * '<S1>'   : 'main/Combined Slip Wheel CPI'
 * '<S2>'   : 'main/Combined Slip Wheel CPI/Bus Routing'
 * '<S3>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input'
 * '<S4>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input/Fx Relaxation'
 * '<S5>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input/Fy Relaxation'
 * '<S6>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input/Magic Tire Const Input'
 * '<S7>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input/My Relaxation'
 * '<S8>'   : 'main/Combined Slip Wheel CPI/Magic Tire Const Input/WhlTrq Relaxation'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];

#endif                                 /* main_h_ */
