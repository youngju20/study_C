/* Boolean data type = logical data type

basically C language use '0' and '1' to present False and true 
But, if we use 'stdbool.h' header file we could use 'true' and 'false' var.

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1 = true;

    if (b1 == true)
       printf("True\n");
    else
       printf("False\n");

    // size of boolean data type

    printf("size of int: %ld\n",sizeof(int));
    printf("size of Boolean: %ld\n",sizeof(bool));

    return 0;

}
