/*
 * File: GEN_Func_fx_I.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 01:36:29
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "GEN_Func_fx_I.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * GEN_FUNC_FX_I
 *     FX_I = GEN_FUNC_FX_I(IN1,IN2)
 * Arguments    : const double in1[15]
 *                double fx_I[36]
 * Return Type  : void
 */
void GEN_Func_fx_I(const double in1[15], double fx_I[36])
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
  double t18;
  double t19;
  double t20;
  double t21;
  double t22;
  double t23;
  double t24;
  double t25;
  double t33;
  double t34;
  double t41;
  double t36;
  double t37;
  double t38;
  double t39;
  double t40;
  double t49;
  double t51;
  double t52;
  double t60;
  double x[36];

  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 01:32:05 */
  t2 = cos(in1[9]);
  t3 = cos(in1[10]);
  t5 = in1[9] - in1[10];
  t4 = cos(t5);
  t6 = t2 * t2;
  t7 = sin(in1[9]);
  t8 = sin(t5);
  t9 = sin(in1[10]);
  t10 = t4 * t4;
  t11 = t8 * t8;
  t13 = t3 * t3;
  t16 = (((t6 * 972.0 + t13 * 345.0) + t10 * 1035.0) - t2 * t3 * t4 * 810.0) -
    2116.0;
  t18 = 1.0 / t16;
  t19 = t4 * t7 * t9 * 794610.0;
  t20 = t2 * t8 * t9 * 794610.0;
  t21 = t3 * t7 * t8 * 794610.0;
  t22 = t3 * t4 * in1[12] * in1[13] * 20700.0;
  t23 = t2 * t11 * in1[12] * in1[13] * 24300.0;
  t24 = t4 * t8 * 2070.0;
  t25 = 1.0 / (t16 * t16);
  t33 = ((((((((((((in1[7] * 184000.0 + t2 * t4 * t9 * 794610.0) + t3 * t4 * t7 *
                   794610.0) + t7 * in1[12] * in1[13] * 49680.0) + t9 * in1[13] *
                 in1[14] * 20700.0) + t2 * t8 * in1[13] * in1[14] * 24300.0) +
               t2 * t4 * t8 * in1[12] * in1[13] * 24300.0) - t2 * t7 *
              1.907064E+6) - t3 * t9 * 676890.0) - t10 * in1[7] * 90000.0) - t3 *
           t8 * in1[12] * in1[13] * 20700.0) - t7 * t10 * in1[12] * in1[13] *
          24300.0) - t9 * t10 * in1[13] * in1[14] * 10125.0) - t3 * t4 * t8 *
    in1[13] * in1[14] * 10125.0;
  t34 = t7 * t7;
  t41 = t2 * t3 * t8 * 810.0;
  t36 = ((t24 + t2 * t7 * 1944.0) - t41) - t3 * t4 * t7 * 810.0;
  t37 = t8 * t9 * 225630.0;
  t38 = t9 * t9;
  t39 = t11 * in1[12] * in1[13] * 6900.0;
  t40 = t2 * t4 * t9 * 810.0;
  t49 = ((((((((((((t7 * 541512.0 + t2 * t3 * t9 * 88290.0) + t3 * t4 * in1[7] *
                   10000.0) + t8 * t13 * in1[13] * in1[14] * 1125.0) + t3 * t4 *
                 t7 * in1[12] * in1[13] * 2700.0) + t2 * t3 * t8 * in1[12] *
                in1[13] * 2700.0) + t3 * t4 * t9 * in1[13] * in1[14] * 1125.0) -
              t4 * t9 * 225630.0) - t7 * t13 * 88290.0) - t2 * in1[7] * 24000.0)
           - t8 * in1[13] * in1[14] * 6900.0) - t2 * t7 * in1[12] * in1[13] *
          6480.0) - t4 * t8 * in1[12] * in1[13] * 6900.0) - t2 * t9 * in1[13] *
    in1[14] * 2700.0;
  t51 = t11 * in1[13] * in1[14] * 15525.0;
  t52 = t2 * t8 * in1[7] * 54000.0;
  t60 = ((((((((((((t9 * 1.037898E+6 + t2 * t3 * t7 * 476766.0) + t8 * in1[12] *
                   in1[13] * 31740.0) + t2 * t4 * in1[7] * 54000.0) + t4 * t8 *
                 in1[13] * in1[14] * 15525.0) + t2 * t4 * t7 * in1[12] * in1[13]
                * 14580.0) + t2 * t4 * t9 * in1[13] * in1[14] * 6075.0) - t4 *
              t7 * 1.218402E+6) - t6 * t9 * 476766.0) - t3 * in1[7] * 46000.0) -
           t3 * t7 * in1[12] * in1[13] * 12420.0) - t3 * t9 * in1[13] * in1[14] *
          5175.0) - t6 * t8 * in1[12] * in1[13] * 14580.0) - t2 * t3 * t8 * in1
    [13] * in1[14] * 6075.0;
  x[0] = -1.0;
  x[1] = 0.0;
  x[2] = 0.0;
  x[3] = t18 * (((((((((((((((t6 * 1.907064E+6 + t19) + t20) + t21) + t22) + t23)
    - t34 * 1.907064E+6) - t2 * t3 * t4 * 794610.0) - t4 * t8 * in1[7] *
                       180000.0) - t2 * in1[12] * in1[13] * 49680.0) - t2 * t4 *
                     in1[13] * in1[14] * 24300.0) + t3 * t10 * in1[13] * in1[14]
                    * 10125.0) - t3 * t11 * in1[13] * in1[14] * 10125.0) + t7 *
                  t8 * in1[13] * in1[14] * 24300.0) - t4 * t7 * t8 * in1[12] *
                 in1[13] * 24300.0) - t4 * t8 * t9 * in1[13] * in1[14] * 20250.0)
    * 0.00020833333333333329 - t25 * t33 * t36 * 0.00020833333333333329;
  x[4] = t18 * (((((((((((((((t2 * 541512.0 + t37) + t39) - t2 * t13 * 88290.0)
    + t7 * in1[7] * 24000.0) - t3 * t7 * t9 * 88290.0) - t3 * t8 * in1[7] *
    10000.0) - t4 * in1[13] * in1[14] * 6900.0) - t6 * in1[12] * in1[13] *
                       6480.0) - t10 * in1[12] * in1[13] * 6900.0) + t34 * in1
                     [12] * in1[13] * 6480.0) + t7 * t9 * in1[13] * in1[14] *
                    2700.0) + t4 * t13 * in1[13] * in1[14] * 1125.0) + t2 * t3 *
                  t4 * in1[12] * in1[13] * 5400.0) - t3 * t7 * t8 * in1[12] *
                 in1[13] * 5400.0) - t3 * t8 * t9 * in1[13] * in1[14] * 1125.0) *
    -0.00625 - t25 * t36 * t49 * 0.00625;
  x[5] = t18 * ((((((((((((((((t51 + t52) + t2 * t4 * 1.218402E+6) - t3 * t6 *
    476766.0) - t7 * t8 * 1.218402E+6) + t3 * t34 * 476766.0) - t2 * t7 * t9 *
    953532.0) + t4 * t7 * in1[7] * 54000.0) - t4 * in1[12] * in1[13] * 31740.0)
                       - t10 * in1[13] * in1[14] * 15525.0) + t2 * t3 * in1[12] *
                      in1[13] * 12420.0) + t4 * t34 * in1[12] * in1[13] *
                     14580.0) + t2 * t3 * t4 * in1[13] * in1[14] * 6075.0) - t2 *
                   t7 * t8 * in1[12] * in1[13] * 14580.0) - t3 * t7 * t8 * in1
                  [13] * in1[14] * 6075.0) + t2 * t8 * t9 * in1[13] * in1[14] *
                 6075.0) + t4 * t7 * t9 * in1[13] * in1[14] * 6075.0) *
    0.0027777777777777779 - t25 * t36 * t60 * 0.0027777777777777779;
  x[6] = 0.0;
  x[7] = -1.0;
  x[8] = 0.0;
  x[9] = t18 * (((((((((((((((t13 * 676890.0 + t19) - t20) - t21) - t22) - t23)
    - t38 * 676890.0) - t2 * t3 * t4 * 794610.0) + t4 * t8 * in1[7] * 180000.0)
                      - t3 * in1[13] * in1[14] * 20700.0) + t2 * t4 * in1[13] *
                     in1[14] * 24300.0) + t2 * t10 * in1[12] * in1[13] * 24300.0)
                   + t3 * t11 * in1[13] * in1[14] * 10125.0) - t8 * t9 * in1[12]
                  * in1[13] * 20700.0) + t4 * t7 * t8 * in1[12] * in1[13] *
                 48600.0) + t4 * t8 * t9 * in1[13] * in1[14] * 10125.0) *
    0.00020833333333333329 + t25 * t33 * (((t24 + t40) - t3 * t9 * 690.0) - t2 *
    t3 * t8 * 810.0) * 0.00020833333333333329;
  x[10] = t18 * ((((((((((((((((t37 + t39) + t3 * t4 * 225630.0) - t2 * t13 *
    88290.0) + t2 * t38 * 88290.0) - t3 * t7 * t9 * 176580.0) - t3 * t8 * in1[7]
    * 10000.0) + t4 * t9 * in1[7] * 10000.0) - t4 * in1[13] * in1[14] * 6900.0)
                        - t10 * in1[12] * in1[13] * 6900.0) + t2 * t3 * in1[13] *
                       in1[14] * 2700.0) + t4 * t38 * in1[13] * in1[14] * 1125.0)
                     + t2 * t3 * t4 * in1[12] * in1[13] * 2700.0) - t3 * t7 * t8
                    * in1[12] * in1[13] * 2700.0) + t2 * t8 * t9 * in1[12] *
                   in1[13] * 2700.0) + t4 * t7 * t9 * in1[12] * in1[13] * 2700.0)
                 + t3 * t8 * t9 * in1[13] * in1[14] * 1125.0) * 0.00625 + t25 *
    t49 * (((t24 + t40) - t41) - t3 * t9 * 690.0) * 0.00625;
  x[11] = t18 * (((((((((((((((t3 * 1.037898E+6 + t51) + t52) - t3 * t6 *
    476766.0) - t7 * t8 * 1.218402E+6) + t9 * in1[7] * 46000.0) - t2 * t7 * t9 *
    476766.0) - t4 * in1[12] * in1[13] * 31740.0) - t10 * in1[13] * in1[14] *
                        15525.0) - t13 * in1[13] * in1[14] * 5175.0) + t38 *
                      in1[13] * in1[14] * 5175.0) + t4 * t6 * in1[12] * in1[13] *
                     14580.0) + t7 * t9 * in1[12] * in1[13] * 12420.0) + t2 * t3
                   * t4 * in1[13] * in1[14] * 12150.0) + t2 * t7 * t8 * in1[12] *
                  in1[13] * 14580.0) + t2 * t8 * t9 * in1[13] * in1[14] *
                 12150.0) * -0.0027777777777777779 + t25 * t60 * (((t24 + t40) -
    t41) - t3 * t9 * 690.0) * 0.0027777777777777779;
  x[12] = 0.0;
  x[13] = 0.0;
  x[14] = -1.0;
  x[15] = 0.0;
  x[16] = 0.0;
  x[17] = 0.0;
  x[18] = 0.041666666666666664;
  x[19] = 0.0;
  x[20] = 0.0;
  x[21] = t18 * (((t7 * in1[13] * 49680.0 - t3 * t8 * in1[13] * 20700.0) - t7 *
                  t10 * in1[13] * 24300.0) + t2 * t4 * t8 * in1[13] * 24300.0) *
    -0.00020833333333333329 - 1.0;
  x[22] = t18 * (((t2 * t7 * in1[13] * 6480.0 + t4 * t8 * in1[13] * 6900.0) - t2
                  * t3 * t8 * in1[13] * 2700.0) - t3 * t4 * t7 * in1[13] *
                 2700.0) * 0.00625;
  x[23] = t18 * (((t8 * in1[13] * 31740.0 - t3 * t7 * in1[13] * 12420.0) - t6 *
                  t8 * in1[13] * 14580.0) + t2 * t4 * t7 * in1[13] * 14580.0) *
    -0.0027777777777777779;
  x[24] = 0.0;
  x[25] = 0.041666666666666664;
  x[26] = 0.0;
  x[27] = t18 * (((((((t7 * in1[12] * 49680.0 + t9 * in1[14] * 20700.0) - t3 *
                      t8 * in1[12] * 20700.0) + t2 * t8 * in1[14] * 24300.0) -
                    t7 * t10 * in1[12] * 24300.0) - t9 * t10 * in1[14] * 10125.0)
                  + t2 * t4 * t8 * in1[12] * 24300.0) - t3 * t4 * t8 * in1[14] *
                 10125.0) * -0.00020833333333333329;
  x[28] = t18 * (((((((t8 * in1[14] * 6900.0 + t2 * t7 * in1[12] * 6480.0) + t4 *
                      t8 * in1[12] * 6900.0) + t2 * t9 * in1[14] * 2700.0) - t8 *
                    t13 * in1[14] * 1125.0) - t2 * t3 * t8 * in1[12] * 2700.0) -
                  t3 * t4 * t7 * in1[12] * 2700.0) - t3 * t4 * t9 * in1[14] *
                 1125.0) * 0.00625 - 1.0;
  x[29] = t18 * (((((((t8 * in1[12] * 31740.0 - t3 * t7 * in1[12] * 12420.0) -
                      t3 * t9 * in1[14] * 5175.0) + t4 * t8 * in1[14] * 15525.0)
                    - t6 * t8 * in1[12] * 14580.0) + t2 * t4 * t7 * in1[12] *
                   14580.0) - t2 * t3 * t8 * in1[14] * 6075.0) + t2 * t4 * t9 *
                 in1[14] * 6075.0) * -0.0027777777777777779;
  x[30] = 0.0;
  x[31] = 0.0;
  x[32] = 0.041666666666666664;
  x[33] = t18 * (((t9 * in1[13] * 20700.0 + t2 * t8 * in1[13] * 24300.0) - t9 *
                  t10 * in1[13] * 10125.0) - t3 * t4 * t8 * in1[13] * 10125.0) *
    -0.00020833333333333329;
  x[34] = t18 * (((t8 * in1[13] * 6900.0 + t2 * t9 * in1[13] * 2700.0) - t8 *
                  t13 * in1[13] * 1125.0) - t3 * t4 * t9 * in1[13] * 1125.0) *
    0.00625;
  x[35] = t18 * (((t3 * t9 * in1[13] * 5175.0 - t4 * t8 * in1[13] * 15525.0) +
                  t2 * t3 * t8 * in1[13] * 6075.0) - t2 * t4 * t9 * in1[13] *
                 6075.0) * 0.0027777777777777779 - 1.0;
  memcpy(&fx_I[0], &x[0], 36U * sizeof(double));
}

/*
 * File trailer for GEN_Func_fx_I.c
 *
 * [EOF]
 */
