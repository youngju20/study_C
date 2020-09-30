/* Bit operator

list of bit operator

& (AND)  /  | (OR)  / ^ (XOR)  / ~ (NOT)  

<< (shift left)  / >> (shift right)

&=  /  |=  /  ^=  /  <<=  /  >>=

*/

#include <stdio.h>

int main()
{
    unsigned char num1 = 1;   // 0000 0001 (bit expression)
    unsigned char num2 = 3;   // 0000 0011

    printf("%d\n", num1 & num2);
    printf("%d\n", num1 | num2);
    printf("%d\n", num1 ^ num2);

    // bit operation : operates two bit with the same position of digit

    /* 0 0 0 0  0 0 0 1 -> 1
       0 0 0 0  0 0 1 1 -> 2
       a b c d  e f g h    

       comparing with two bit with the same postion,
       in the position of g, one is "0" and other is "1"
       the bit operator is "&", so "0 & 1 -> 0" (like conditional operator &&)
       in the position of h, one is "1" and other is "1", the result is "1"

       finally, the result is 0000 0001 -> 1
    */


    unsigned char num3 = 162; // 1010 0010
    unsigned char num4;

    num4 = ~num3;

    printf("%u\n",num4);

    /* NOT operator changes from '0' to '1'.
       1010 0010 -> 0101 1101
    */


   //______________________________
   // Shift bit position
   
   unsigned char num5 = 3;
   unsigned char num6 = 24;
 
   printf("%u\n", num5 << 3);
   printf("%u\n", num6 >> 2);

   /* shift bit

      0 0 0 0  0 0 1 1 -> 3
   shift 3 left (<< 3)
      0 0 0 1  1 0 0 0 -> 24
   */

    return 0;

}

            

