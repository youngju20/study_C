/*
Constant is stationary value. 

ex) const int con1 = 10; 
    con1 -> Constant / 10 -> literal

"literal" is value itself. "Constant" is space with saved value

*/

#include <stdio.h>

int main()
{
    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';

    printf("%d %f %c \n", con1,con2,con3);

    // Use "literal suffix". to identify size of literal
    printf("literal suffix \n");
    // 1. integer literal suffix
    printf("%ld \n", -10L);
    printf("%u \n", 10U);
    // 2. float literal suffix
    printf("%f \n", 0.1f);
    printf("%f \n", 0.1);    // none literal suffix means "double" data type
    printf("%f \n", 1.0e-5f);
    printf("%Lf \n", 1.0e-5l);
    

    return 0;

}
