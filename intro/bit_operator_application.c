#include <stdio.h>

int main()
{

    // 1. apply to get power of 2 (2^n)
    printf("getting power\n");

    unsigned char num1 = 1;     // 0000 0001

    printf("%u\n", num1 << 1);  // 0000 0010 -> 2
    printf("%u\n", num1 << 2);  // 0000 0100 -> 2^2
    printf("%u\n", num1 << 3);  // 0000 1000 -> 2^3
    printf("%u\n", num1 << 4);  // 0001 0000 -> 2^4
    printf("%u\n", num1 << 5);  // 0010 0000 -> 2^5

    // 2. shift first digit or last digit of bit
    printf("shfit bit\n");

    unsigned char num2 = 240;
    unsigned char num3 = 15;

    unsigned char num4, num5;

    num4 = num2 << 2;
    num5 = num3 >> 2;

    printf("240 is changed to %u \n", num4);
    printf("15 is changed to %u \n", num5);

    // 3. process flag
    // it is used to stroe data in small space and to need fast speed 
    printf("flag\n");

    unsigned char flag = 0;

    flag |= 1;  // turn on the last digit of bit 
    flag |= 2;  // turn on 7th bit
    flag |= 4;  // turn on 6th bit

    // 1,2,4 is "mask", it is used to handle or check the bit of flag

    // "" flag |= 1 "" 
    //  flag = 0  -> 0000 0000
    //  mask = 1  -> 0000 0001
    //  flag |= 1 -> 0000 0001
    // 
    //  turning on bit of flag is similar to OR operation

    printf("%u\n", flag);

    return 0;

}
