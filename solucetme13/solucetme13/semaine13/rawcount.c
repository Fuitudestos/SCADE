/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "rawcount.h"

/* rawcount/ */
void rawcount(
  /* _L1/, incr/ */
  kcg_bool incr,
  /* _L11/, lastcount/ */
  kcg_int64 lastcount,
  /* _L2/, modulo/ */
  kcg_int64 modulo,
  /* _L7/, rippleclock/ */
  kcg_bool *rippleclock,
  /* _L9/, count/ */
  kcg_int64 *count)
{
  /* _L3/, rawcount/ */
  kcg_int64 _L3;

  /* _L3= */
  if (incr) {
    _L3 = kcg_lit_int64(1) + lastcount;
  }
  else {
    _L3 = lastcount;
  }
  *count = _L3 % modulo;
  *rippleclock = *count != _L3;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** rawcount.c
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

