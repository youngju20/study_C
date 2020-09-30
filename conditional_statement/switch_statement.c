/* Switch statement is used when form is strict and there are many conditions

it must be value(literal) after case statement
in case, it must use int data type !!

*/

#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
         printf("it is 1 \n");
         break;
    case 2:
         printf("it is 2 \n");
         break;
    default:
         printf("defalut \n");
         break;
    }

    // omit "break"
    
    int num2;
    scanf("%d",&num2);
    switch (num2)
    {
    case 1:
    case 2:
         printf("it is 1 or 2 \n");
         break;
    case 3:
    case 4:
         printf("it is 3 or 4 \n");
         break;
    default:
         printf("default \n");
    }

    // insert Variable in 'case statement'

    int num3;
    scanf("%d",&num3);
    switch (num3)
    {
    case 1:
    {  // {} must be used in case
       int num4 = num3;
       printf("it is %d \n", num4);
       break;
    }
    case 2:
         printf("it is 2 \n");
         break;
    default:
         printf("default \n");
    }

    return 0;

}
