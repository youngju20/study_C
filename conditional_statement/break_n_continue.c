/* Control loop statement

break : break away from loop ( for, while, do while, switch )
continue : skip loop body

*/

#include <stdio.h>

int main()
{
    // 1. break

    int num1 = 0;

    while (1)  // This is infinite loop
    {
          num1++;

          printf("%d\n", num1);

          if (num1 == 20)
              break;
    }


    int num2 = 0;
    for (;;)  // This is infinite loop
    {
        num2++;

        printf("%d\n",num2);

        if (num2 == 10)
            break;
    }

   // __________________________________
   // 2. continue
   printf("example continue\n");

   for (int i = 1; i <= 20; i++)
   {
        if (i % 2 != 0)
            continue;

        printf("%d\n",i);

   }
   

    return 0;

}
