/* change string into other data type
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. change string into "Int"
    // atoi ( ASCII TO Integer )

    char *s1  = "283";
    int num1;

    num1 = atoi(s1);

    printf("%d\n", num1);

    // 2. change string(hexademical) into Int
    // strtol

    char *s2 = "0xaf10";
    int num2;

    num2 = strtol(s2, NULL, 16);
  
    printf("%x %d\n", num2, num2);

    // 3. change string into float
    // atof

    char *s3 = "35.283672";
    float num3;

    num3 = atof(s3);

    printf("%f\n", num3);

    // 4. change string into float
    // strtof

    char *s4 = "35.2356 3.e5 9.281745 7.e-5";
    float num4, num5, num6, num7;
    char *end; // pointer to save last part of former number

    num4 = strtof(s4, &end);  // &end : "3.e5 9.281745 7.e-5"
    num5 = strtof(end, &end);
    num6 = strtof(end, &end);
    num7 = strtof(end, NULL);

    printf("%f\n", num4);
    printf("%f\n", num5);
    printf("%f\n", num6);
    printf("%e\n", num7);


    return 0;
}
