/* String : not one character, set of characters
   character can save 'char' data type, because size of 'char' is 1byte
   but, size of 'string' is more than 1byte.
   Use "pointer"
*/

#include <stdio.h>

int main()
{
    char c1 = 'a';
    char *s1 = "Hello";  // it only saves address where it is saved in memory

    printf("%c\n", c1);
    printf("%s\n", s1);

    // use " [] "
    printf("%c\n", s1[1]);
    printf("%c\n", s1[2]);
    printf("%c\n", s1[3]);

    printf("last element of string is NULL, %c\n", s1[5]);

    // allocate character 
    s1[0] = 'A'; // this ocurr error !!
  
    printf("%c\n",s1[0]);

    return 0;
}
 
