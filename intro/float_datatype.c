/* 
list of float data type

float  4byte, 32bit, 1.175494e-38 ~ 3.402823e+38 (7 digit)
double 8byte, 64bit, 2.225074e-308 ~ 1.797693e+308 (16 digit)

float point = +- m x n^p / m:significand, n:base(fixed with 2), p:exponent

*/

#include <stdio.h>
#include <float.h>
// in float.h the max or min value of data type is defined

int main()
{
    float num1 = 0.1f;
    double num2 = 3867.215820;
    long double num3 = 9.327513l;

    printf("%f %f %Lf \n", num1,num2,num3);

    float num4 = 3.e5f;
    double num5 = -1.3827e-2;
    long double num6 = 5.21e+91;

    printf("%f %f %Lf \n",num4,num5,num6);
    printf("%e %e %Le \n",num4,num5,num6);

    // Check maximum and minimum value of float data type
    float num7 = FLT_MIN;
    float num8 = FLT_MAX;

    printf("%.40f %.2f \n",num7,num8);

    return 0;

}
