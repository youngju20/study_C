/* array save memory address of 1st element of array.
   so, array is address value, array could put pointer
*/

#include <stdio.h>

int main()
{
    int numArr[5] = { 11,12,13,14,15 };

    int *numptr = numArr;

    printf("print pointer var. %d\n", *numptr);

    printf("deference of array %d\n", *numArr);

    printf("pointer can use index %d\n", numptr[3]);

    printf("size of array %ld\n", sizeof(numArr));

    printf("size of pointer %ld\n", sizeof(numptr));

    return 0;
}
    
