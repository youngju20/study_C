#include <stdio.h>

int main()
{
    int num1 = 5;

    if (num1 == 10)
    {
        printf("it is 10\n");
    }
    else
    {
        printf("it is not 10\n");
    }

    printf("simple case\n");

    if (num1==10)
       printf("it is 10\n");
    else
       printf("it is not 10\n");

    // multiple condition
    int num2 = 10;
    int num3 = 20;

    if (num2 == 10 && num3 == 20)
        printf("True\n");
    else
        printf("False\n");

    // multiple statement "else if"
    
    int num4 = 20;

    if (num4 == 10)
       printf("it is 10\n");
    else if (num4 == 20)
       printf("it is 20\n");

    return 0;

}
