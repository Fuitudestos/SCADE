/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/carlos/SCADE/tme13/Simulation/config.txt
** Generation date: 2019-01-15T18:36:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "counttime.h"

/* counttime/ */
void counttime(outC_counttime *outC)
{
  kcg_bool acc;
  kcg_size idx;
  kcg_bool noname;

  outC->_L3 = kcg_true;
  outC->_L4[0] = kcg_lit_int64(60);
  outC->_L4[1] = kcg_lit_int64(60);
  outC->_L4[2] = kcg_lit_int64(24);
  outC->_L1 = outC->_L3;
  /* _L1= */
  for (idx = 0; idx < 3; idx++) {
    acc = outC->_L1;
    /* _L1=(rawcount#1)/ */
    rawcount(acc, outC->_L4[idx], &outC->Context_rawcount_1[idx]);
    outC->_L1 = outC->Context_rawcount_1[idx].rippleclock;
    outC->_L2[idx] = outC->Context_rawcount_1[idx].count;
  }
  kcg_copy_array_int64_3(&outC->smh, &outC->_L2);
  noname = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void counttime_init(outC_counttime *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L4[idx1] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L2[idx2] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_true;
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->smh[idx3] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 3; idx++) {
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
** Generation date: 2019-01-15T18:36:27
*************************************************************$ */

