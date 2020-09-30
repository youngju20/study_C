#include <stdio.h>

int main()
{
    int numArr[5] = { 11,12,13,14,15 };

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {
        printf("%d\n", numArr[i]);
    }


    int numArr2[5] = { 11,12,13,14,15 };

    for (int i = sizeof(numArr) / sizeof(int) - 1; i >= 0; i--)
    {
        printf("%d\n", numArr2[i]);
    }

    return 0;


}
