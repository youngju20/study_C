/* Save string 
   not as printf, just make string and save string
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[20];

    sprintf(s1, "Hello, %s", "world!");
    // sprintf( array, format, values)
    // s1           : array 
    // "Hello, %s"  : format
    // "world!"     : value

    // and s1 is called "buffer"

    printf("%s\n", s1);

    char s2[30];

    sprintf(s2, "%c %d %f %e", 'a',10,3.2f,1.123456e-21f);

    printf("%s\n", s2);

    // string pointer

    char *s3 = malloc(sizeof(char)*20);

    sprintf(s3, "Heoo, %s", "woo!");

    printf("%s\n", s3);

    free(s3);

    

    return 0;
}

