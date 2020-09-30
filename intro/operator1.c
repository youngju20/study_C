/* Operation 

1. += or -=

*/

#include <stdio.h>

int main()
{
    printf("inefficient ways \n");
    int num1 = 1;
    int num2 = 1;
    num1 = num1 + 2;
    num2 = num2 - 2;
    printf("%d \n", num1);
    printf("%d \n", num2);

    printf("efficient ways \n");
    int num3 = 1; 
    int num4 = 1; 

    num3 += 2;
    num4 -= 2;

    printf("%d \n", num3);
    printf("%d \n", num4);

    return 0;

}

