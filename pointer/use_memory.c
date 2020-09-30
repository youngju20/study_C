/* get memory space and use pointer

1. to use memory, it must secure memory space using "malloc" function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1 = 20;
    int *numptr1;

    numptr1 = &num1;

    int *numptr2;

    numptr2 = malloc(sizeof(int)); // allocate dynamic memory 

    printf("num1's memory address, %p\n", numptr1);
    printf("new allocated memory address, %p\n", numptr2);

    //free(numptr2);  // deallocate memory

    // 2. save value in allocated memory
    *numptr2 = 10;

    printf("%d\n", *numptr2);

    free(numptr2);  // deallocate memory

    // 3. set value using 'memset' function
    long long *numptr3 = malloc(sizeof(long long));

    memset(numptr3, 0x27, 8);  // set value corresponding memory
   
    printf("0x%llx \n", *numptr3);

    free(numptr3);

    return 0;
}
