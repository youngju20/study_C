#include <stdio.h>

int main()
{
    int numArr[3][3] = {
         { 11, 12, 13 },
         { 21, 22, 23 },
         { 31, 32, 33 }
    };

    printf("%d\n", numArr[0][0]);
    printf("%d\n", numArr[1][2]);
    printf("%d\n", numArr[2][2]);

    // 2 dimensional array and Pointer
    // not use **pointer
    // use data_type (*pointer_name)[size_of_col]

    int (*numptr)[3] = numArr;

    printf("%p\n", *numptr);

    printf("%d\n", numptr[2][2]);
    

    return 0;
}
