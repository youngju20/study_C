/* Do while statement

Do while statement skip loop if condition is not satistified

*/

#include <stdio.h>

int main()
{
    int i = 0;

    do  // below code is always processed once
    {
       printf("Loop %d \n", i);
       i++;
    } while (i < 20);

    return 0;
}
