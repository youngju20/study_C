/* duplication pointer
*/

#include <stdio.h>

int main()
{
    int *numptr1;
    int **numptr2;
    int num1 = 10;

    numptr1 = &num1;

    numptr2 = &numptr1;

    printf("%d\n", **numptr2);

    return 0;
}
