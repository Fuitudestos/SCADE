/* tme13_mapping.c */

#include "tme13_type.h"
#include "tme13_interface.h"
#include "tme13_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(mapfold_4);
DECL_ITER(mapfold_3);
DECL_ITER(array_4);
DECL_ITER(array_3);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 2);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 2);
DECL_SCOPE(scope_11, 9);
DECL_SCOPE(scope_10, 11);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 7);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 4);
DECL_SCOPE(scope_4, 9);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 16);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_chrono_SSM_st_Pause_chrono(void* pHandle) { return *(SSM_ST_chrono*)pHandle == SSM_st_Pause_chrono; }
static int isActive_SSM_ST_chrono_SSM_st_Run_chrono(void* pHandle) { return *(SSM_ST_chrono*)pHandle == SSM_st_Run_chrono; }
static int isActive_SSM_ST_display_SSM_st_DisplayClock_display(void* pHandle) { return *(SSM_ST_display*)pHandle == SSM_st_DisplayClock_display; }
static int isActive_SSM_ST_display_SSM_st_DisplayTime_display(void* pHandle) { return *(SSM_ST_display*)pHandle == SSM_st_DisplayTime_display; }
static int isActive_SSM_TR_chrono_SSM_TR_Pause_Pause_2_Pause_chrono(void* pHandle) { return *(SSM_TR_chrono*)pHandle == SSM_TR_Pause_Pause_2_Pause_chrono; }
static int isActive_SSM_TR_chrono_SSM_TR_Pause_Run_1_Pause_chrono(void* pHandle) { return *(SSM_TR_chrono*)pHandle == SSM_TR_Pause_Run_1_Pause_chrono; }
static int isActive_SSM_TR_chrono_SSM_TR_Run_Pause_1_Run_chrono(void* pHandle) { return *(SSM_TR_chrono*)pHandle == SSM_TR_Run_Pause_1_Run_chrono; }
static int isActive_SSM_TR_display_SSM_TR_DisplayClock_DisplayTime_1_DisplayClock_display(void* pHandle) { return *(SSM_TR_display*)pHandle == SSM_TR_DisplayClock_DisplayTime_1_DisplayClock_display; }
static int isActive_SSM_TR_display_SSM_TR_DisplayTime_DisplayClock_1_DisplayTime_display(void* pHandle) { return *(SSM_TR_display*)pHandle == SSM_TR_DisplayTime_DisplayClock_1_DisplayTime_display; }

/* mapping definition */

const MappingIterator iter_mapfold_4 = { "mapfold", 4, 4, NULL };
const MappingIterator iter_mapfold_3 = { "mapfold", 3, 3, NULL };
const MappingIterator iter_array_4 = { "array", 4, 4, NULL };
const MappingIterator iter_array_3 = { "array", 3, 3, NULL };

const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_display_SSM_TR_DisplayTime_DisplayClock_1_DisplayTime_display, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "tme13/ tme13display:DisplayTime:<1",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_display_SSM_TR_DisplayTime_DisplayClock_1_DisplayTime_display, &scope_15, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L2_DisplayTime_display, &_Type_array_int64_3_Utils, &scope_11_entries[0], isActive_SSM_ST_display_SSM_st_DisplayTime_display, &scope_2, 1, 1 }
};
const MappingScope scope_14 = {
    "tme13/ tme13display:DisplayTime:",
    scope_14_entries, 2
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_display_SSM_TR_DisplayClock_DisplayTime_1_DisplayClock_display, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "tme13/ tme13display:DisplayClock:<1",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_display_SSM_TR_DisplayClock_DisplayTime_1_DisplayClock_display, &scope_13, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L3_DisplayClock_display, &_Type_array_int64_3_Utils, &scope_11_entries[0], isActive_SSM_ST_display_SSM_st_DisplayClock_display, &scope_2, 1, 1 }
};
const MappingScope scope_12 = {
    "tme13/ tme13display:DisplayClock:",
    scope_12_entries, 2
};

const MappingEntry scope_11_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_display), (size_t)&outputs_ctx.display_state_act, &_Type_SSM_ST_display_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.display_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_display), (size_t)&outputs_ctx.display_state_nxt, &_Type_SSM_ST_display_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.display_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_display), (size_t)&outputs_ctx.display_state_sel, &_Type_SSM_ST_display_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_display), (size_t)&outputs_ctx.display_fired_strong, &_Type_SSM_TR_display_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_display), (size_t)&outputs_ctx.display_fired, &_Type_SSM_TR_display_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "DisplayClock:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_display_SSM_st_DisplayClock_display, &scope_12, 1, 7 },
    /* 8 */ { MAP_STATE, "DisplayTime:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_display_SSM_st_DisplayTime_display, &scope_14, 1, 8 }
};
const MappingScope scope_11 = {
    "tme13/ tme13display:",
    scope_11_entries, 9
};

const MappingEntry scope_10_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "rippleclock", NULL, sizeof(kcg_bool), offsetof(outC_rawcount, rippleclock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "count", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, count), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "rawcount", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, rawcount), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_rawcount, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L2), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L3), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L5), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L6), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_rawcount, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L9), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int64), offsetof(outC_rawcount, _L11), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_10 = {
    "rawcount/ rawcount",
    scope_10_entries, 11
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Run_Pause_1_Run_chrono, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "tme13/ tme13chrono:Run:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Run_Pause_1_Run_chrono, &scope_9, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Run_chrono, &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L5_Run_chrono, &_Type_array_int64_3_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_Run_chrono, &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L10_Run_chrono, &_Type_array_int64_3_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L11_Run_chrono, &_Type_array_int64_3_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, &scope_2, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "rawcount 1", &iter_mapfold_3, sizeof(outC_rawcount), (size_t)&outputs_ctx.Context_rawcount_1, NULL, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, &scope_10, 1, 6 }
};
const MappingScope scope_8 = {
    "tme13/ tme13chrono:Run:",
    scope_8_entries, 7
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Pause_Pause_2_Pause_chrono, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "tme13/ tme13chrono:Pause:<2",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Pause_Run_1_Pause_chrono, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "tme13/ tme13chrono:Pause:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Pause_Run_1_Pause_chrono, &scope_6, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_chrono_SSM_TR_Pause_Pause_2_Pause_chrono, &scope_7, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L3_Pause_chrono, &_Type_array_int64_3_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Pause_chrono, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L4_Pause_chrono, &_Type_array_int64_3_Utils, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Pause_chrono, &scope_2, 1, 3 }
};
const MappingScope scope_5 = {
    "tme13/ tme13chrono:Pause:",
    scope_5_entries, 4
};

const MappingEntry scope_4_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_chrono), (size_t)&outputs_ctx.chrono_state_act, &_Type_SSM_ST_chrono_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.chrono_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_chrono), (size_t)&outputs_ctx.chrono_state_nxt, &_Type_SSM_ST_chrono_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.chrono_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_chrono), (size_t)&outputs_ctx.chrono_state_sel, &_Type_SSM_ST_chrono_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_chrono), (size_t)&outputs_ctx.chrono_fired_strong, &_Type_SSM_TR_chrono_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_chrono), (size_t)&outputs_ctx.chrono_fired, &_Type_SSM_TR_chrono_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Pause:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Pause_chrono, &scope_5, 1, 7 },
    /* 8 */ { MAP_STATE, "Run:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_chrono_SSM_st_Run_chrono, &scope_8, 1, 8 }
};
const MappingScope scope_4 = {
    "tme13/ tme13chrono:",
    scope_4_entries, 9
};

const MappingEntry scope_3_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int64), 0, &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_3 = {
    "array_int64_4",
    scope_3_entries, 1
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int64), 0, &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_int64_3",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[16] = {
    /* 0 */ { MAP_OUTPUT, "display", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx.display, &_Type_array_int64_3_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_INPUT, "startstop", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.startstop, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "reset", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.reset, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "mode", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.mode, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_SIGNAL, "isClock", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.isClock, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "mytime", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx.mytime, &_Type_array_int64_3_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "myclock", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx.myclock, &_Type_array_int64_3_Utils, NULL, NULL, &scope_2, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_int64_4), (size_t)&outputs_ctx._L7, &_Type_array_int64_4_Utils, NULL, NULL, &scope_3, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int64_4), (size_t)&outputs_ctx._L9, &_Type_array_int64_4_Utils, NULL, NULL, &scope_3, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_int64_3), (size_t)&outputs_ctx._L11, &_Type_array_int64_3_Utils, NULL, NULL, &scope_2, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(array_int64_4), (size_t)&outputs_ctx._L12, &_Type_array_int64_4_Utils, NULL, NULL, &scope_3, 1, 12 },
    /* 13 */ { MAP_AUTOMATON, "chrono:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "rawcount 3", &iter_mapfold_4, sizeof(outC_rawcount), (size_t)&outputs_ctx.Context_rawcount_3, NULL, NULL, NULL, &scope_10, 1, 14 },
    /* 15 */ { MAP_AUTOMATON, "display:", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 15 }
};
const MappingScope scope_1 = {
    "tme13/ tme13",
    scope_1_entries, 16
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "tme13", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
