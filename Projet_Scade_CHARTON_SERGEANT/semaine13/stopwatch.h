/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/carlos/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-15T19:38:04
*************************************************************$ */
#ifndef _stopwatch_H_
#define _stopwatch_H_

#include "kcg_types.h"
#include "rawcount.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* reset/ */ reset;
  kcg_bool /* startstop/ */ startstop;
  kcg_bool /* mode/ */ mode;
} inC_stopwatch;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_3 /* display/ */ display;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  array_int64_4 /* _L3/ */ _L3;
  array_int64_3 /* chrono/ */ chrono;
  SSM_ST_SM2 /* SM2: */ SM2_state_nxt;
  SSM_ST_chrono /* chrono: */ chrono_state_nxt;
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_stopwatch;

/* ===========  node initialization and cycle functions  =========== */
/* stopwatch/ */
extern void stopwatch(inC_stopwatch *inC, outC_stopwatch *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void stopwatch_reset(outC_stopwatch *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void stopwatch_init(outC_stopwatch *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _stopwatch_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** stopwatch.h
** Generation date: 2019-01-15T19:38:04
*************************************************************$ */

