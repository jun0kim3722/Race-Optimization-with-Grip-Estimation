#ifndef main_h_
#define main_h_
#ifndef main_COMMON_INCLUDES_
#define main_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "main_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME main
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (59) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T pmsgupxeao ; real_T dg3e4glfn1 ; real_T moakupxd3g ;
real_T dc10vzvgxk ; real_T ggb2wj4p2g ; real_T lkopyt5hsa ; real_T hp1kqiubgx
; real_T a5t2q5w4qb ; real_T keh4hqie4e ; real_T ebjy3ubzay ; real_T
erw2ex2dci ; real_T pt2i2sooj2 ; real_T iyj00passi ; real_T jqfi04byui ;
real_T dhjqklarox ; real_T h45gmatraq ; real_T g43ze1c4kq ; real_T acuoelfdda
; real_T bs04ocp54x ; real_T ehsb1ikio1 ; real_T eukbzzmml2 ; real_T
ljxbaxo4ui ; real_T gtz1piax3t ; real_T myns4ewh33 ; real_T e2f2jyx1iq ;
real_T nb4pnlesz0 ; real_T g0lm5aewbs ; real_T lxcqs53lnh ; real_T p2tek5gbte
; real_T pvyvvwnh2t ; real_T f3av5jigci ; real_T helmsjjtkb ; real_T
ezcf32gbvv ; real_T pkdta41diq ; real_T cbfwc2zwk2 ; real_T awdldfctfa ;
real_T mctrmvofkv ; real_T ipn2xtyrft ; real_T mz35prd1jy ; real_T foxgyrs4t1
; real_T p1hfmdg1uu ; real_T pc4j0qnvdl ; real_T fkx14q5fmo [ 27 ] ; } B ;
typedef struct { int32_T k1x30cewok ; boolean_T f4hze23efo ; } DW ; typedef
struct { real_T esxiofdzsv ; real_T iep4org01f ; real_T nxfxaaipd0 ; real_T
obveouyweb ; } X ; typedef struct { real_T esxiofdzsv ; real_T iep4org01f ;
real_T nxfxaaipd0 ; real_T obveouyweb ; } XDot ; typedef struct { boolean_T
esxiofdzsv ; boolean_T iep4org01f ; boolean_T nxfxaaipd0 ; boolean_T
obveouyweb ; } XDis ; typedef struct { real_T esxiofdzsv ; real_T iep4org01f
; real_T nxfxaaipd0 ; real_T obveouyweb ; } CStateAbsTol ; typedef struct {
real_T esxiofdzsv ; real_T iep4org01f ; real_T nxfxaaipd0 ; real_T obveouyweb
; } CXPtMin ; typedef struct { real_T esxiofdzsv ; real_T iep4org01f ; real_T
nxfxaaipd0 ; real_T obveouyweb ; } CXPtMax ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
CombinedSlipWheelCPI_ALPMAX ; real_T CombinedSlipWheelCPI_ALPMIN ; real_T
CombinedSlipWheelCPI_ASPECT_RATIO ; real_T CombinedSlipWheelCPI_BOTTOM_OFFST
; real_T CombinedSlipWheelCPI_BOTTOM_STIFF ; real_T
CombinedSlipWheelCPI_BREFF ; real_T CombinedSlipWheelCPI_CAMMAX ; real_T
CombinedSlipWheelCPI_CAMMIN ; real_T CombinedSlipWheelCPI_DREFF ; real_T
CombinedSlipWheelCPI_FNOMIN ; real_T CombinedSlipWheelCPI_FREFF ; real_T
CombinedSlipWheelCPI_FZMAX ; real_T CombinedSlipWheelCPI_FZMIN ; real_T
CombinedSlipWheelCPI_KPUMAX ; real_T CombinedSlipWheelCPI_KPUMIN ; real_T
CombinedSlipWheelCPI_LATERAL_STIFFNESS ; real_T
CombinedSlipWheelCPI_LONGITUDINAL_STIFFNESS ; real_T
CombinedSlipWheelCPI_LONGVL ; real_T CombinedSlipWheelCPI_NOMPRES ; real_T
CombinedSlipWheelCPI_PCFX1 ; real_T CombinedSlipWheelCPI_PCFX2 ; real_T
CombinedSlipWheelCPI_PCFX3 ; real_T CombinedSlipWheelCPI_PCFY1 ; real_T
CombinedSlipWheelCPI_PCFY2 ; real_T CombinedSlipWheelCPI_PCFY3 ; real_T
CombinedSlipWheelCPI_PCX1 ; real_T CombinedSlipWheelCPI_PCY1 ; real_T
CombinedSlipWheelCPI_PDX1 ; real_T CombinedSlipWheelCPI_PDX2 ; real_T
CombinedSlipWheelCPI_PDX3 ; real_T CombinedSlipWheelCPI_PDXP1 ; real_T
CombinedSlipWheelCPI_PDXP2 ; real_T CombinedSlipWheelCPI_PDXP3 ; real_T
CombinedSlipWheelCPI_PDY1 ; real_T CombinedSlipWheelCPI_PDY2 ; real_T
CombinedSlipWheelCPI_PDY3 ; real_T CombinedSlipWheelCPI_PDYP1 ; real_T
CombinedSlipWheelCPI_PDYP2 ; real_T CombinedSlipWheelCPI_PDYP3 ; real_T
CombinedSlipWheelCPI_PDYP4 ; real_T CombinedSlipWheelCPI_PECP1 ; real_T
CombinedSlipWheelCPI_PECP2 ; real_T CombinedSlipWheelCPI_PEX1 ; real_T
CombinedSlipWheelCPI_PEX2 ; real_T CombinedSlipWheelCPI_PEX3 ; real_T
CombinedSlipWheelCPI_PEX4 ; real_T CombinedSlipWheelCPI_PEY1 ; real_T
CombinedSlipWheelCPI_PEY2 ; real_T CombinedSlipWheelCPI_PEY3 ; real_T
CombinedSlipWheelCPI_PEY4 ; real_T CombinedSlipWheelCPI_PEY5 ; real_T
CombinedSlipWheelCPI_PFZ1 ; real_T CombinedSlipWheelCPI_PHX1 ; real_T
CombinedSlipWheelCPI_PHX2 ; real_T CombinedSlipWheelCPI_PHY1 ; real_T
CombinedSlipWheelCPI_PHY2 ; real_T CombinedSlipWheelCPI_PHYP1 ; real_T
CombinedSlipWheelCPI_PHYP2 ; real_T CombinedSlipWheelCPI_PHYP3 ; real_T
CombinedSlipWheelCPI_PHYP4 ; real_T CombinedSlipWheelCPI_PKX1 ; real_T
CombinedSlipWheelCPI_PKX2 ; real_T CombinedSlipWheelCPI_PKX3 ; real_T
CombinedSlipWheelCPI_PKY1 ; real_T CombinedSlipWheelCPI_PKY2 ; real_T
CombinedSlipWheelCPI_PKY3 ; real_T CombinedSlipWheelCPI_PKY4 ; real_T
CombinedSlipWheelCPI_PKY5 ; real_T CombinedSlipWheelCPI_PKY6 ; real_T
CombinedSlipWheelCPI_PKY7 ; real_T CombinedSlipWheelCPI_PKYP1 ; real_T
CombinedSlipWheelCPI_PPMX1 ; real_T CombinedSlipWheelCPI_PPX1 ; real_T
CombinedSlipWheelCPI_PPX2 ; real_T CombinedSlipWheelCPI_PPX3 ; real_T
CombinedSlipWheelCPI_PPX4 ; real_T CombinedSlipWheelCPI_PPY1 ; real_T
CombinedSlipWheelCPI_PPY2 ; real_T CombinedSlipWheelCPI_PPY3 ; real_T
CombinedSlipWheelCPI_PPY4 ; real_T CombinedSlipWheelCPI_PPY5 ; real_T
CombinedSlipWheelCPI_PPZ1 ; real_T CombinedSlipWheelCPI_PPZ2 ; real_T
CombinedSlipWheelCPI_PRESMAX ; real_T CombinedSlipWheelCPI_PRESMIN ; real_T
CombinedSlipWheelCPI_PVX1 ; real_T CombinedSlipWheelCPI_PVX2 ; real_T
CombinedSlipWheelCPI_PVY1 ; real_T CombinedSlipWheelCPI_PVY2 ; real_T
CombinedSlipWheelCPI_PVY3 ; real_T CombinedSlipWheelCPI_PVY4 ; real_T
CombinedSlipWheelCPI_QBRP1 ; real_T CombinedSlipWheelCPI_QBZ1 ; real_T
CombinedSlipWheelCPI_QBZ10 ; real_T CombinedSlipWheelCPI_QBZ2 ; real_T
CombinedSlipWheelCPI_QBZ3 ; real_T CombinedSlipWheelCPI_QBZ4 ; real_T
CombinedSlipWheelCPI_QBZ5 ; real_T CombinedSlipWheelCPI_QBZ6 ; real_T
CombinedSlipWheelCPI_QBZ9 ; real_T CombinedSlipWheelCPI_QCRP1 ; real_T
CombinedSlipWheelCPI_QCRP2 ; real_T CombinedSlipWheelCPI_QCZ1 ; real_T
CombinedSlipWheelCPI_QDRP1 ; real_T CombinedSlipWheelCPI_QDRP2 ; real_T
CombinedSlipWheelCPI_QDTP1 ; real_T CombinedSlipWheelCPI_QDZ1 ; real_T
CombinedSlipWheelCPI_QDZ10 ; real_T CombinedSlipWheelCPI_QDZ11 ; real_T
CombinedSlipWheelCPI_QDZ2 ; real_T CombinedSlipWheelCPI_QDZ3 ; real_T
CombinedSlipWheelCPI_QDZ4 ; real_T CombinedSlipWheelCPI_QDZ6 ; real_T
CombinedSlipWheelCPI_QDZ7 ; real_T CombinedSlipWheelCPI_QDZ8 ; real_T
CombinedSlipWheelCPI_QDZ9 ; real_T CombinedSlipWheelCPI_QEZ1 ; real_T
CombinedSlipWheelCPI_QEZ2 ; real_T CombinedSlipWheelCPI_QEZ3 ; real_T
CombinedSlipWheelCPI_QEZ4 ; real_T CombinedSlipWheelCPI_QEZ5 ; real_T
CombinedSlipWheelCPI_QHZ1 ; real_T CombinedSlipWheelCPI_QHZ2 ; real_T
CombinedSlipWheelCPI_QHZ3 ; real_T CombinedSlipWheelCPI_QHZ4 ; real_T
CombinedSlipWheelCPI_QSX1 ; real_T CombinedSlipWheelCPI_QSX10 ; real_T
CombinedSlipWheelCPI_QSX11 ; real_T CombinedSlipWheelCPI_QSX12 ; real_T
CombinedSlipWheelCPI_QSX13 ; real_T CombinedSlipWheelCPI_QSX14 ; real_T
CombinedSlipWheelCPI_QSX2 ; real_T CombinedSlipWheelCPI_QSX3 ; real_T
CombinedSlipWheelCPI_QSX4 ; real_T CombinedSlipWheelCPI_QSX5 ; real_T
CombinedSlipWheelCPI_QSX6 ; real_T CombinedSlipWheelCPI_QSX7 ; real_T
CombinedSlipWheelCPI_QSX8 ; real_T CombinedSlipWheelCPI_QSX9 ; real_T
CombinedSlipWheelCPI_QSY1 ; real_T CombinedSlipWheelCPI_QSY2 ; real_T
CombinedSlipWheelCPI_QSY3 ; real_T CombinedSlipWheelCPI_QSY4 ; real_T
CombinedSlipWheelCPI_QSY5 ; real_T CombinedSlipWheelCPI_QSY6 ; real_T
CombinedSlipWheelCPI_QSY7 ; real_T CombinedSlipWheelCPI_QSY8 ; real_T
CombinedSlipWheelCPI_Q_CAM1 ; real_T CombinedSlipWheelCPI_Q_CAM2 ; real_T
CombinedSlipWheelCPI_Q_CAM3 ; real_T CombinedSlipWheelCPI_Q_FCX ; real_T
CombinedSlipWheelCPI_Q_FCY ; real_T CombinedSlipWheelCPI_Q_FCY2 ; real_T
CombinedSlipWheelCPI_Q_FYS1 ; real_T CombinedSlipWheelCPI_Q_FYS2 ; real_T
CombinedSlipWheelCPI_Q_FYS3 ; real_T CombinedSlipWheelCPI_Q_FZ1 ; real_T
CombinedSlipWheelCPI_Q_FZ2 ; real_T CombinedSlipWheelCPI_Q_FZ3 ; real_T
CombinedSlipWheelCPI_Q_RA1 ; real_T CombinedSlipWheelCPI_Q_RA2 ; real_T
CombinedSlipWheelCPI_Q_RB1 ; real_T CombinedSlipWheelCPI_Q_RB2 ; real_T
CombinedSlipWheelCPI_Q_RE0 ; real_T CombinedSlipWheelCPI_Q_V1 ; real_T
CombinedSlipWheelCPI_Q_V2 ; real_T CombinedSlipWheelCPI_RBX1 ; real_T
CombinedSlipWheelCPI_RBX2 ; real_T CombinedSlipWheelCPI_RBX3 ; real_T
CombinedSlipWheelCPI_RBY1 ; real_T CombinedSlipWheelCPI_RBY2 ; real_T
CombinedSlipWheelCPI_RBY3 ; real_T CombinedSlipWheelCPI_RBY4 ; real_T
CombinedSlipWheelCPI_RCX1 ; real_T CombinedSlipWheelCPI_RCY1 ; real_T
CombinedSlipWheelCPI_REX1 ; real_T CombinedSlipWheelCPI_REX2 ; real_T
CombinedSlipWheelCPI_REY1 ; real_T CombinedSlipWheelCPI_REY2 ; real_T
CombinedSlipWheelCPI_RHX1 ; real_T CombinedSlipWheelCPI_RHY1 ; real_T
CombinedSlipWheelCPI_RHY2 ; real_T CombinedSlipWheelCPI_RIM_RADIUS ; real_T
CombinedSlipWheelCPI_RVY1 ; real_T CombinedSlipWheelCPI_RVY2 ; real_T
CombinedSlipWheelCPI_RVY3 ; real_T CombinedSlipWheelCPI_RVY4 ; real_T
CombinedSlipWheelCPI_RVY5 ; real_T CombinedSlipWheelCPI_RVY6 ; real_T
CombinedSlipWheelCPI_SSZ1 ; real_T CombinedSlipWheelCPI_SSZ2 ; real_T
CombinedSlipWheelCPI_SSZ3 ; real_T CombinedSlipWheelCPI_SSZ4 ; real_T
CombinedSlipWheelCPI_UNLOADED_RADIUS ; real_T
CombinedSlipWheelCPI_VERTICAL_STIFFNESS ; real_T CombinedSlipWheelCPI_VXLOW ;
real_T CombinedSlipWheelCPI_WIDTH ; real_T CombinedSlipWheelCPI_turnslip ;
real_T MagicTireConstInput_vdynMF [ 279 ] ; real_T Integrator_IC ; real_T
Integrator_AbsoluteTolerance ; real_T Integrator_IC_e0hvnfadm0 ; real_T
Integrator_AbsoluteTolerance_aborjxow4z ; real_T Saturation1_UpperSat ;
real_T Saturation1_LowerSat ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Saturation1_UpperSat_dc0hezl4xc ; real_T
Saturation1_LowerSat_lb53qxcv1p ; real_T Saturation_UpperSat_fmufkzs4nf ;
real_T Saturation_LowerSat_fqqepzbrwi ; real_T Integrator_IC_jpthtks2ld ;
real_T Integrator_AbsoluteTolerance_o2o1dh1q1y ; real_T
Saturation1_UpperSat_n0w3lsdxsp ; real_T Saturation1_LowerSat_csnqfejvrh ;
real_T Saturation_UpperSat_kwpzg0n3uv ; real_T Saturation_LowerSat_dyfysma1z1
; real_T Integrator_IC_it5llul5df ; real_T
Integrator_AbsoluteTolerance_a4m0xi43dn ; real_T
Saturation1_UpperSat_b2rub5l5py ; real_T Saturation1_LowerSat_hcpn3maivh ;
real_T Saturation_UpperSat_fpqen5wfk3 ; real_T Saturation_LowerSat_hwt1gblsrz
; real_T FlipTire_Gain ; real_T FlipTire1_Gain ; real_T Gain_Gain ; real_T
RadialDeflctConstant_Value ; real_T vertType_Value ; } ; extern const char_T
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_main_GetDWork ( ) ; extern void
mr_main_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * main_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
