/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "tme13.h"

/* tme13/ */
void tme13(inC_tme13 *inC, outC_tme13 *outC)
{
  array_int64_3 tmp;
  kcg_bool acc;
  kcg_size idx;
  array_int64_4 tmp1;
  /* display: */
  SSM_ST_display display_state_act;
  /* chrono: */
  kcg_bool chrono_reset_act;
  /* chrono: */
  SSM_ST_chrono chrono_state_act;
  kcg_bool noname;
  kcg_bool _2_noname;
  /* chrono:Run:_L5/, mytime/ */
  array_int64_3 mytime_partial;
  /* _L7/ */
  array_int64_4 _L7;

  noname = kcg_true;
  tmp1[0] = kcg_lit_int64(100);
  tmp1[1] = kcg_lit_int64(60);
  tmp1[2] = kcg_lit_int64(60);
  tmp1[3] = kcg_lit_int64(24);
  kcg_copy_array_int64_4(&_L7, &outC->_L7);
  /* display: */
  switch (outC->display_state_nxt) {
    case SSM_st_DisplayTime_display :
      if (inC->mode) {
        display_state_act = SSM_st_DisplayClock_display;
      }
      else {
        display_state_act = SSM_st_DisplayTime_display;
      }
      break;
    case SSM_st_DisplayClock_display :
      if (inC->mode) {
        display_state_act = SSM_st_DisplayTime_display;
      }
      else {
        display_state_act = SSM_st_DisplayClock_display;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* display: */
  switch (display_state_act) {
    case SSM_st_DisplayTime_display :
      acc = kcg_false;
      break;
    case SSM_st_DisplayClock_display :
      acc = kcg_true;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (outC->chrono_state_nxt) {
    case SSM_st_Run_chrono :
      chrono_reset_act = kcg_false;
      if (inC->startstop & (!acc)) {
        chrono_state_act = SSM_st_Pause_chrono;
      }
      else {
        chrono_state_act = SSM_st_Run_chrono;
      }
      break;
    case SSM_st_Pause_chrono :
      _2_noname = inC->startstop & (!acc);
      if (_2_noname) {
        chrono_state_act = SSM_st_Run_chrono;
      }
      else {
        chrono_state_act = SSM_st_Pause_chrono;
      }
      chrono_reset_act = _2_noname | (inC->reset & (!acc));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (chrono_state_act) {
    case SSM_st_Run_chrono :
      _2_noname = kcg_true;
      tmp[0] = kcg_lit_int64(100);
      tmp[1] = kcg_lit_int64(60);
      tmp[2] = kcg_lit_int64(60);
      /* chrono:Run:_L4= */
      for (idx = 0; idx < 3; idx++) {
        acc = _2_noname;
        /* chrono:Run:_L4=(rawcount#1)/ */
        rawcount(
          acc,
          outC->mytime[idx],
          tmp[idx],
          &_2_noname,
          &mytime_partial[idx]);
      }
      kcg_copy_array_int64_3(&outC->mytime, &mytime_partial);
      outC->chrono_state_nxt = SSM_st_Run_chrono;
      break;
    case SSM_st_Pause_chrono :
      if (chrono_reset_act) {
        outC->init = kcg_true;
      }
      /* chrono:Pause:_L3= */
      if (outC->init) {
        outC->mytime[0] = kcg_lit_int64(0);
        outC->mytime[1] = kcg_lit_int64(0);
        outC->mytime[2] = kcg_lit_int64(0);
      }
      outC->init = kcg_false;
      outC->chrono_state_nxt = SSM_st_Pause_chrono;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L6= */
  for (idx = 0; idx < 4; idx++) {
    _2_noname = noname;
    /* _L6=(rawcount#3)/ */
    rawcount(_2_noname, _L7[idx], tmp1[idx], &noname, &outC->_L7[idx]);
  }
  /* display: */
  switch (display_state_act) {
    case SSM_st_DisplayTime_display :
      kcg_copy_array_int64_3(&outC->display, &outC->mytime);
      outC->display_state_nxt = SSM_st_DisplayTime_display;
      break;
    case SSM_st_DisplayClock_display :
      kcg_copy_array_int64_3(&outC->display, (array_int64_3 *) &outC->_L7[1]);
      outC->display_state_nxt = SSM_st_DisplayClock_display;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void tme13_init(outC_tme13 *outC)
{
  kcg_size idx;

  outC->init = kcg_true;
  outC->_L7[0] = kcg_lit_int64(0);
  outC->_L7[1] = kcg_lit_int64(0);
  outC->_L7[2] = kcg_lit_int64(0);
  outC->_L7[3] = kcg_lit_int64(0);
  outC->mytime[0] = kcg_lit_int64(0);
  outC->mytime[1] = kcg_lit_int64(0);
  outC->mytime[2] = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->display[idx] = kcg_lit_int64(0);
  }
  outC->display_state_nxt = SSM_st_DisplayClock_display;
  outC->chrono_state_nxt = SSM_st_Pause_chrono;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void tme13_reset(outC_tme13 *outC)
{
  outC->init = kcg_true;
  outC->_L7[0] = kcg_lit_int64(0);
  outC->_L7[1] = kcg_lit_int64(0);
  outC->_L7[2] = kcg_lit_int64(0);
  outC->_L7[3] = kcg_lit_int64(0);
  outC->mytime[0] = kcg_lit_int64(0);
  outC->mytime[1] = kcg_lit_int64(0);
  outC->mytime[2] = kcg_lit_int64(0);
  outC->display_state_nxt = SSM_st_DisplayClock_display;
  outC->chrono_state_nxt = SSM_st_Pause_chrono;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** tme13.c
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

