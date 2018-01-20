/*
 * File: GEN_Func_Hxdt.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 01:36:29
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "GEN_Func_Hxdt.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * GEN_FUNC_HXDT
 *     OUT1 = GEN_FUNC_HXDT(IN1,IN2)
 * Arguments    : const double in1[15]
 *                const double in2[8]
 *                double out1[6]
 * Return Type  : void
 */
void GEN_Func_Hxdt(const double in1[15], const double in2[8], double out1[6])
{
  double t2;
  double t3;
  double t5;
  double t4;
  double t6;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t13;
  double t16;
  double t17;
  double t18;
  double t21;
  double t25;
  double t22;
  double t23;
  double t26;
  double t27;
  double t28;
  double t29;
  double t30;
  double t31;
  double t32;
  double t33;
  double t34;
  double t35;
  double t43;
  double t44;
  double t52;
  double t60;

  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 01:32:01 */
  t2 = cos(in1[9]);
  t3 = cos(in1[10]);
  t5 = in1[9] - in1[10];
  t4 = cos(t5);
  t6 = t2 * t2;
  t7 = sin(in1[9]);
  t8 = t4 * t4;
  t9 = sin(t5);
  t10 = t7 * t7;
  t11 = sin(in1[10]);
  t13 = t3 * t3;
  t16 = (((t6 * 972.0 + t13 * 345.0) + t8 * 1035.0) - t2 * t3 * t4 * 810.0) -
    2116.0;
  t17 = 1.0 / t16;
  t18 = t9 * t9;
  t21 = t4 * t9 * 2070.0;
  t25 = t2 * t3 * t9 * 810.0;
  t22 = ((t2 * t7 * 1944.0 + t21) - t3 * t4 * t7 * 810.0) - t25;
  t23 = 1.0 / (t16 * t16);
  t26 = t9 * t11 * 225630.0;
  t27 = t18 * in1[12] * in1[13] * 6900.0;
  t28 = t11 * t11;
  t29 = t18 * in1[13] * in1[14] * 15525.0;
  t30 = t2 * t9 * in1[7] * 54000.0;
  t31 = t4 * t7 * t11 * 794610.0;
  t32 = t2 * t9 * t11 * 794610.0;
  t33 = t3 * t7 * t9 * 794610.0;
  t34 = t3 * t4 * in1[12] * in1[13] * 20700.0;
  t35 = t2 * t18 * in1[12] * in1[13] * 24300.0;
  t43 = ((((((((((((t7 * 541512.0 + t2 * t3 * t11 * 88290.0) + t3 * t4 * in1[7] *
                   10000.0) + t9 * t13 * in1[13] * in1[14] * 1125.0) + t3 * t4 *
                 t7 * in1[12] * in1[13] * 2700.0) + t2 * t3 * t9 * in1[12] *
                in1[13] * 2700.0) + t3 * t4 * t11 * in1[13] * in1[14] * 1125.0)
              - t4 * t11 * 225630.0) - t7 * t13 * 88290.0) - t2 * in1[7] *
            24000.0) - t9 * in1[13] * in1[14] * 6900.0) - t2 * t7 * in1[12] *
          in1[13] * 6480.0) - t4 * t9 * in1[12] * in1[13] * 6900.0) - t2 * t11 *
    in1[13] * in1[14] * 2700.0;
  t44 = t2 * t4 * t11 * 810.0;
  t52 = ((((((((((((t11 * 1.037898E+6 + t2 * t3 * t7 * 476766.0) + t9 * in1[12] *
                   in1[13] * 31740.0) + t2 * t4 * in1[7] * 54000.0) + t4 * t9 *
                 in1[13] * in1[14] * 15525.0) + t2 * t4 * t7 * in1[12] * in1[13]
                * 14580.0) + t2 * t4 * t11 * in1[13] * in1[14] * 6075.0) - t4 *
              t7 * 1.218402E+6) - t6 * t11 * 476766.0) - t3 * in1[7] * 46000.0)
           - t3 * t7 * in1[12] * in1[13] * 12420.0) - t6 * t9 * in1[12] * in1[13]
          * 14580.0) - t3 * t11 * in1[13] * in1[14] * 5175.0) - t2 * t3 * t9 *
    in1[13] * in1[14] * 6075.0;
  t60 = ((((((((((((in1[7] * 184000.0 + t2 * t4 * t11 * 794610.0) + t3 * t4 * t7
                   * 794610.0) + t7 * in1[12] * in1[13] * 49680.0) + t11 * in1
                 [13] * in1[14] * 20700.0) + t2 * t9 * in1[13] * in1[14] *
                24300.0) + t2 * t4 * t9 * in1[12] * in1[13] * 24300.0) - t2 * t7
              * 1.907064E+6) - t3 * t11 * 676890.0) - t8 * in1[7] * 90000.0) -
           t3 * t9 * in1[12] * in1[13] * 20700.0) - t7 * t8 * in1[12] * in1[13] *
          24300.0) - t8 * t11 * in1[13] * in1[14] * 10125.0) - t3 * t4 * t9 *
    in1[13] * in1[14] * 10125.0;
  out1[0] = (((((in2[0] * in1[9] * 0.041666666666666664 + in1[5] * t17 *
                 ((((((((((((((((t29 + t30) + t2 * t4 * 1.218402E+6) - t3 * t6 *
    476766.0) + t3 * t10 * 476766.0) - t7 * t9 * 1.218402E+6) - t2 * t7 * t11 *
    953532.0) + t4 * t7 * in1[7] * 54000.0) - t4 * in1[12] * in1[13] * 31740.0)
    - t8 * in1[13] * in1[14] * 15525.0) + t2 * t3 * in1[12] * in1[13] * 12420.0)
                       + t4 * t10 * in1[12] * in1[13] * 14580.0) + t2 * t3 * t4 *
                      in1[13] * in1[14] * 6075.0) - t2 * t7 * t9 * in1[12] *
                     in1[13] * 14580.0) - t3 * t7 * t9 * in1[13] * in1[14] *
                    6075.0) + t2 * t9 * t11 * in1[13] * in1[14] * 6075.0) + t4 *
                  t7 * t11 * in1[13] * in1[14] * 6075.0) * 0.0027777777777777779)
                - in1[4] * t17 * (((((((((((((((t2 * 541512.0 + t26) + t27) - t2
    * t13 * 88290.0) + t7 * in1[7] * 24000.0) - t3 * t7 * t11 * 88290.0) - t3 *
    t9 * in1[7] * 10000.0) - t4 * in1[13] * in1[14] * 6900.0) - t6 * in1[12] *
    in1[13] * 6480.0) - t8 * in1[12] * in1[13] * 6900.0) + t10 * in1[12] * in1
    [13] * 6480.0) + t4 * t13 * in1[13] * in1[14] * 1125.0) + t7 * t11 * in1[13]
    * in1[14] * 2700.0) + t2 * t3 * t4 * in1[12] * in1[13] * 5400.0) - t3 * t7 *
    t9 * in1[12] * in1[13] * 5400.0) - t3 * t9 * t11 * in1[13] * in1[14] *
    1125.0) * 0.00625) + in1[3] * t17 * (((((((((((((((t6 * 1.907064E+6 - t10 *
    1.907064E+6) + t31) + t32) + t33) + t34) + t35) - t2 * t3 * t4 * 794610.0) -
    t4 * t9 * in1[7] * 180000.0) - t2 * in1[12] * in1[13] * 49680.0) - t2 * t4 *
    in1[13] * in1[14] * 24300.0) + t3 * t8 * in1[13] * in1[14] * 10125.0) + t7 *
    t9 * in1[13] * in1[14] * 24300.0) - t3 * t18 * in1[13] * in1[14] * 10125.0)
    - t4 * t7 * t9 * in1[12] * in1[13] * 24300.0) - t4 * t9 * t11 * in1[13] *
    in1[14] * 20250.0) * 0.00020833333333333329) - in1[4] * t22 * t23 * t43 *
              0.00625) - in1[5] * t22 * t23 * t52 * 0.0027777777777777779) -
    in1[3] * t22 * t23 * t60 * 0.00020833333333333329;
  out1[1] = (((((in2[1] * in1[10] * 0.041666666666666664 - in1[5] * t17 *
                 (((((((((((((((t3 * 1.037898E+6 + t29) + t30) - t3 * t6 *
    476766.0) - t7 * t9 * 1.218402E+6) + t11 * in1[7] * 46000.0) - t2 * t7 * t11
    * 476766.0) - t4 * in1[12] * in1[13] * 31740.0) - t8 * in1[13] * in1[14] *
    15525.0) - t13 * in1[13] * in1[14] * 5175.0) + t28 * in1[13] * in1[14] *
                       5175.0) + t4 * t6 * in1[12] * in1[13] * 14580.0) + t7 *
                     t11 * in1[12] * in1[13] * 12420.0) + t2 * t3 * t4 * in1[13]
                    * in1[14] * 12150.0) + t2 * t7 * t9 * in1[12] * in1[13] *
                   14580.0) + t2 * t9 * t11 * in1[13] * in1[14] * 12150.0) *
                 0.0027777777777777779) + in1[3] * t17 * (((((((((((((((t13 *
    676890.0 - t28 * 676890.0) + t31) - t32) - t33) - t34) - t35) - t2 * t3 * t4
    * 794610.0) + t4 * t9 * in1[7] * 180000.0) - t3 * in1[13] * in1[14] *
    20700.0) + t2 * t4 * in1[13] * in1[14] * 24300.0) + t2 * t8 * in1[12] * in1
    [13] * 24300.0) - t9 * t11 * in1[12] * in1[13] * 20700.0) + t3 * t18 * in1
    [13] * in1[14] * 10125.0) + t4 * t7 * t9 * in1[12] * in1[13] * 48600.0) + t4
    * t9 * t11 * in1[13] * in1[14] * 10125.0) * 0.00020833333333333329) + in1[4]
               * t17 * ((((((((((((((((t26 + t27) + t3 * t4 * 225630.0) - t2 *
    t13 * 88290.0) + t2 * t28 * 88290.0) - t3 * t7 * t11 * 176580.0) - t3 * t9 *
    in1[7] * 10000.0) + t4 * t11 * in1[7] * 10000.0) - t4 * in1[13] * in1[14] *
    6900.0) - t8 * in1[12] * in1[13] * 6900.0) + t2 * t3 * in1[13] * in1[14] *
    2700.0) + t4 * t28 * in1[13] * in1[14] * 1125.0) + t2 * t3 * t4 * in1[12] *
    in1[13] * 2700.0) - t3 * t7 * t9 * in1[12] * in1[13] * 2700.0) + t2 * t9 *
    t11 * in1[12] * in1[13] * 2700.0) + t4 * t7 * t11 * in1[12] * in1[13] *
    2700.0) + t3 * t9 * t11 * in1[13] * in1[14] * 1125.0) * 0.00625) + in1[4] *
              t23 * t43 * (((t21 - t25) + t44) - t3 * t11 * 690.0) * 0.00625) +
             in1[5] * t23 * t52 * (((t21 - t25) + t44) - t3 * t11 * 690.0) *
             0.0027777777777777779) + in1[3] * t23 * t60 * (((t21 - t25) + t44)
    - t3 * t11 * 690.0) * 0.00020833333333333329;
  out1[2] = in2[2] * in1[11] * 0.041666666666666664;
  out1[3] = (((in1[0] * 0.041666666666666664 + in2[3] * in1[12] *
               0.041666666666666664) + in1[4] * t17 * (((t2 * t7 * in1[13] *
    6480.0 + t4 * t9 * in1[13] * 6900.0) - t2 * t3 * t9 * in1[13] * 2700.0) - t3
    * t4 * t7 * in1[13] * 2700.0) * 0.00625) - in1[5] * t17 * (((t9 * in1[13] *
    31740.0 - t3 * t7 * in1[13] * 12420.0) - t6 * t9 * in1[13] * 14580.0) + t2 *
              t4 * t7 * in1[13] * 14580.0) * 0.0027777777777777779) - in1[3] *
    t17 * (((t7 * in1[13] * 49680.0 - t3 * t9 * in1[13] * 20700.0) - t7 * t8 *
            in1[13] * 24300.0) + t2 * t4 * t9 * in1[13] * 24300.0) *
    0.00020833333333333329;
  out1[4] = (((in1[1] * 0.041666666666666664 + in2[4] * in1[13] *
               0.041666666666666664) + in1[4] * t17 * (((((((t9 * in1[14] *
    6900.0 + t2 * t7 * in1[12] * 6480.0) + t4 * t9 * in1[12] * 6900.0) + t2 *
    t11 * in1[14] * 2700.0) - t9 * t13 * in1[14] * 1125.0) - t2 * t3 * t9 * in1
    [12] * 2700.0) - t3 * t4 * t7 * in1[12] * 2700.0) - t3 * t4 * t11 * in1[14] *
    1125.0) * 0.00625) - in1[5] * t17 * (((((((t9 * in1[12] * 31740.0 - t3 * t7 *
    in1[12] * 12420.0) + t4 * t9 * in1[14] * 15525.0) - t6 * t9 * in1[12] *
    14580.0) - t3 * t11 * in1[14] * 5175.0) + t2 * t4 * t7 * in1[12] * 14580.0)
    - t2 * t3 * t9 * in1[14] * 6075.0) + t2 * t4 * t11 * in1[14] * 6075.0) *
             0.0027777777777777779) - in1[3] * t17 * (((((((t7 * in1[12] *
    49680.0 + t11 * in1[14] * 20700.0) - t3 * t9 * in1[12] * 20700.0) + t2 * t9 *
    in1[14] * 24300.0) - t7 * t8 * in1[12] * 24300.0) - t8 * t11 * in1[14] *
    10125.0) + t2 * t4 * t9 * in1[12] * 24300.0) - t3 * t4 * t9 * in1[14] *
    10125.0) * 0.00020833333333333329;
  out1[5] = (((in1[2] * 0.041666666666666664 + in2[5] * in1[14] *
               0.041666666666666664) - in1[5] * t17 * (((t4 * t9 * in1[13] *
    15525.0 - t3 * t11 * in1[13] * 5175.0) - t2 * t3 * t9 * in1[13] * 6075.0) +
    t2 * t4 * t11 * in1[13] * 6075.0) * 0.0027777777777777779) + in1[4] * t17 *
             (((t9 * in1[13] * 6900.0 + t2 * t11 * in1[13] * 2700.0) - t9 * t13 *
               in1[13] * 1125.0) - t3 * t4 * t11 * in1[13] * 1125.0) * 0.00625)
    - in1[3] * t17 * (((t11 * in1[13] * 20700.0 + t2 * t9 * in1[13] * 24300.0) -
                       t8 * t11 * in1[13] * 10125.0) - t3 * t4 * t9 * in1[13] *
                      10125.0) * 0.00020833333333333329;
}

/*
 * File trailer for GEN_Func_Hxdt.c
 *
 * [EOF]
 */
