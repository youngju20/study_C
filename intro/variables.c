/*
state variable : making variable and save a value in the variable 
ex)     int          num1;
    <data type>   <var. name>

list of data type : char,short,int,long / float,double / void
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3, num4, num5;

    num1 = 10;
    num2 = 20;
    num3 = 30;
    num4 = 40;
    num5 = 50;

    printf("%d %d\n", num1,num2);
    printf("%d %d %d\n", num3,num4,num5);

    // state and intialize variable simultaneously
    int num6 = 100;
    int num7 = 200, num8 = 300;
    printf("%d %d %d\n", num6,num7,num8);

    return 0;
}
