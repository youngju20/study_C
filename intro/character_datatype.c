/*
list of character data type

char/signed char  1byte, 8bit, -128 ~ 127
unsigned char     1byte, 8bit,   0  ~ 255

when computer saves character, it saves the number corresponding to character(ASCII) not saving character itself

*/

#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';

    printf("%c %d \n",c1,c1);
    printf("%c %d \n",c2,c2);

    char c3 = 97;
    printf("%c %d \n",c3,c3);
    
    char c4 = 0x61;
    printf("%c %d 0x%x \n",c4,c4,c4);
 
    // character operation
    printf("character operation \n");
    printf("%c %d \n", 'a'+1, 'a'+1);

    return 0;

}
