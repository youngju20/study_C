/*
1. conditional operator

== / != / > / < / >= / <=

2. ternary operator

" Var. ? val1 : val2 " 

:conditional operator, return values in front of ":" ,if condition is true . retrun value behind of :, if condition is False.

*/

// 0 is False and otherwise True

#include <stdio.h>

int main()
{
    printf("Use conditional operator\n");
    int num1 = 10;

    printf("%d \n", num1 == 10);
    printf("%d \n", num1 != 5);

    printf("%d \n", num1 > 10);
    printf("%d \n", num1 < 10);

    //
    printf("Use ternary operator\n");
    int num2 = 5;
    int num3;
    int num4;

    num3 = num2 ? 100 : 200; 

    num4 = (num2 ==10) ? 100 : 200; 

    printf("%d\n", num3);
    printf("%d\n", num4);


    return 0;

}

