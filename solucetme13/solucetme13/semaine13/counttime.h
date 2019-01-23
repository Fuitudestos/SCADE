/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-16T10:21:38
*************************************************************$ */
#ifndef _counttime_H_
#define _counttime_H_

#include "kcg_types.h"
#include "rawcount.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_3 /* _L2/, smh/ */ smh;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_rawcount /* _L1=(rawcount#1)/ */ Context_rawcount_1[3];
  /* ----------------- no clocks of observable data ------------------ */
} outC_counttime;

/* ===========  node initialization and cycle functions  =========== */
/* counttime/ */
extern void counttime(outC_counttime *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void counttime_reset(outC_counttime *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void counttime_init(outC_counttime *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _counttime_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** counttime.h
** Generation date: 2019-01-16T10:21:38
*************************************************************$ */

