/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/Simulation/config.txt
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */
#ifndef _rawcount_H_
#define _rawcount_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* rippleclock/ */ rippleclock;
  kcg_int64 /* count/ */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* rawcount/ */ rawcount;
  kcg_bool /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L11/ */ _L11;
} outC_rawcount;

/* ===========  node initialization and cycle functions  =========== */
/* rawcount/ */
extern void rawcount(
  /* incr/ */
  kcg_bool incr,
  /* lastcount/ */
  kcg_int64 lastcount,
  /* modulo/ */
  kcg_int64 modulo,
  outC_rawcount *outC);

extern void rawcount_reset(outC_rawcount *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void rawcount_init(outC_rawcount *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _rawcount_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** rawcount.h
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

