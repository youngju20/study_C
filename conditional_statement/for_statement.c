/* For loop

for (initial; condition; variation)
{
   code....
}

*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("For loop %d \n", i);
    }

    // other examples

    int count;

    scanf("%d", &count);

    for (int i = count; i > 0; i--)
    {
        printf("for loop %d \n", i);
    }

    // use two Variables in "for loop body"
    for (int i=0, j=0; i<10; i++, j+=2)
    {
        printf("i: %d, j: %d \n", i,j);
    }

    return 0;
}
