/*
 * test_pi_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "test_pi".
 *
 * Model version              : 1.23
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Dec 18 11:25:26 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(raspi_internal_lsm9ds1Block_t_T),
  sizeof(raspi_internal_PWMBlock_test__T),
  sizeof(codertarget_linux_blocks_Digi_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "raspi_internal_lsm9ds1Block_t_T",
  "raspi_internal_PWMBlock_test__T",
  "codertarget_linux_blocks_Digi_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&test_pi_B.pitch), 0, 0, 19 }
  ,

  { (char_T *)(&test_pi_DW.obj), 14, 0, 1 },

  { (char_T *)(&test_pi_DW.obj_c), 16, 0, 4 },

  { (char_T *)(&test_pi_DW.obj_a), 15, 0, 4 },

  { (char_T *)(&test_pi_DW.DiscreteTimeIntegrator1_DSTATE), 0, 0, 7 },

  { (char_T *)(&test_pi_DW.Scope_PWORK.LoggedData[0]), 11, 0, 3 },

  { (char_T *)(&test_pi_DW.clockTickCounter), 6, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&test_pi_P.DiscretePIDController_D), 0, 0, 85 },

  { (char_T *)(&test_pi_P.LED_p1[0]), 3, 0, 5 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] test_pi_dt.h */
