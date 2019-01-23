/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/tme13/KCG/config.txt
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_int64_3
kcg_bool kcg_comp_array_int64_3(array_int64_3 *kcg_c1, array_int64_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int64_3 */

#ifdef kcg_use_array_int64_4
kcg_bool kcg_comp_array_int64_4(array_int64_4 *kcg_c1, array_int64_4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int64_4 */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2019-01-22T18:38:49
*************************************************************$ */

