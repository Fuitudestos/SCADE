/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/Simulation/config.txt
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "rawcount.h"

/* rawcount/ */
void rawcount(
  /* incr/ */
  kcg_bool incr,
  /* lastcount/ */
  kcg_int64 lastcount,
  /* modulo/ */
  kcg_int64 modulo,
  outC_rawcount *outC)
{
  outC->_L11 = lastcount;
  outC->_L6 = kcg_lit_int64(1);
  outC->_L5 = outC->_L6 + outC->_L11;
  outC->_L1 = incr;
  /* _L3= */
  if (outC->_L1) {
    outC->_L3 = outC->_L5;
  }
  else {
    outC->_L3 = outC->_L11;
  }
  outC->rawcount = outC->_L3;
  outC->_L9 = outC->rawcount % modulo;
  outC->count = outC->_L9;
  outC->_L7 = outC->count != outC->rawcount;
  outC->rippleclock = outC->_L7;
  outC->_L2 = modulo;
}

#ifndef KCG_USER_DEFINED_INIT
void rawcount_init(outC_rawcount *outC)
{
  outC->_L11 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_true;
  outC->rawcount = kcg_lit_int64(0);
  outC->count = kcg_lit_int64(0);
  outC->rippleclock = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void rawcount_reset(outC_rawcount *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** rawcount.c
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

