/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: test_pi_private.h
 *
 * Code generated for Simulink model 'test_pi'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Dec 18 11:25:26 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_pi_private_h_
#define RTW_HEADER_test_pi_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "test_pi.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void test_pi_step0(void);
extern void test_pi_step1(void);

#endif                                 /* RTW_HEADER_test_pi_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
