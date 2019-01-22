/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/Simulation/config.txt
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */
#ifndef _tme13_H_
#define _tme13_H_

#include "kcg_types.h"
#include "rawcount.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* startstop/ */ startstop;
  kcg_bool /* reset/ */ reset;
  kcg_bool /* mode/ */ mode;
} inC_tme13;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_3 /* display/ */ display;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  SSM_ST_chrono /* chrono: */ chrono_state_nxt;
  kcg_bool /* chrono: */ chrono_reset_act;
  kcg_bool /* chrono: */ chrono_reset_nxt;
  SSM_ST_display /* display: */ display_state_nxt;
  kcg_bool /* display: */ display_reset_act;
  kcg_bool /* display: */ display_reset_nxt;
  array_int64_3 /* mytime/ */ mytime;
  array_int64_3 /* myclock/ */ myclock;
  array_int64_4 /* _L7/ */ _L7;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_rawcount /* _L6=(rawcount#3)/ */ Context_rawcount_3[4];
  outC_rawcount /* chrono:Run:_L4=(rawcount#1)/ */ Context_rawcount_1[3];
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_chrono /* chrono: */ chrono_state_act;
  SSM_ST_display /* display: */ display_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_3 /* display:DisplayClock:_L3/ */ _L3_DisplayClock_display;
  array_int64_3 /* display:DisplayTime:_L2/ */ _L2_DisplayTime_display;
  array_int64_3 /* chrono:Pause:_L4/ */ _L4_Pause_chrono;
  array_int64_3 /* chrono:Pause:_L3/ */ _L3_Pause_chrono;
  array_int64_3 /* chrono:Run:_L11/ */ _L11_Run_chrono;
  array_int64_3 /* chrono:Run:_L10/ */ _L10_Run_chrono;
  kcg_bool /* chrono:Run:_L7/ */ _L7_Run_chrono;
  array_int64_3 /* chrono:Run:_L5/ */ _L5_Run_chrono;
  kcg_bool /* chrono:Run:_L4/ */ _L4_Run_chrono;
  kcg_bool /* isClock/ */ isClock;
  SSM_ST_chrono /* chrono: */ chrono_state_sel;
  SSM_TR_chrono /* chrono: */ chrono_fired_strong;
  SSM_TR_chrono /* chrono: */ chrono_fired;
  SSM_ST_display /* display: */ display_state_sel;
  SSM_TR_display /* display: */ display_fired_strong;
  SSM_TR_display /* display: */ display_fired;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  array_int64_4 /* _L9/ */ _L9;
  array_int64_3 /* _L11/ */ _L11;
  array_int64_4 /* _L12/ */ _L12;
} outC_tme13;

/* ===========  node initialization and cycle functions  =========== */
/* tme13/ */
extern void tme13(inC_tme13 *inC, outC_tme13 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void tme13_reset(outC_tme13 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void tme13_init(outC_tme13 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _tme13_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** tme13.h
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

