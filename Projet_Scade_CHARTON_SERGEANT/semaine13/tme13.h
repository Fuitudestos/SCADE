/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-22T18:38:49
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
  array_int64_4 /* _L7/ */ _L7;
  array_int64_3 /* mytime/ */ mytime;
  SSM_ST_display /* display: */ display_state_nxt;
  SSM_ST_chrono /* chrono: */ chrono_state_nxt;
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

