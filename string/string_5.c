/* Concatenate two string
   "strcat"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[10] = "world";
    char s2[10] = "hello";

    strcat(s2, s1);  // strcat('original' ,'added')

    printf("%s\n", s2);

    // with string pointer 
    // it must use dynamic memory, because 'string pointer' is read only!!

    char *s3 = "world";
    char *s4 = malloc(sizeof(char) * 20);

    strcpy(s4, "Hello");
   
    strcat(s4, s3);

    printf("%s\n", s4);

    free(s4);
    

    return 0;
}
