/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/carlos/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-15T19:38:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "stopwatch.h"

/* stopwatch/ */
void stopwatch(inC_stopwatch *inC, outC_stopwatch *outC)
{
  array_int64_3 tmp;
  kcg_bool acc;
  kcg_size idx;
  array_int64_4 tmp1;
  /* SM2: */
  SSM_ST_SM2 SM2_state_act;
  /* chrono: */
  kcg_bool chrono_reset_act;
  /* chrono: */
  SSM_ST_chrono chrono_state_act;
  kcg_bool noname;
  kcg_bool _2_noname;
  /* chrono/, chrono:running:_L3/ */
  array_int64_3 chrono_partial;
  /* _L3/ */
  array_int64_4 _L3;

  noname = kcg_true;
  tmp1[0] = kcg_lit_int64(100);
  tmp1[1] = kcg_lit_int64(60);
  tmp1[2] = kcg_lit_int64(60);
  tmp1[3] = kcg_lit_int64(24);
  kcg_copy_array_int64_4(&_L3, &outC->_L3);
  /* SM2: */
  switch (outC->SM2_state_nxt) {
    case SSM_st_displaychrono_SM2 :
      if (inC->mode) {
        SM2_state_act = SSM_st_displayclock_SM2;
      }
      else {
        SM2_state_act = SSM_st_displaychrono_SM2;
      }
      break;
    case SSM_st_displayclock_SM2 :
      if (inC->mode) {
        SM2_state_act = SSM_st_displaychrono_SM2;
      }
      else {
        SM2_state_act = SSM_st_displayclock_SM2;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM2: */
  switch (SM2_state_act) {
    case SSM_st_displaychrono_SM2 :
      acc = kcg_false;
      break;
    case SSM_st_displayclock_SM2 :
      acc = kcg_true;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (outC->chrono_state_nxt) {
    case SSM_st_running_chrono :
      chrono_reset_act = kcg_false;
      if (inC->startstop & (!acc)) {
        chrono_state_act = SSM_st_stoped_chrono;
      }
      else {
        chrono_state_act = SSM_st_running_chrono;
      }
      break;
    case SSM_st_stoped_chrono :
      _2_noname = inC->startstop & (!acc);
      if (_2_noname) {
        chrono_state_act = SSM_st_running_chrono;
      }
      else {
        chrono_state_act = SSM_st_stoped_chrono;
      }
      chrono_reset_act = _2_noname | (inC->reset & (!acc));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (chrono_state_act) {
    case SSM_st_running_chrono :
      _2_noname = kcg_true;
      tmp[0] = kcg_lit_int64(100);
      tmp[1] = kcg_lit_int64(60);
      tmp[2] = kcg_lit_int64(60);
      /* chrono:running:_L2= */
      for (idx = 0; idx < 3; idx++) {
        acc = _2_noname;
        /* chrono:running:_L2=(rawcount#1)/ */
        rawcount(
          acc,
          outC->chrono[idx],
          tmp[idx],
          &_2_noname,
          &chrono_partial[idx]);
      }
      kcg_copy_array_int64_3(&outC->chrono, &chrono_partial);
      outC->chrono_state_nxt = SSM_st_running_chrono;
      break;
    case SSM_st_stoped_chrono :
      if (chrono_reset_act) {
        outC->init = kcg_true;
      }
      /* chrono:stoped:_L3= */
      if (outC->init) {
        outC->chrono[0] = kcg_lit_int64(0);
        outC->chrono[1] = kcg_lit_int64(0);
        outC->chrono[2] = kcg_lit_int64(0);
      }
      outC->init = kcg_false;
      outC->chrono_state_nxt = SSM_st_stoped_chrono;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L2= */
  for (idx = 0; idx < 4; idx++) {
    _2_noname = noname;
    /* _L2=(rawcount#2)/ */
    rawcount(_2_noname, _L3[idx], tmp1[idx], &noname, &outC->_L3[idx]);
  }
  /* SM2: */
  switch (SM2_state_act) {
    case SSM_st_displaychrono_SM2 :
      kcg_copy_array_int64_3(&outC->display, &outC->chrono);
      outC->SM2_state_nxt = SSM_st_displaychrono_SM2;
      break;
    case SSM_st_displayclock_SM2 :
      kcg_copy_array_int64_3(&outC->display, (array_int64_3 *) &outC->_L3[1]);
      outC->SM2_state_nxt = SSM_st_displayclock_SM2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void stopwatch_init(outC_stopwatch *outC)
{
  kcg_size idx;

  outC->init = kcg_true;
  outC->_L3[0] = kcg_lit_int64(0);
  outC->_L3[1] = kcg_lit_int64(0);
  outC->_L3[2] = kcg_lit_int64(0);
  outC->_L3[3] = kcg_lit_int64(0);
  outC->chrono[0] = kcg_lit_int64(0);
  outC->chrono[1] = kcg_lit_int64(0);
  outC->chrono[2] = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->display[idx] = kcg_lit_int64(0);
  }
  outC->SM2_state_nxt = SSM_st_displayclock_SM2;
  outC->chrono_state_nxt = SSM_st_stoped_chrono;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void stopwatch_reset(outC_stopwatch *outC)
{
  outC->init = kcg_true;
  outC->_L3[0] = kcg_lit_int64(0);
  outC->_L3[1] = kcg_lit_int64(0);
  outC->_L3[2] = kcg_lit_int64(0);
  outC->_L3[3] = kcg_lit_int64(0);
  outC->chrono[0] = kcg_lit_int64(0);
  outC->chrono[1] = kcg_lit_int64(0);
  outC->chrono[2] = kcg_lit_int64(0);
  outC->SM2_state_nxt = SSM_st_displayclock_SM2;
  outC->chrono_state_nxt = SSM_st_stoped_chrono;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** stopwatch.c
** Generation date: 2019-01-15T19:38:04
*************************************************************$ */

