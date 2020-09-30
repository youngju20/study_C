// convert decimal number to a binary number
// devide by 2 until the rest become 0

#include <stdio.h>

int main()
{
    int decimal = 13;
    int binary[20] = { 0, };

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;
        decimal = decimal / 2;

        position++;

        if (decimal == 0)
            break;
    }

    // print elements of array in reverse order

    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
