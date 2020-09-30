/* get Size of string : "strlen"

   comparing with two string : "strcmp"

*/

#include <stdio.h>
#include <string.h>  // 'strlen' function

int main()
{
    char *s1 = "Hello";
    char s2[10] = "Hello";

    printf("%ld\n", strlen(s1));
    printf("%ld\n", strlen(s2));

    // comparing with two string whether two string is same or not
    char s3[10] = "Hello";
    char *s4 = "Hello";

    int ret = strcmp(s3,s4);

    printf("%d\n", ret);

    // in linux & OS X, strcmp returns difference between ASCII value of two string. In Windows, it returns 0,1,-1

    printf("same %d\n", strcmp("aaa","aaa"));
    printf("left side is larger %d\n", strcmp("aaf","aaa"));
    printf("right side is larger %d\n", strcmp("aaa","aaf"));

    // but ..., the result is the same as windows result ... why?

    return 0;
}
