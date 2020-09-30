#include <stdio.h>

int main()
{
    // string can save in 'char array'

    char s1[10] = "Hello";  // rest of elements is automatically NULL

    printf("%s\n", s1);

    char s2[6] = "Hello";  // size of array must be larger than size of string

    printf("%s\n", s2);

    // In this case, size of array not need
    char s3[] = "Hello";  

    printf("%s\n", s3);


    // ______________________________
    // allocate string
    // in opposition to pointer case, array can allocate character

    char s4[10] = "ABCDE";
    
    s4[0] = 'E';

    printf("%s\n", s4);

    return 0;
}
