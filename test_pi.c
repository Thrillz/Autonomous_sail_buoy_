/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: test_pi.c
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
#include "test_pi_dt.h"

/* Block signals (default storage) */
B_test_pi_T test_pi_B;

/* Block states (default storage) */
DW_test_pi_T test_pi_DW;

/* Real-time model */
RT_MODEL_test_pi_T test_pi_M_;
RT_MODEL_test_pi_T *const test_pi_M = &test_pi_M_;

/* Forward declaration for local functions */
static void test_pi_SystemCore_release_auki(const
  raspi_internal_lsm9ds1Block_t_T *obj);
static void test_pi_SystemCore_delete_auki(const raspi_internal_lsm9ds1Block_t_T
  *obj);
static void matlabCodegenHandle_matlab_auki(raspi_internal_lsm9ds1Block_t_T *obj);
static void test_p_SystemCore_release_aukis(codertarget_raspi_internal_I2_T *obj);
static void test_pi_SystemCore_delete_aukis(codertarget_raspi_internal_I2_T *obj);
static void matlabCodegenHandle_matla_aukis(codertarget_raspi_internal_I2_T *obj);
static void test__SystemCore_release_aukisa(codertarget_raspi_internal__a_T *obj);
static void test_p_SystemCore_delete_aukisa(codertarget_raspi_internal__a_T *obj);
static void matlabCodegenHandle_matl_aukisa(codertarget_raspi_internal__a_T *obj);
static void test_SystemCore_release_aukisa0(const
  codertarget_linux_blocks_Digi_T *obj);
static void test__SystemCore_delete_aukisa0(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle_mat_aukisa0(codertarget_linux_blocks_Digi_T *obj);
static void test_pi_SystemCore_release(const raspi_internal_PWMBlock_test__T
  *obj);
static void test_pi_SystemCore_delete(const raspi_internal_PWMBlock_test__T *obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_PWMBlock_test__T *obj);
static void tes_SystemCore_release_aukisa00(const
  codertarget_linux_blocks_Digi_T *obj);
static void test_SystemCore_delete_aukisa00(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle_ma_aukisa00(codertarget_linux_blocks_Digi_T *obj);
static void te_SystemCore_release_aukisa000(const
  codertarget_linux_blocks_Digi_T *obj);
static void tes_SystemCore_delete_aukisa000(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle_m_aukisa000(codertarget_linux_blocks_Digi_T *obj);
static void t_SystemCore_release_aukisa0003(const
  codertarget_linux_blocks_Digi_T *obj);
static void te_SystemCore_delete_aukisa0003(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle__aukisa0003(codertarget_linux_blocks_Digi_T *obj);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void test_pi_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(test_pi_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (test_pi_M->Timing.TaskCounters.TID[1])++;
  if ((test_pi_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [1.0s, 0.0s] */
    test_pi_M->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void test_pi_SystemCore_release_auki(const
  raspi_internal_lsm9ds1Block_t_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj_A_G.MW_I2C_HANDLE);
    MW_I2C_Close(obj->i2cobj_MAG.MW_I2C_HANDLE);
  }
}

static void test_pi_SystemCore_delete_auki(const raspi_internal_lsm9ds1Block_t_T
  *obj)
{
  test_pi_SystemCore_release_auki(obj);
}

static void matlabCodegenHandle_matlab_auki(raspi_internal_lsm9ds1Block_t_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test_pi_SystemCore_delete_auki(obj);
  }
}

static void test_p_SystemCore_release_aukis(codertarget_raspi_internal_I2_T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void test_pi_SystemCore_delete_aukis(codertarget_raspi_internal_I2_T *obj)
{
  test_p_SystemCore_release_aukis(obj);
}

static void matlabCodegenHandle_matla_aukis(codertarget_raspi_internal_I2_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test_pi_SystemCore_delete_aukis(obj);
  }
}

static void test__SystemCore_release_aukisa(codertarget_raspi_internal__a_T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void test_p_SystemCore_delete_aukisa(codertarget_raspi_internal__a_T *obj)
{
  test__SystemCore_release_aukisa(obj);
}

static void matlabCodegenHandle_matl_aukisa(codertarget_raspi_internal__a_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test_p_SystemCore_delete_aukisa(obj);
  }
}

static void test_SystemCore_release_aukisa0(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(13U);
  }
}

static void test__SystemCore_delete_aukisa0(const
  codertarget_linux_blocks_Digi_T *obj)
{
  test_SystemCore_release_aukisa0(obj);
}

static void matlabCodegenHandle_mat_aukisa0(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test__SystemCore_delete_aukisa0(obj);
  }
}

static void test_pi_SystemCore_release(const raspi_internal_PWMBlock_test__T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    EXT_PWM_terminate(obj->PinNumber);
  }
}

static void test_pi_SystemCore_delete(const raspi_internal_PWMBlock_test__T *obj)
{
  test_pi_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_PWMBlock_test__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test_pi_SystemCore_delete(obj);
  }
}

static void tes_SystemCore_release_aukisa00(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(27U);
  }
}

static void test_SystemCore_delete_aukisa00(const
  codertarget_linux_blocks_Digi_T *obj)
{
  tes_SystemCore_release_aukisa00(obj);
}

static void matlabCodegenHandle_ma_aukisa00(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    test_SystemCore_delete_aukisa00(obj);
  }
}

static void te_SystemCore_release_aukisa000(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(19U);
  }
}

static void tes_SystemCore_delete_aukisa000(const
  codertarget_linux_blocks_Digi_T *obj)
{
  te_SystemCore_release_aukisa000(obj);
}

static void matlabCodegenHandle_m_aukisa000(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    tes_SystemCore_delete_aukisa000(obj);
  }
}

static void t_SystemCore_release_aukisa0003(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(26U);
  }
}

static void te_SystemCore_delete_aukisa0003(const
  codertarget_linux_blocks_Digi_T *obj)
{
  t_SystemCore_release_aukisa0003(obj);
}

static void matlabCodegenHandle__aukisa0003(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    te_SystemCore_delete_aukisa0003(obj);
  }
}

/* Model step function for TID0 */
void test_pi_step0(void)               /* Sample time: [0.01s, 0.0s] */
{
  boolean_T rtb_DigitalRead_i_0;
  int16_T b_RegisterValue[3];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];
  real_T rtb_Gain_g;
  real_T rtb_Sum_e;
  real_T rtb_FilterCoefficient_f;
  real_T rtb_FilterCoefficient;
  int32_T i;

  {                                    /* Sample time: [0.01s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MATLABSystem: '<S298>/LSM9DS1 IMU Sensor' */
  status = 24U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(test_pi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(test_pi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw,
                      6U, false, true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  memcpy(&test_pi_B.b[0], &test_pi_DW.obj.CalGyroA[0], 9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    test_pi_B.a[i] = ((test_pi_B.b[3 * i + 1] * (real_T)b_RegisterValue[1] +
                       test_pi_B.b[3 * i] * (real_T)b_RegisterValue[0]) +
                      test_pi_B.b[3 * i + 2] * (real_T)b_RegisterValue[2]) +
      test_pi_DW.obj.CalGyroB[i];
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(test_pi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(test_pi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw,
                      6U, false, true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  memcpy(&test_pi_B.b[0], &test_pi_DW.obj.CalAccelA[0], 9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    test_pi_B.a_m[i] = ((test_pi_B.b[3 * i + 1] * (real_T)b_RegisterValue[1] +
                         test_pi_B.b[3 * i] * (real_T)b_RegisterValue[0]) +
                        test_pi_B.b[3 * i + 2] * (real_T)b_RegisterValue[2]) +
      test_pi_DW.obj.CalAccelB[i];
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(test_pi_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(test_pi_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U, output_raw,
                      6U, false, true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  memcpy(&test_pi_B.b[0], &test_pi_DW.obj.CalMagA[0], 9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    rtb_Sum_e = ((test_pi_B.b[3 * i + 1] * (real_T)b_RegisterValue[1] +
                  test_pi_B.b[3 * i] * (real_T)b_RegisterValue[0]) +
                 test_pi_B.b[3 * i + 2] * (real_T)b_RegisterValue[2]) +
      test_pi_DW.obj.CalMagB[i];
    test_pi_B.LSM9DS1IMUSensor_o1[i] = test_pi_B.a[i] * 245.0 / 32768.0;
    test_pi_B.LSM9DS1IMUSensor_o2[i] = test_pi_B.a_m[i] * 2.0 / 32768.0;
    test_pi_B.LSM9DS1IMUSensor_o3[i] = rtb_Sum_e * 4.0 / 32768.0;
  }

  /* End of MATLABSystem: '<S298>/LSM9DS1 IMU Sensor' */

  /* Gain: '<S298>/Gain11' incorporates:
   *  Trigonometry: '<S298>/Trigonometric Function1'
   */
  test_pi_B.pitch = test_pi_P.Gain11_Gain * rt_atan2d_snf
    (test_pi_B.LSM9DS1IMUSensor_o2[1], test_pi_B.LSM9DS1IMUSensor_o2[2]);

  /* Sum: '<S299>/Sum4' incorporates:
   *  DiscreteIntegrator: '<S299>/Discrete-Time Integrator1'
   *  Gain: '<S299>/Gain4'
   *  Gain: '<S299>/Gain7'
   */
  test_pi_B.Sum4 = test_pi_P.Gain4_Gain *
    test_pi_DW.DiscreteTimeIntegrator1_DSTATE + test_pi_P.Gain7_Gain *
    test_pi_B.pitch;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   */
  if (test_pi_B.Sum4 > test_pi_P.Switch_Threshold_l) {
    test_pi_B.Gain_m = test_pi_B.Sum4;
  } else {
    test_pi_B.Gain_m = test_pi_P.Constant_Value;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  if (test_pi_B.Sum4 > test_pi_P.Switch1_Threshold_o) {
    rtb_Sum_e = test_pi_P.Constant_Value;
  } else {
    rtb_Sum_e = test_pi_B.Sum4;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S3>/Constant'
   *  Sum: '<S1>/Add'
   */
  rtb_Sum_e = test_pi_P.Constant_Value_o - (test_pi_B.Gain_m + rtb_Sum_e);

  /* Gain: '<S74>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S46>/Filter'
   *  Gain: '<S41>/Derivative Gain'
   *  Sum: '<S46>/SumD'
   */
  rtb_FilterCoefficient = (test_pi_P.DiscretePIDController_D * rtb_Sum_e -
    test_pi_DW.Filter_DSTATE) * test_pi_P.DiscretePIDController_N;

  /* Sum: '<S94>/Sum' incorporates:
   *  DiscreteIntegrator: '<S64>/Integrator'
   *  Gain: '<S81>/Proportional Gain'
   */
  test_pi_B.Saturation = (test_pi_P.DiscretePIDController_P * rtb_Sum_e +
    test_pi_DW.Integrator_DSTATE) + rtb_FilterCoefficient;

  /* Saturate: '<S85>/Saturation' */
  if (test_pi_B.Saturation > test_pi_P.DiscretePIDController_UpperSatu) {
    /* Sum: '<S94>/Sum' */
    test_pi_B.Saturation = test_pi_P.DiscretePIDController_UpperSatu;
  } else {
    if (test_pi_B.Saturation < test_pi_P.DiscretePIDController_LowerSatu) {
      /* Sum: '<S94>/Sum' */
      test_pi_B.Saturation = test_pi_P.DiscretePIDController_LowerSatu;
    }
  }

  /* End of Saturate: '<S85>/Saturation' */

  /* Saturate: '<S1>/Saturation' */
  if (test_pi_B.Saturation > test_pi_P.Saturation_UpperSat) {
    /* Sum: '<S94>/Sum' */
    test_pi_B.Saturation = test_pi_P.Saturation_UpperSat;
  } else {
    if (test_pi_B.Saturation < test_pi_P.Saturation_LowerSat) {
      /* Sum: '<S94>/Sum' */
      test_pi_B.Saturation = test_pi_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Gain: '<S298>/Gain10' incorporates:
   *  Trigonometry: '<S298>/Trigonometric Function'
   */
  test_pi_B.rol = test_pi_P.Gain10_Gain * rt_atan2d_snf
    (test_pi_B.LSM9DS1IMUSensor_o2[0], test_pi_B.LSM9DS1IMUSensor_o2[2]);

  /* Sum: '<S299>/Sum6' incorporates:
   *  DiscreteIntegrator: '<S299>/Discrete-Time Integrator'
   *  Gain: '<S299>/Gain6'
   *  Gain: '<S299>/Gain9'
   */
  test_pi_B.Sum6 = test_pi_P.Gain9_Gain *
    test_pi_DW.DiscreteTimeIntegrator_DSTATE + test_pi_P.Gain6_Gain *
    test_pi_B.rol;

  /* Gain: '<S298>/Gain2' */
  test_pi_B.Integrator_n = test_pi_P.Gain2_Gain_k * test_pi_B.Sum6;

  /* Gain: '<S298>/Gain1' */
  test_pi_B.Gain_m = test_pi_P.Gain1_Gain_e * test_pi_B.Sum4;

  /* Fcn: '<S298>/Fcn2' incorporates:
   *  Fcn: '<S298>/Fcn'
   */
  rtb_FilterCoefficient_f = sin(test_pi_B.Gain_m);
  rtb_Gain_g = cos(test_pi_B.Integrator_n);
  test_pi_B.Integrator_n = sin(test_pi_B.Integrator_n);
  test_pi_B.Gain_m = (test_pi_B.LSM9DS1IMUSensor_o3[1] * rtb_FilterCoefficient_f
                      * test_pi_B.Integrator_n + test_pi_B.LSM9DS1IMUSensor_o3[0]
                      * cos(test_pi_B.Gain_m)) + test_pi_B.LSM9DS1IMUSensor_o3[2]
    * rtb_FilterCoefficient_f * rtb_Gain_g;

  /* Trigonometry: '<S298>/Trigonometric Function3' incorporates:
   *  Fcn: '<S298>/Fcn'
   *  Gain: '<S298>/Gain'
   */
  test_pi_B.TrigonometricFunction3 = rt_atan2d_snf
    ((test_pi_B.LSM9DS1IMUSensor_o3[1] * rtb_Gain_g +
      test_pi_B.LSM9DS1IMUSensor_o3[2] * test_pi_B.Integrator_n) *
     test_pi_P.Gain_Gain_o, test_pi_B.Gain_m);

  /* Gain: '<S298>/Gain3' */
  test_pi_B.yaw = test_pi_P.Gain3_Gain_a * test_pi_B.TrigonometricFunction3;

  /* Switch: '<S1>/Switch2' incorporates:
   *  Switch: '<S1>/Switch3'
   */
  if (test_pi_B.yaw > test_pi_P.Switch2_Threshold_i) {
    test_pi_B.Gain_m = test_pi_B.yaw;
  } else if (test_pi_B.yaw > test_pi_P.Switch3_Threshold) {
    /* Switch: '<S1>/Switch3' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    test_pi_B.Gain_m = test_pi_P.Constant1_Value;
  } else {
    test_pi_B.Gain_m = test_pi_B.yaw;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* Gain: '<S1>/Gain' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Sum: '<S1>/Sum2'
   */
  test_pi_B.Gain_m = (test_pi_P.Constant2_Value_o - test_pi_B.Gain_m) *
    test_pi_P.Gain_Gain_i;

  /* Gain: '<S266>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S238>/Filter'
   *  Gain: '<S233>/Derivative Gain'
   *  Sum: '<S238>/SumD'
   */
  rtb_FilterCoefficient_f = (test_pi_P.DiscretePIDController2_D *
    test_pi_B.Gain_m - test_pi_DW.Filter_DSTATE_p) *
    test_pi_P.DiscretePIDController2_N;

  /* Sum: '<S286>/Sum' incorporates:
   *  DiscreteIntegrator: '<S256>/Integrator'
   *  Gain: '<S273>/Proportional Gain'
   */
  test_pi_B.Saturation1 = (test_pi_P.DiscretePIDController2_P * test_pi_B.Gain_m
    + test_pi_DW.Integrator_DSTATE_h) + rtb_FilterCoefficient_f;

  /* Saturate: '<S277>/Saturation' */
  if (test_pi_B.Saturation1 > test_pi_P.DiscretePIDController2_UpperSat) {
    /* Sum: '<S286>/Sum' */
    test_pi_B.Saturation1 = test_pi_P.DiscretePIDController2_UpperSat;
  } else {
    if (test_pi_B.Saturation1 < test_pi_P.DiscretePIDController2_LowerSat) {
      /* Sum: '<S286>/Sum' */
      test_pi_B.Saturation1 = test_pi_P.DiscretePIDController2_LowerSat;
    }
  }

  /* End of Saturate: '<S277>/Saturation' */

  /* Saturate: '<S1>/Saturation1' */
  if (test_pi_B.Saturation1 > test_pi_P.Saturation1_UpperSat) {
    /* Sum: '<S286>/Sum' */
    test_pi_B.Saturation1 = test_pi_P.Saturation1_UpperSat;
  } else {
    if (test_pi_B.Saturation1 < test_pi_P.Saturation1_LowerSat) {
      /* Sum: '<S286>/Sum' */
      test_pi_B.Saturation1 = test_pi_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* Gain: '<S4>/Gain' */
  rtb_Gain_g = test_pi_P.Gain_Gain_p * test_pi_B.Saturation1;

  /* Gain: '<Root>/Gain' incorporates:
   *  Sum: '<S4>/Sum'
   */
  test_pi_B.Integrator_n = (test_pi_B.Saturation + rtb_Gain_g) *
    test_pi_P.Gain_Gain_g;

  /* Saturate: '<S604>/Saturation' */
  if (test_pi_B.Integrator_n > test_pi_P.Saturation_UpperSat_c) {
    test_pi_B.Integrator_n = test_pi_P.Saturation_UpperSat_c;
  } else {
    if (test_pi_B.Integrator_n < test_pi_P.Saturation_LowerSat_a) {
      test_pi_B.Integrator_n = test_pi_P.Saturation_LowerSat_a;
    }
  }

  /* End of Saturate: '<S604>/Saturation' */

  /* MATLABSystem: '<S607>/Digital Read' */
  if (test_pi_DW.obj_f.SampleTime != test_pi_P.DigitalRead_SampleTime) {
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime)) {
      test_pi_B.sampleTime = test_pi_P.DigitalRead_SampleTime;
    }

    test_pi_DW.obj_f.SampleTime = test_pi_B.sampleTime;
  }

  rtb_DigitalRead_i_0 = MW_gpioRead(13U);

  /* Switch: '<S605>/Switch4' incorporates:
   *  Constant: '<S605>/Constant'
   *  DataTypeConversion: '<S605>/Data Type Conversion1'
   *  Gain: '<S604>/Gain'
   *  MATLABSystem: '<S607>/Digital Read'
   *  Switch: '<S604>/Switch'
   */
  if ((real_T)rtb_DigitalRead_i_0 > test_pi_P.Switch4_Threshold) {
    test_pi_B.Switch4 = test_pi_P.Constant_Value_ol;
  } else {
    if (test_pi_B.Integrator_n > test_pi_P.Switch_Threshold) {
      /* Switch: '<S604>/Switch' */
      test_pi_B.sampleTime = test_pi_B.Integrator_n;
    } else {
      /* Switch: '<S604>/Switch' incorporates:
       *  Constant: '<S604>/Constant1'
       */
      test_pi_B.sampleTime = test_pi_P.Constant1_Value_o;
    }

    test_pi_B.Switch4 = test_pi_P.Gain_Gain * test_pi_B.sampleTime;
  }

  /* End of Switch: '<S605>/Switch4' */

  /* MATLABSystem: '<Root>/PWM1' */
  if ((test_pi_B.Switch4 >= 0.0) && (test_pi_B.Switch4 <= 1.0)) {
    EXT_PWM_setDutyCycle(test_pi_DW.obj_a.PinNumber, test_pi_B.Switch4);
  }

  /* End of MATLABSystem: '<Root>/PWM1' */

  /* MATLABSystem: '<S608>/Digital Read' */
  if (test_pi_DW.obj_o.SampleTime != test_pi_P.DigitalRead_SampleTime_f) {
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_f)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_f))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_f)) {
      test_pi_B.sampleTime_c = test_pi_P.DigitalRead_SampleTime_f;
    }

    test_pi_DW.obj_o.SampleTime = test_pi_B.sampleTime_c;
  }

  rtb_DigitalRead_i_0 = MW_gpioRead(27U);

  /* Switch: '<S605>/Switch1' incorporates:
   *  Constant: '<S605>/Constant'
   *  DataTypeConversion: '<S605>/Data Type Conversion2'
   *  Gain: '<S604>/Gain1'
   *  MATLABSystem: '<S608>/Digital Read'
   *  Switch: '<S604>/Switch1'
   */
  if ((real_T)rtb_DigitalRead_i_0 > test_pi_P.Switch1_Threshold_of) {
    test_pi_B.Switch1 = test_pi_P.Constant_Value_ol;
  } else {
    if (test_pi_B.Integrator_n > test_pi_P.Switch1_Threshold) {
      /* Switch: '<S604>/Switch1' incorporates:
       *  Constant: '<S604>/Constant2'
       */
      test_pi_B.Integrator_n = test_pi_P.Constant2_Value;
    }

    test_pi_B.Switch1 = test_pi_P.Gain1_Gain * test_pi_B.Integrator_n;
  }

  /* End of Switch: '<S605>/Switch1' */

  /* MATLABSystem: '<Root>/PWM5' */
  if ((test_pi_B.Switch1 >= 0.0) && (test_pi_B.Switch1 <= 1.0)) {
    EXT_PWM_setDutyCycle(test_pi_DW.obj_p.PinNumber, test_pi_B.Switch1);
  }

  /* End of MATLABSystem: '<Root>/PWM5' */

  /* Gain: '<Root>/Gain1' incorporates:
   *  Sum: '<S4>/Sum1'
   */
  test_pi_B.sampleTime_c = (test_pi_B.Saturation - rtb_Gain_g) *
    test_pi_P.Gain1_Gain_o;

  /* Saturate: '<S604>/Saturation1' */
  if (test_pi_B.sampleTime_c > test_pi_P.Saturation1_UpperSat_b) {
    test_pi_B.sampleTime_c = test_pi_P.Saturation1_UpperSat_b;
  } else {
    if (test_pi_B.sampleTime_c < test_pi_P.Saturation1_LowerSat_n) {
      test_pi_B.sampleTime_c = test_pi_P.Saturation1_LowerSat_n;
    }
  }

  /* End of Saturate: '<S604>/Saturation1' */

  /* MATLABSystem: '<S609>/Digital Read' */
  if (test_pi_DW.obj_l.SampleTime != test_pi_P.DigitalRead_SampleTime_n) {
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_n)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_n))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_n)) {
      test_pi_B.sampleTime_k = test_pi_P.DigitalRead_SampleTime_n;
    }

    test_pi_DW.obj_l.SampleTime = test_pi_B.sampleTime_k;
  }

  rtb_DigitalRead_i_0 = MW_gpioRead(19U);

  /* Switch: '<S606>/Switch5' incorporates:
   *  Constant: '<S606>/Constant'
   *  DataTypeConversion: '<S606>/Data Type Conversion1'
   *  Gain: '<S604>/Gain2'
   *  MATLABSystem: '<S609>/Digital Read'
   *  Switch: '<S604>/Switch2'
   */
  if ((real_T)rtb_DigitalRead_i_0 > test_pi_P.Switch5_Threshold) {
    test_pi_B.Switch5 = test_pi_P.Constant_Value_h;
  } else {
    if (test_pi_B.sampleTime_c > test_pi_P.Switch2_Threshold) {
      /* Switch: '<S604>/Switch2' */
      test_pi_B.sampleTime_k = test_pi_B.sampleTime_c;
    } else {
      /* Switch: '<S604>/Switch2' incorporates:
       *  Constant: '<S604>/Constant3'
       */
      test_pi_B.sampleTime_k = test_pi_P.Constant3_Value;
    }

    test_pi_B.Switch5 = test_pi_P.Gain2_Gain * test_pi_B.sampleTime_k;
  }

  /* End of Switch: '<S606>/Switch5' */

  /* MATLABSystem: '<Root>/PWM4' */
  if ((test_pi_B.Switch5 >= 0.0) && (test_pi_B.Switch5 <= 1.0)) {
    EXT_PWM_setDutyCycle(test_pi_DW.obj_b.PinNumber, test_pi_B.Switch5);
  }

  /* End of MATLABSystem: '<Root>/PWM4' */

  /* MATLABSystem: '<S610>/Digital Read' */
  if (test_pi_DW.obj_c.SampleTime != test_pi_P.DigitalRead_SampleTime_k) {
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_k)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_k))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_k)) {
      test_pi_B.sampleTime_cx = test_pi_P.DigitalRead_SampleTime_k;
    }

    test_pi_DW.obj_c.SampleTime = test_pi_B.sampleTime_cx;
  }

  rtb_DigitalRead_i_0 = MW_gpioRead(26U);

  /* Switch: '<S606>/Switch2' incorporates:
   *  Constant: '<S606>/Constant'
   *  DataTypeConversion: '<S606>/Data Type Conversion2'
   *  Gain: '<S604>/Gain3'
   *  MATLABSystem: '<S610>/Digital Read'
   *  Switch: '<S604>/Switch3'
   */
  if ((real_T)rtb_DigitalRead_i_0 > test_pi_P.Switch2_Threshold_f) {
    test_pi_B.Switch2 = test_pi_P.Constant_Value_h;
  } else {
    if (test_pi_B.sampleTime_c > test_pi_P.Switch3_Threshold_e) {
      /* Switch: '<S604>/Switch3' incorporates:
       *  Constant: '<S604>/Constant4'
       */
      test_pi_B.sampleTime_c = test_pi_P.Constant4_Value;
    }

    test_pi_B.Switch2 = test_pi_P.Gain3_Gain * test_pi_B.sampleTime_c;
  }

  /* End of Switch: '<S606>/Switch2' */

  /* MATLABSystem: '<Root>/PWM7' */
  if ((test_pi_B.Switch2 >= 0.0) && (test_pi_B.Switch2 <= 1.0)) {
    EXT_PWM_setDutyCycle(test_pi_DW.obj_bm.PinNumber, test_pi_B.Switch2);
  }

  /* End of MATLABSystem: '<Root>/PWM7' */
  /* Sum: '<S299>/Sum5' incorporates:
   *  DiscreteIntegrator: '<S299>/Discrete-Time Integrator2'
   *  Gain: '<S298>/Gain12'
   *  Gain: '<S299>/Gain5'
   *  Gain: '<S299>/Gain8'
   *  Trigonometry: '<S298>/Trigonometric Function2'
   */
  test_pi_B.Sum5 = test_pi_P.Gain12_Gain * rt_atan2d_snf
    (test_pi_B.LSM9DS1IMUSensor_o2[0], test_pi_B.LSM9DS1IMUSensor_o2[1]) *
    test_pi_P.Gain8_Gain + test_pi_P.Gain5_Gain *
    test_pi_DW.DiscreteTimeIntegrator2_DSTATE;

  /* Update for DiscreteIntegrator: '<S299>/Discrete-Time Integrator1' */
  test_pi_DW.DiscreteTimeIntegrator1_DSTATE +=
    test_pi_P.DiscreteTimeIntegrator1_gainval * test_pi_B.LSM9DS1IMUSensor_o1[1];

  /* Update for DiscreteIntegrator: '<S64>/Integrator' incorporates:
   *  Gain: '<S54>/Integral Gain'
   */
  test_pi_DW.Integrator_DSTATE += test_pi_P.DiscretePIDController_I * rtb_Sum_e *
    test_pi_P.Integrator_gainval;

  /* Update for DiscreteIntegrator: '<S46>/Filter' */
  test_pi_DW.Filter_DSTATE += test_pi_P.Filter_gainval * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S299>/Discrete-Time Integrator' */
  test_pi_DW.DiscreteTimeIntegrator_DSTATE +=
    test_pi_P.DiscreteTimeIntegrator_gainval * test_pi_B.LSM9DS1IMUSensor_o1[0];

  /* Update for DiscreteIntegrator: '<S256>/Integrator' incorporates:
   *  Gain: '<S246>/Integral Gain'
   */
  test_pi_DW.Integrator_DSTATE_h += test_pi_P.DiscretePIDController2_I *
    test_pi_B.Gain_m * test_pi_P.Integrator_gainval_j;

  /* Update for DiscreteIntegrator: '<S238>/Filter' */
  test_pi_DW.Filter_DSTATE_p += test_pi_P.Filter_gainval_l *
    rtb_FilterCoefficient_f;

  /* Update for DiscreteIntegrator: '<S299>/Discrete-Time Integrator2' */
  test_pi_DW.DiscreteTimeIntegrator2_DSTATE +=
    test_pi_P.DiscreteTimeIntegrator2_gainval * test_pi_B.LSM9DS1IMUSensor_o1[2];

  /* External mode */
  rtExtModeUploadCheckTrigger(2);
  rtExtModeUpload(0, (real_T)test_pi_M->Timing.taskTime0);

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(test_pi_M)!=-1) &&
        !((rtmGetTFinal(test_pi_M)-test_pi_M->Timing.taskTime0) >
          test_pi_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_pi_M, "Simulation finished");
    }

    if (rtmGetStopRequested(test_pi_M)) {
      rtmSetErrorStatus(test_pi_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  test_pi_M->Timing.taskTime0 =
    (++test_pi_M->Timing.clockTick0) * test_pi_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void test_pi_step1(void)               /* Sample time: [1.0s, 0.0s] */
{
  real_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (test_pi_DW.clockTickCounter <
                        test_pi_P.PulseGenerator_Duty) &&
    (test_pi_DW.clockTickCounter >= 0) ? test_pi_P.PulseGenerator_Amp : 0.0;
  if (test_pi_DW.clockTickCounter >= test_pi_P.PulseGenerator_Period - 1.0) {
    test_pi_DW.clockTickCounter = 0;
  } else {
    test_pi_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* S-Function (linuxLedWrite_sfcn): '<Root>/LED' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  MW_ledWrite(test_pi_P.LED_p1, rtb_PulseGenerator != 0.0);
  rtExtModeUpload(1, (real_T)((test_pi_M->Timing.clockTick1) * 1.0));

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  test_pi_M->Timing.clockTick1++;
}

/* Model step wrapper function for compatibility with a static main program */
void test_pi_step(int_T tid)
{
  switch (tid) {
   case 0 :
    test_pi_step0();
    break;

   case 1 :
    test_pi_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void test_pi_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test_pi_M, 0,
                sizeof(RT_MODEL_test_pi_T));
  rtmSetTFinal(test_pi_M, -1);
  test_pi_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  test_pi_M->Sizes.checksums[0] = (1616638670U);
  test_pi_M->Sizes.checksums[1] = (3487818062U);
  test_pi_M->Sizes.checksums[2] = (4036957755U);
  test_pi_M->Sizes.checksums[3] = (222006060U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[20];
    test_pi_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test_pi_M->extModeInfo,
      &test_pi_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test_pi_M->extModeInfo, test_pi_M->Sizes.checksums);
    rteiSetTPtr(test_pi_M->extModeInfo, rtmGetTPtr(test_pi_M));
  }

  /* block I/O */
  (void) memset(((void *) &test_pi_B), 0,
                sizeof(B_test_pi_T));

  /* states (dwork) */
  (void) memset((void *)&test_pi_DW, 0,
                sizeof(DW_test_pi_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    test_pi_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    raspi_internal_lsm9ds1Block_t_T *obj;
    uint32_T i2cname;
    uint8_T b_SwappedDataBytes[2];
    uint8_T SwappedDataBytes[2];
    uint8_T CastedData;
    real_T sampleTime;
    int32_T ret;
    real_T sampleTime_0;
    real_T sampleTime_1;
    real_T sampleTime_2;
    static const char_T tmp[45] = { 'U', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o',
      ' ', 'c', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'e', ' ', 'p', 'i', 'n', ' ',
      '%', 'u', ' ', 'f', 'o', 'r', ' ', 'P', 'W', 'M', ' ', 'o', 'u', 't', 'p',
      'u', 't', '.', '\\', 'n', '\x00' };

    static const int8_T tmp_0[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

    /* Start for MATLABSystem: '<S298>/LSM9DS1 IMU Sensor' */
    test_pi_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
    test_pi_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
    test_pi_DW.obj.matlabCodegenIsDeleted = true;
    obj = &test_pi_DW.obj;
    for (ret = 0; ret < 9; ret++) {
      test_pi_DW.obj.CalGyroA[ret] = tmp_0[ret];
    }

    test_pi_DW.obj.CalGyroB[0] = 0.0;
    test_pi_DW.obj.CalGyroB[1] = 0.0;
    test_pi_DW.obj.CalGyroB[2] = 0.0;
    for (ret = 0; ret < 9; ret++) {
      test_pi_DW.obj.CalAccelA[ret] = tmp_0[ret];
    }

    test_pi_DW.obj.CalAccelB[0] = 0.0;
    test_pi_DW.obj.CalAccelB[1] = 0.0;
    test_pi_DW.obj.CalAccelB[2] = 0.0;
    for (ret = 0; ret < 9; ret++) {
      test_pi_DW.obj.CalMagA[ret] = tmp_0[ret];
    }

    test_pi_DW.obj.CalMagB[0] = 0.0;
    test_pi_DW.obj.CalMagB[1] = 0.0;
    test_pi_DW.obj.CalMagB[2] = 0.0;
    test_pi_DW.obj.isInitialized = 0;
    obj->i2cobj_A_G.isInitialized = 0;
    obj->i2cobj_A_G.matlabCodegenIsDeleted = false;
    obj->i2cobj_MAG.isInitialized = 0;
    obj->i2cobj_MAG.matlabCodegenIsDeleted = false;
    test_pi_DW.obj.matlabCodegenIsDeleted = false;
    obj = &test_pi_DW.obj;
    test_pi_DW.obj.isSetupComplete = false;
    test_pi_DW.obj.isInitialized = 1;
    i2cname = 1;
    obj->i2cobj_A_G.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    obj->i2cobj_A_G.BusSpeed = 100000U;
    MW_I2C_SetBusSpeed(obj->i2cobj_A_G.MW_I2C_HANDLE, obj->i2cobj_A_G.BusSpeed);
    CastedData = 96U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 16U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 17U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 73U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 18U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 56U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 30U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 19U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 56U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 31U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 103U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 32U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 33U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 4U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 34U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                       false, false);
    i2cname = 1;
    obj->i2cobj_MAG.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    obj->i2cobj_MAG.BusSpeed = 100000U;
    MW_I2C_SetBusSpeed(obj->i2cobj_MAG.MW_I2C_HANDLE, obj->i2cobj_MAG.BusSpeed);
    CastedData = 24U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 32U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 33U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 34U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 35U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 36U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                       false, false);
    test_pi_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S298>/LSM9DS1 IMU Sensor' */

    /* Start for MATLABSystem: '<S607>/Digital Read' */
    test_pi_DW.obj_f.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_f.isInitialized = 0;
    test_pi_DW.obj_f.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime)) {
      sampleTime = test_pi_P.DigitalRead_SampleTime;
    }

    test_pi_DW.obj_f.SampleTime = sampleTime;
    test_pi_DW.obj_f.isSetupComplete = false;
    test_pi_DW.obj_f.isInitialized = 1;
    MW_gpioInit(13U, false);
    test_pi_DW.obj_f.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S607>/Digital Read' */

    /* Start for MATLABSystem: '<Root>/PWM1' */
    test_pi_DW.obj_a.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_a.isInitialized = 0;
    test_pi_DW.obj_a.matlabCodegenIsDeleted = false;
    test_pi_DW.obj_a.isSetupComplete = false;
    test_pi_DW.obj_a.isInitialized = 1;
    test_pi_DW.obj_a.PinNumber = 12U;
    ret = EXT_PWM_init(test_pi_DW.obj_a.PinNumber, 1000U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        test_pi_B.cv0[ret] = tmp[ret];
      }

      printf(test_pi_B.cv0, test_pi_DW.obj_a.PinNumber);
    }

    test_pi_DW.obj_a.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/PWM1' */

    /* Start for MATLABSystem: '<S608>/Digital Read' */
    test_pi_DW.obj_o.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_o.isInitialized = 0;
    test_pi_DW.obj_o.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_f)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_f))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_f)) {
      sampleTime_0 = test_pi_P.DigitalRead_SampleTime_f;
    }

    test_pi_DW.obj_o.SampleTime = sampleTime_0;
    test_pi_DW.obj_o.isSetupComplete = false;
    test_pi_DW.obj_o.isInitialized = 1;
    MW_gpioInit(27U, false);
    test_pi_DW.obj_o.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S608>/Digital Read' */

    /* Start for MATLABSystem: '<Root>/PWM5' */
    test_pi_DW.obj_p.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_p.isInitialized = 0;
    test_pi_DW.obj_p.matlabCodegenIsDeleted = false;
    test_pi_DW.obj_p.isSetupComplete = false;
    test_pi_DW.obj_p.isInitialized = 1;
    test_pi_DW.obj_p.PinNumber = 25U;
    ret = EXT_PWM_init(test_pi_DW.obj_p.PinNumber, 1000U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        test_pi_B.cv0[ret] = tmp[ret];
      }

      printf(test_pi_B.cv0, test_pi_DW.obj_p.PinNumber);
    }

    test_pi_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/PWM5' */

    /* Start for MATLABSystem: '<S609>/Digital Read' */
    test_pi_DW.obj_l.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_l.isInitialized = 0;
    test_pi_DW.obj_l.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_n)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_n))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_n)) {
      sampleTime_1 = test_pi_P.DigitalRead_SampleTime_n;
    }

    test_pi_DW.obj_l.SampleTime = sampleTime_1;
    test_pi_DW.obj_l.isSetupComplete = false;
    test_pi_DW.obj_l.isInitialized = 1;
    MW_gpioInit(19U, false);
    test_pi_DW.obj_l.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S609>/Digital Read' */

    /* Start for MATLABSystem: '<Root>/PWM4' */
    test_pi_DW.obj_b.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_b.isInitialized = 0;
    test_pi_DW.obj_b.matlabCodegenIsDeleted = false;
    test_pi_DW.obj_b.isSetupComplete = false;
    test_pi_DW.obj_b.isInitialized = 1;
    test_pi_DW.obj_b.PinNumber = 24U;
    ret = EXT_PWM_init(test_pi_DW.obj_b.PinNumber, 1000U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        test_pi_B.cv0[ret] = tmp[ret];
      }

      printf(test_pi_B.cv0, test_pi_DW.obj_b.PinNumber);
    }

    test_pi_DW.obj_b.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/PWM4' */

    /* Start for MATLABSystem: '<S610>/Digital Read' */
    test_pi_DW.obj_c.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_c.isInitialized = 0;
    test_pi_DW.obj_c.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(test_pi_P.DigitalRead_SampleTime_k)) && (!rtIsNaN
          (test_pi_P.DigitalRead_SampleTime_k))) || rtIsInf
        (test_pi_P.DigitalRead_SampleTime_k)) {
      sampleTime_2 = test_pi_P.DigitalRead_SampleTime_k;
    }

    test_pi_DW.obj_c.SampleTime = sampleTime_2;
    test_pi_DW.obj_c.isSetupComplete = false;
    test_pi_DW.obj_c.isInitialized = 1;
    MW_gpioInit(26U, false);
    test_pi_DW.obj_c.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S610>/Digital Read' */

    /* Start for MATLABSystem: '<Root>/PWM7' */
    test_pi_DW.obj_bm.matlabCodegenIsDeleted = true;
    test_pi_DW.obj_bm.isInitialized = 0;
    test_pi_DW.obj_bm.matlabCodegenIsDeleted = false;
    test_pi_DW.obj_bm.isSetupComplete = false;
    test_pi_DW.obj_bm.isInitialized = 1;
    test_pi_DW.obj_bm.PinNumber = 23U;
    ret = EXT_PWM_init(test_pi_DW.obj_bm.PinNumber, 1000U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        test_pi_B.cv0[ret] = tmp[ret];
      }

      printf(test_pi_B.cv0, test_pi_DW.obj_bm.PinNumber);
    }

    test_pi_DW.obj_bm.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/PWM7' */
    /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
    test_pi_DW.clockTickCounter = 0;

    /* Start for S-Function (linuxLedWrite_sfcn): '<Root>/LED' */
    MW_ledInit(test_pi_P.LED_p1);

    /* InitializeConditions for DiscreteIntegrator: '<S299>/Discrete-Time Integrator1' */
    test_pi_DW.DiscreteTimeIntegrator1_DSTATE =
      test_pi_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S64>/Integrator' */
    test_pi_DW.Integrator_DSTATE = test_pi_P.DiscretePIDController_Initial_e;

    /* InitializeConditions for DiscreteIntegrator: '<S46>/Filter' */
    test_pi_DW.Filter_DSTATE = test_pi_P.DiscretePIDController_InitialCo;

    /* InitializeConditions for DiscreteIntegrator: '<S299>/Discrete-Time Integrator' */
    test_pi_DW.DiscreteTimeIntegrator_DSTATE =
      test_pi_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S256>/Integrator' */
    test_pi_DW.Integrator_DSTATE_h = test_pi_P.DiscretePIDController2_Initia_d;

    /* InitializeConditions for DiscreteIntegrator: '<S238>/Filter' */
    test_pi_DW.Filter_DSTATE_p = test_pi_P.DiscretePIDController2_InitialC;

    /* InitializeConditions for DiscreteIntegrator: '<S299>/Discrete-Time Integrator2' */
    test_pi_DW.DiscreteTimeIntegrator2_DSTATE =
      test_pi_P.DiscreteTimeIntegrator2_IC;
  }
}

/* Model terminate function */
void test_pi_terminate(void)
{
  /* Terminate for MATLABSystem: '<S298>/LSM9DS1 IMU Sensor' */
  matlabCodegenHandle_matlab_auki(&test_pi_DW.obj);
  matlabCodegenHandle_matla_aukis(&test_pi_DW.obj.i2cobj_A_G);
  matlabCodegenHandle_matl_aukisa(&test_pi_DW.obj.i2cobj_MAG);

  /* Terminate for MATLABSystem: '<S607>/Digital Read' */
  matlabCodegenHandle_mat_aukisa0(&test_pi_DW.obj_f);

  /* Terminate for MATLABSystem: '<Root>/PWM1' */
  matlabCodegenHandle_matlabCodeg(&test_pi_DW.obj_a);

  /* Terminate for MATLABSystem: '<S608>/Digital Read' */
  matlabCodegenHandle_ma_aukisa00(&test_pi_DW.obj_o);

  /* Terminate for MATLABSystem: '<Root>/PWM5' */
  matlabCodegenHandle_matlabCodeg(&test_pi_DW.obj_p);

  /* Terminate for MATLABSystem: '<S609>/Digital Read' */
  matlabCodegenHandle_m_aukisa000(&test_pi_DW.obj_l);

  /* Terminate for MATLABSystem: '<Root>/PWM4' */
  matlabCodegenHandle_matlabCodeg(&test_pi_DW.obj_b);

  /* Terminate for MATLABSystem: '<S610>/Digital Read' */
  matlabCodegenHandle__aukisa0003(&test_pi_DW.obj_c);

  /* Terminate for MATLABSystem: '<Root>/PWM7' */
  matlabCodegenHandle_matlabCodeg(&test_pi_DW.obj_bm);

  /* Terminate for S-Function (linuxLedWrite_sfcn): '<Root>/LED' */
  MW_ledTerminate(test_pi_P.LED_p1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
