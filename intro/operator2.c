/* Operation 

2. ++ or --

*/

#include <stdio.h>

int main()
{
    printf("Increment and decrement operators \n");

    int num1 = 1;
    int num2 = 2;

    num1++;

    num2--;

    printf("%d \n", num1);
    printf("%d \n", num2);

    //_________________________________________
    // the position of operator
    printf("operator is behind of var. \n");
    int num3 = 2;
    int num4;

    // "postfix operator"
    num4 = num3++;

    printf("%d \n",num4);
    printf("value is not changed\n");

    printf("operator is ahead of var. \n");
    int num5 = 2;
    int num6;

    // "prefix operator"
    num6 = ++num5;

    printf("%d \n",num6);
    printf("value is changed\n");

    // other example
    int num11 = 2;
    int num12 = 2;
    int num21 = 2;
    int num22 = 2;

    printf("postfix: %d %d \n", num11++, num12--);
    printf("%d %d \n", num11, num12);

    printf("prefix: %d %d \n", ++num21, --num22);
    printf("%d %d \n", num21, num22);


    return 0;

}

