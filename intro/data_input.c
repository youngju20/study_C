/* stdin, standard input

"scanf(form, address of var.)"

form is type of var. / address is var. to store input data

*/

//#define _CRT_SECURE_NO_WARNINGS  // protect from compile error because of secure waring

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("typing integer: ");
    scanf("%d", &num1);

    printf("%d \n", num1);
  
    // input two variables
    printf("typing two integers: ");
    scanf("%d %d", &num2, &num3);
    
    printf("%d %d \n",num2,num3);

    return 0;

} 
