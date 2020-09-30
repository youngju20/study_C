/* allocate memory on pointer and use as an array 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    scanf("%d", &size);

    int numArr[size];  // This is "variable-length array".

    printf("size of array : %ld\n", sizeof(numArr));

    //______________________________
    // pointer as an array

    int *numptr = malloc(sizeof(int) * 10);  // allocate dynamic memory ( size of memory is int*10
   
    numptr[0] = 10;
    numptr[9] = 20;

    printf("%d\n", numptr[0]);
    printf("%d\n", numptr[9]);

    free(numptr);

    //_______________________________
    //_______________________________
    // pointer as 2 dimensional array

    // allocate dynamic memory ( size of row )
    // sizeof(int *) : size of pointer !
    int **m = malloc(sizeof(int *) * 3);

    // allocate dynamic memory ( size of col ) 
    for (int i = 0; i < 3; i++)
    {
        m[i] = malloc(sizeof(int) * 4 );
    }

    m[0][0] = 1;
    m[2][0] = 5;
    m[2][3] = 2;

    printf("%d\n", m[0][0]);
    printf("%d\n", m[2][0]);
    printf("%d\n", m[2][3]);

    // it must deallocate memory 
    for (int i = 0; i < 3; i++)
    {
         free(m[i]);
    }

    free(m);

    return 0;
}
