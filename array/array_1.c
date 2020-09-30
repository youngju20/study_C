/* Array

1. declare array  : data_type array_name[size]
2. initiate value : data_type array_name[size] = { val1, val2, val3 }

*/

#include <stdio.h>

int main()
{
    int numArr[10] = { 11,12,13,14,15,26,27,28,29,100 };

    printf("%d\n", numArr[0]);
    printf("%d\n", numArr[5]);
    printf("%d\n", numArr[9]);

    // Allocate value in array
    int numArr2[4];

    numArr2[0] = 20;
    numArr2[1] = 21;
    numArr2[2] = 22;
    numArr2[3] = 23;

    printf("%d\n", numArr2[0]);
    printf("%d\n", numArr2[2]);


    return 0;
}
