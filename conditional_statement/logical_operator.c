/*
Logical operator

&& : AND
|| : OR
!  : NOT

*/

#include <stdio.h>

int main()
{
    // 1. &&
    printf("%d \n", 1 && 1);
    printf("%d \n", 1 && 0);
    printf("%d \n", 0 && 0);
    printf("%d \n", 2 && 3);

    // 2. ||
    printf("%d \n", 1 || 1);
    printf("%d \n", 1 || 0);

    // 3. !
    printf("%d \n", !1);
    printf("%d \n", !0);

    return 0;

}
