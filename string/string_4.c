/* Copy string to other array or pointer(memory)
   "strcpy"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[10] = "hello";
    char s2[10];

    strcpy(s2, s1); // strcpy('target', 'original')

    printf("%s\n", s2);

    // copy with string pointer
 
    char *s3 = "helloo";
    char *s4 = malloc(sizeof(char) * 10);

    strcpy(s4, s3);

    printf("%s\n", s4);

    free(s4); 

    return 0;
}
