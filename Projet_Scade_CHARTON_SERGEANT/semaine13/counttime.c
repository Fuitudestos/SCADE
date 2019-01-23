/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-16T10:21:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "counttime.h"

/* counttime/ */
void counttime(outC_counttime *outC)
{
  array_int64_3 tmp;
  kcg_size idx;
  kcg_bool noname;

  noname = kcg_true;
  tmp[0] = kcg_lit_int64(60);
  tmp[1] = kcg_lit_int64(60);
  tmp[2] = kcg_lit_int64(24);
  /* _L1= */
  for (idx = 0; idx < 3; idx++) {
    /* _L1=(rawcount#1)/ */
    rawcount(noname, tmp[idx], &outC->Context_rawcount_1[idx]);
    noname = outC->Context_rawcount_1[idx].rippleclock;
    outC->smh[idx] = outC->Context_rawcount_1[idx].count;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void counttime_init(outC_counttime *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->smh[idx] = kcg_lit_int64(0);
    /* _L1=(rawcount#1)/ */ rawcount_init(&outC->Context_rawcount_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void counttime_reset(outC_counttime *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    /* _L1=(rawcount#1)/ */ rawcount_reset(&outC->Context_rawcount_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** counttime.c
** Generation date: 2019-01-16T10:21:38
*************************************************************$ */

