/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: test_pi_data.c
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

#include "test_pi.h"
#include "test_pi_private.h"

/* Block parameters (default storage) */
P_test_pi_T test_pi_P = {
  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S41>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_D
   * Referenced by: '<S233>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_I
   * Referenced by: '<S246>/Integral Gain'
   */
  0.02,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S54>/Integral Gain'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S46>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_InitialC
   * Referenced by: '<S238>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_e
   * Referenced by: '<S64>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_Initia_d
   * Referenced by: '<S256>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSatu
   * Referenced by: '<S85>/Saturation'
   */
  -1.0,

  /* Mask Parameter: DiscretePIDController2_LowerSat
   * Referenced by: '<S277>/Saturation'
   */
  -0.6,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S74>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController2_N
   * Referenced by: '<S266>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S81>/Proportional Gain'
   */
  1.2,

  /* Mask Parameter: DiscretePIDController2_P
   * Referenced by: '<S273>/Proportional Gain'
   */
  0.7,

  /* Mask Parameter: DiscretePIDController_UpperSatu
   * Referenced by: '<S85>/Saturation'
   */
  1.0,

  /* Mask Parameter: DiscretePIDController2_UpperSat
   * Referenced by: '<S277>/Saturation'
   */
  0.6,

  /* Expression: -80
   * Referenced by: '<S1>/Constant1'
   */
  -80.0,

  /* Expression: -90
   * Referenced by: '<S1>/Switch3'
   */
  -90.0,

  /* Expression: 0
   * Referenced by: '<S604>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S604>/Switch'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S604>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S604>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S604>/Switch1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S604>/Gain1'
   */
  -1.0,

  /* Expression: sampleTime
   * Referenced by: '<S607>/Digital Read'
   */
  0.01,

  /* Expression: sampleTime
   * Referenced by: '<S608>/Digital Read'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S604>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S604>/Switch2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S604>/Gain2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S604>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S604>/Switch3'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S604>/Gain3'
   */
  -1.0,

  /* Expression: sampleTime
   * Referenced by: '<S609>/Digital Read'
   */
  0.01,

  /* Expression: sampleTime
   * Referenced by: '<S610>/Digital Read'
   */
  0.01,

  /* Expression: 180/pi
   * Referenced by: '<S298>/Gain11'
   */
  57.295779513082323,

  /* Expression: 0.99
   * Referenced by: '<S299>/Gain7'
   */
  0.99,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S299>/Discrete-Time Integrator1'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S299>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S299>/Gain4'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S1>/Switch'
   */
  2.0,

  /* Expression: -2
   * Referenced by: '<S1>/Switch1'
   */
  -2.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S64>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S46>/Filter'
   */
  0.01,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation'
   */
  -1.0,

  /* Expression: -80
   * Referenced by: '<S3>/Constant2'
   */
  -80.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S299>/Discrete-Time Integrator'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S299>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0.005
   * Referenced by: '<S299>/Gain9'
   */
  0.005,

  /* Expression: 180/pi
   * Referenced by: '<S298>/Gain10'
   */
  57.295779513082323,

  /* Expression: 0.995
   * Referenced by: '<S299>/Gain6'
   */
  0.995,

  /* Expression: pi/180
   * Referenced by: '<S298>/Gain2'
   */
  0.017453292519943295,

  /* Expression: -1
   * Referenced by: '<S298>/Gain'
   */
  -1.0,

  /* Expression: pi/180
   * Referenced by: '<S298>/Gain1'
   */
  0.017453292519943295,

  /* Expression: 180/pi
   * Referenced by: '<S298>/Gain3'
   */
  57.295779513082323,

  /* Expression: -75
   * Referenced by: '<S1>/Switch2'
   */
  -75.0,

  /* Expression: 0
   * Referenced by: '<S1>/Gain'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_j
   * Referenced by: '<S256>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval_l
   * Referenced by: '<S238>/Filter'
   */
  0.01,

  /* Expression: 0.6
   * Referenced by: '<S1>/Saturation1'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S1>/Saturation1'
   */
  -0.6,

  /* Expression: 0.5
   * Referenced by: '<S4>/Gain'
   */
  0.5,

  /* Expression: -1
   * Referenced by: '<Root>/Gain'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S604>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S604>/Saturation'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S605>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S605>/Switch4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S605>/Switch1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<Root>/Gain1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S604>/Saturation1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S604>/Saturation1'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S606>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S606>/Switch5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S606>/Switch2'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S298>/Gain12'
   */
  57.295779513082323,

  /* Expression: 0.98
   * Referenced by: '<S299>/Gain8'
   */
  0.98,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<S299>/Discrete-Time Integrator2'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S299>/Discrete-Time Integrator2'
   */
  0.0,

  /* Expression: 0.02
   * Referenced by: '<S299>/Gain5'
   */
  0.02,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<Root>/Pulse Generator'
   */
  2.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0,

  /* Expression: deviceFile
   * Referenced by: '<Root>/LED'
   */
  { 108U, 101U, 100U, 48U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
