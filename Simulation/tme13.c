/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/Simulation/config.txt
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "tme13.h"

/* tme13/ */
void tme13(inC_tme13 *inC, outC_tme13 *outC)
{
  kcg_bool acc;
  kcg_size idx;
  kcg_size idx1;
  kcg_bool acc2;
  kcg_size idx3;
  /* display/ */
  array_int64_3 display_partial;
  /* display: */
  SSM_ST_display display_state_nxt_partial;
  /* display: */
  kcg_bool display_reset_nxt_partial;
  /* display: */
  SSM_TR_display display_fired_partial;
  /* display/ */
  array_int64_3 _4_display_partial;
  /* display: */
  SSM_ST_display _5_display_state_nxt_partial;
  /* display: */
  kcg_bool _6_display_reset_nxt_partial;
  /* display: */
  SSM_TR_display _7_display_fired_partial;
  /* display: */
  SSM_ST_display display_state_act_partial;
  /* display: */
  kcg_bool display_reset_act_partial;
  /* display: */
  SSM_TR_display display_fired_strong_partial;
  /* display:DisplayClock:<1> */
  kcg_bool tr_1_guard_DisplayClock_display;
  /* display: */
  SSM_ST_display _8_display_state_act_partial;
  /* display: */
  kcg_bool _9_display_reset_act_partial;
  /* display: */
  SSM_TR_display _10_display_fired_strong_partial;
  /* display:DisplayTime:<1> */
  kcg_bool tr_1_guard_DisplayTime_display;
  /* mytime/ */
  array_int64_3 mytime_partial;
  /* chrono: */
  SSM_ST_chrono chrono_state_nxt_partial;
  /* chrono: */
  kcg_bool chrono_reset_nxt_partial;
  /* chrono: */
  SSM_TR_chrono chrono_fired_partial;
  /* mytime/ */
  array_int64_3 _11_mytime_partial;
  /* chrono: */
  SSM_ST_chrono _12_chrono_state_nxt_partial;
  /* chrono: */
  kcg_bool _13_chrono_reset_nxt_partial;
  /* chrono: */
  SSM_TR_chrono _14_chrono_fired_partial;
  kcg_bool noname;
  /* chrono: */
  SSM_ST_chrono chrono_state_act_partial;
  /* chrono: */
  kcg_bool chrono_reset_act_partial;
  /* chrono: */
  SSM_TR_chrono chrono_fired_strong_partial;
  /* chrono:Pause:<2> */
  kcg_bool tr_2_guard_Pause_chrono;
  /* chrono:Pause:<1> */
  kcg_bool tr_1_guard_Pause_chrono;
  /* chrono: */
  SSM_ST_chrono _15_chrono_state_act_partial;
  /* chrono: */
  kcg_bool _16_chrono_reset_act_partial;
  /* chrono: */
  SSM_TR_chrono _17_chrono_fired_strong_partial;
  /* chrono:Run:<1> */
  kcg_bool tr_1_guard_Run_chrono;
  kcg_bool _18_noname;
  /* myclock/ */
  array_int64_3 last_myclock;
  /* mytime/ */
  array_int64_3 last_mytime;
  /* chrono: */
  kcg_bool chrono_reset_sel;
  /* chrono: */
  kcg_bool chrono_reset_prv;
  /* display: */
  kcg_bool display_reset_sel;
  /* display: */
  kcg_bool display_reset_prv;
  /* mytime/ */
  array_int64_3 mytime;
  /* myclock/ */
  array_int64_3 myclock;

  kcg_copy_array_int64_3(&last_myclock, &outC->myclock);
  kcg_copy_array_int64_3(&last_mytime, &outC->mytime);
  outC->display_state_sel = outC->display_state_nxt;
  /* display: */
  switch (outC->display_state_sel) {
    case SSM_st_DisplayTime_display :
      tr_1_guard_DisplayTime_display = inC->mode;
      if (tr_1_guard_DisplayTime_display) {
        _8_display_state_act_partial = SSM_st_DisplayClock_display;
      }
      else {
        _8_display_state_act_partial = SSM_st_DisplayTime_display;
      }
      outC->display_state_act = _8_display_state_act_partial;
      if (tr_1_guard_DisplayTime_display) {
        _10_display_fired_strong_partial =
          SSM_TR_DisplayTime_DisplayClock_1_DisplayTime_display;
      }
      else {
        _10_display_fired_strong_partial = SSM_TR_no_trans_display;
      }
      outC->display_fired_strong = _10_display_fired_strong_partial;
      break;
    case SSM_st_DisplayClock_display :
      tr_1_guard_DisplayClock_display = inC->mode;
      if (tr_1_guard_DisplayClock_display) {
        display_state_act_partial = SSM_st_DisplayTime_display;
      }
      else {
        display_state_act_partial = SSM_st_DisplayClock_display;
      }
      outC->display_state_act = display_state_act_partial;
      if (tr_1_guard_DisplayClock_display) {
        display_fired_strong_partial =
          SSM_TR_DisplayClock_DisplayTime_1_DisplayClock_display;
      }
      else {
        display_fired_strong_partial = SSM_TR_no_trans_display;
      }
      outC->display_fired_strong = display_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->display_state_act) {
    case SSM_st_DisplayTime_display :
      _7_display_fired_partial = outC->display_fired_strong;
      _6_display_reset_nxt_partial = kcg_false;
      _5_display_state_nxt_partial = SSM_st_DisplayTime_display;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->chrono_state_sel = outC->chrono_state_nxt;
  /* display: */
  switch (outC->display_state_act) {
    case SSM_st_DisplayTime_display :
      outC->isClock = kcg_false;
      break;
    case SSM_st_DisplayClock_display :
      outC->isClock = kcg_true;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (outC->chrono_state_sel) {
    case SSM_st_Run_chrono :
      tr_1_guard_Run_chrono = inC->startstop & (!outC->isClock);
      if (tr_1_guard_Run_chrono) {
        _15_chrono_state_act_partial = SSM_st_Pause_chrono;
      }
      else {
        _15_chrono_state_act_partial = SSM_st_Run_chrono;
      }
      outC->chrono_state_act = _15_chrono_state_act_partial;
      break;
    case SSM_st_Pause_chrono :
      tr_1_guard_Pause_chrono = inC->startstop & (!outC->isClock);
      if (tr_1_guard_Pause_chrono) {
        chrono_state_act_partial = SSM_st_Run_chrono;
      }
      else {
        chrono_state_act_partial = SSM_st_Pause_chrono;
      }
      outC->chrono_state_act = chrono_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->chrono_state_act) {
    case SSM_st_Run_chrono :
      outC->_L7_Run_chrono = kcg_true;
      kcg_copy_array_int64_3(&outC->_L10_Run_chrono, &last_mytime);
      outC->_L11_Run_chrono[0] = kcg_lit_int64(100);
      outC->_L11_Run_chrono[1] = kcg_lit_int64(60);
      outC->_L11_Run_chrono[2] = kcg_lit_int64(60);
      break;
    default :
      /* this branch is empty */
      break;
  }
  chrono_reset_prv = outC->chrono_reset_act;
  /* chrono: */
  switch (outC->chrono_state_sel) {
    case SSM_st_Run_chrono :
      _16_chrono_reset_act_partial = kcg_false;
      outC->chrono_reset_act = _16_chrono_reset_act_partial;
      break;
    case SSM_st_Pause_chrono :
      tr_2_guard_Pause_chrono = inC->reset & (!outC->isClock);
      if (tr_1_guard_Pause_chrono) {
        chrono_reset_act_partial = kcg_true;
      }
      else {
        chrono_reset_act_partial = tr_2_guard_Pause_chrono;
      }
      outC->chrono_reset_act = chrono_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (outC->chrono_state_act) {
    case SSM_st_Run_chrono :
      if (outC->chrono_reset_act) {
        /* chrono:Run:_L4=(rawcount#1)/ */
        for (idx1 = 0; idx1 < 3; idx1++) {
          /* chrono:Run:_L4=(rawcount#1)/ */
          rawcount_reset(&outC->Context_rawcount_1[idx1]);
        }
      }
      outC->_L4_Run_chrono = outC->_L7_Run_chrono;
      /* chrono:Run:_L4= */
      for (idx = 0; idx < 3; idx++) {
        acc = outC->_L4_Run_chrono;
        /* chrono:Run:_L4=(rawcount#1)/ */
        rawcount(
          acc,
          outC->_L10_Run_chrono[idx],
          outC->_L11_Run_chrono[idx],
          &outC->Context_rawcount_1[idx]);
        outC->_L4_Run_chrono = outC->Context_rawcount_1[idx].rippleclock;
        outC->_L5_Run_chrono[idx] = outC->Context_rawcount_1[idx].count;
      }
      kcg_copy_array_int64_3(&_11_mytime_partial, &outC->_L5_Run_chrono);
      kcg_copy_array_int64_3(&outC->mytime, &_11_mytime_partial);
      break;
    case SSM_st_Pause_chrono :
      kcg_copy_array_int64_3(&outC->_L4_Pause_chrono, &last_mytime);
      if (outC->chrono_reset_act) {
        outC->init1 = kcg_true;
      }
      /* chrono:Pause:_L3= */
      if (outC->init1) {
        outC->_L3_Pause_chrono[0] = kcg_lit_int64(0);
        outC->_L3_Pause_chrono[1] = kcg_lit_int64(0);
        outC->_L3_Pause_chrono[2] = kcg_lit_int64(0);
      }
      else {
        kcg_copy_array_int64_3(&outC->_L3_Pause_chrono, &outC->_L4_Pause_chrono);
      }
      kcg_copy_array_int64_3(&mytime_partial, &outC->_L3_Pause_chrono);
      kcg_copy_array_int64_3(&outC->mytime, &mytime_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->display_state_act) {
    case SSM_st_DisplayTime_display :
      kcg_copy_array_int64_3(&outC->_L2_DisplayTime_display, &outC->mytime);
      kcg_copy_array_int64_3(&_4_display_partial, &outC->_L2_DisplayTime_display);
      break;
    case SSM_st_DisplayClock_display :
      display_fired_partial = outC->display_fired_strong;
      display_reset_nxt_partial = kcg_false;
      display_state_nxt_partial = SSM_st_DisplayClock_display;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L12= */
  if (outC->init) {
    outC->_L12[0] = kcg_lit_int64(0);
    outC->_L12[1] = kcg_lit_int64(0);
    outC->_L12[2] = kcg_lit_int64(0);
    outC->_L12[3] = kcg_lit_int64(0);
  }
  else {
    kcg_copy_array_int64_4(&outC->_L12, &outC->_L7);
  }
  outC->_L8 = kcg_true;
  outC->_L9[0] = kcg_lit_int64(100);
  outC->_L9[1] = kcg_lit_int64(60);
  outC->_L9[2] = kcg_lit_int64(60);
  outC->_L9[3] = kcg_lit_int64(24);
  outC->_L6 = outC->_L8;
  /* _L6= */
  for (idx3 = 0; idx3 < 4; idx3++) {
    acc2 = outC->_L6;
    /* _L6=(rawcount#3)/ */
    rawcount(
      acc2,
      outC->_L12[idx3],
      outC->_L9[idx3],
      &outC->Context_rawcount_3[idx3]);
    outC->_L6 = outC->Context_rawcount_3[idx3].rippleclock;
    outC->_L7[idx3] = outC->Context_rawcount_3[idx3].count;
  }
  kcg_copy_array_int64_3(&outC->_L11, (array_int64_3 *) &outC->_L7[1]);
  kcg_copy_array_int64_3(&outC->myclock, &outC->_L11);
  /* display: */
  switch (outC->display_state_act) {
    case SSM_st_DisplayTime_display :
      kcg_copy_array_int64_3(&outC->display, &_4_display_partial);
      outC->display_state_nxt = _5_display_state_nxt_partial;
      break;
    case SSM_st_DisplayClock_display :
      kcg_copy_array_int64_3(&outC->_L3_DisplayClock_display, &outC->myclock);
      kcg_copy_array_int64_3(&display_partial, &outC->_L3_DisplayClock_display);
      kcg_copy_array_int64_3(&outC->display, &display_partial);
      outC->display_state_nxt = display_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  display_reset_sel = outC->display_reset_nxt;
  /* display: */
  switch (outC->display_state_act) {
    case SSM_st_DisplayTime_display :
      outC->display_reset_nxt = _6_display_reset_nxt_partial;
      outC->display_fired = _7_display_fired_partial;
      break;
    case SSM_st_DisplayClock_display :
      outC->display_reset_nxt = display_reset_nxt_partial;
      outC->display_fired = display_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->display_state_sel) {
    case SSM_st_DisplayTime_display :
      _9_display_reset_act_partial = kcg_false;
      break;
    case SSM_st_DisplayClock_display :
      display_reset_act_partial = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  display_reset_prv = outC->display_reset_act;
  /* display: */
  switch (outC->display_state_sel) {
    case SSM_st_DisplayTime_display :
      outC->display_reset_act = _9_display_reset_act_partial;
      break;
    case SSM_st_DisplayClock_display :
      outC->display_reset_act = display_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _18_noname = outC->_L6;
  /* chrono: */
  switch (outC->chrono_state_sel) {
    case SSM_st_Run_chrono :
      if (tr_1_guard_Run_chrono) {
        _17_chrono_fired_strong_partial = SSM_TR_Run_Pause_1_Run_chrono;
      }
      else {
        _17_chrono_fired_strong_partial = SSM_TR_no_trans_chrono;
      }
      outC->chrono_fired_strong = _17_chrono_fired_strong_partial;
      break;
    case SSM_st_Pause_chrono :
      if (tr_1_guard_Pause_chrono) {
        chrono_fired_strong_partial = SSM_TR_Pause_Run_1_Pause_chrono;
      }
      else if (tr_2_guard_Pause_chrono) {
        chrono_fired_strong_partial = SSM_TR_Pause_Pause_2_Pause_chrono;
      }
      else {
        chrono_fired_strong_partial = SSM_TR_no_trans_chrono;
      }
      outC->chrono_fired_strong = chrono_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* chrono: */
  switch (outC->chrono_state_act) {
    case SSM_st_Run_chrono :
      _14_chrono_fired_partial = outC->chrono_fired_strong;
      _13_chrono_reset_nxt_partial = kcg_false;
      _12_chrono_state_nxt_partial = SSM_st_Run_chrono;
      noname = outC->_L4_Run_chrono;
      outC->chrono_state_nxt = _12_chrono_state_nxt_partial;
      break;
    case SSM_st_Pause_chrono :
      chrono_fired_partial = outC->chrono_fired_strong;
      chrono_reset_nxt_partial = kcg_false;
      chrono_state_nxt_partial = SSM_st_Pause_chrono;
      outC->chrono_state_nxt = chrono_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  chrono_reset_sel = outC->chrono_reset_nxt;
  /* chrono: */
  switch (outC->chrono_state_act) {
    case SSM_st_Run_chrono :
      outC->chrono_reset_nxt = _13_chrono_reset_nxt_partial;
      outC->chrono_fired = _14_chrono_fired_partial;
      break;
    case SSM_st_Pause_chrono :
      outC->chrono_reset_nxt = chrono_reset_nxt_partial;
      outC->chrono_fired = chrono_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  myclock[0] = kcg_lit_int64(0);
  myclock[1] = kcg_lit_int64(0);
  myclock[2] = kcg_lit_int64(0);
  mytime[0] = kcg_lit_int64(0);
  mytime[1] = kcg_lit_int64(0);
  mytime[2] = kcg_lit_int64(0);
  switch (outC->chrono_state_act) {
    case SSM_st_Pause_chrono :
      outC->init1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void tme13_init(outC_tme13 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;

  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L12[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L11[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L9[idx4] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->display_fired = SSM_TR_no_trans_display;
  outC->display_fired_strong = SSM_TR_no_trans_display;
  outC->display_state_act = SSM_st_DisplayClock_display;
  outC->display_state_sel = SSM_st_DisplayClock_display;
  outC->chrono_fired = SSM_TR_no_trans_chrono;
  outC->chrono_fired_strong = SSM_TR_no_trans_chrono;
  outC->chrono_state_act = SSM_st_Pause_chrono;
  outC->chrono_state_sel = SSM_st_Pause_chrono;
  outC->isClock = kcg_true;
  outC->_L4_Run_chrono = kcg_true;
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L5_Run_chrono[idx5] = kcg_lit_int64(0);
  }
  outC->_L7_Run_chrono = kcg_true;
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L10_Run_chrono[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L11_Run_chrono[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L3_Pause_chrono[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L4_Pause_chrono[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->_L2_DisplayTime_display[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L3_DisplayClock_display[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L7[idx12] = kcg_lit_int64(0);
  }
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->display[idx13] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    /* _L6=(rawcount#3)/ */ rawcount_init(&outC->Context_rawcount_3[idx1]);
  }
  for (idx = 0; idx < 3; idx++) {
    /* chrono:Run:_L4=(rawcount#1)/ */
    rawcount_init(&outC->Context_rawcount_1[idx]);
  }
  outC->chrono_reset_nxt = kcg_false;
  outC->display_reset_act = kcg_false;
  outC->display_reset_nxt = kcg_false;
  outC->chrono_reset_act = kcg_false;
  outC->chrono_state_nxt = SSM_st_Pause_chrono;
  outC->display_state_nxt = SSM_st_DisplayClock_display;
  outC->mytime[0] = kcg_lit_int64(0);
  outC->mytime[1] = kcg_lit_int64(0);
  outC->mytime[2] = kcg_lit_int64(0);
  outC->myclock[0] = kcg_lit_int64(0);
  outC->myclock[1] = kcg_lit_int64(0);
  outC->myclock[2] = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void tme13_reset(outC_tme13 *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->init1 = kcg_true;
  outC->init = kcg_true;
  for (idx1 = 0; idx1 < 4; idx1++) {
    /* _L6=(rawcount#3)/ */ rawcount_reset(&outC->Context_rawcount_3[idx1]);
  }
  for (idx = 0; idx < 3; idx++) {
    /* chrono:Run:_L4=(rawcount#1)/ */
    rawcount_reset(&outC->Context_rawcount_1[idx]);
  }
  outC->chrono_reset_nxt = kcg_false;
  outC->display_reset_act = kcg_false;
  outC->display_reset_nxt = kcg_false;
  outC->chrono_reset_act = kcg_false;
  outC->chrono_state_nxt = SSM_st_Pause_chrono;
  outC->display_state_nxt = SSM_st_DisplayClock_display;
  outC->mytime[0] = kcg_lit_int64(0);
  outC->mytime[1] = kcg_lit_int64(0);
  outC->mytime[2] = kcg_lit_int64(0);
  outC->myclock[0] = kcg_lit_int64(0);
  outC->myclock[1] = kcg_lit_int64(0);
  outC->myclock[2] = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** tme13.c
** Generation date: 2019-01-22T18:14:27
*************************************************************$ */

