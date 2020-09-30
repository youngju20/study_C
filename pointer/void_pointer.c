/* void pointer : it is not decided data type

usage : 

void *pointer_name

*/

#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 ='a';
    int *numPtr = &num1;
    char *cPtr = &c1;
  
    void *Ptr;

    // not ocurr compile error when data type is different between two var.
    Ptr = numPtr;
    Ptr = cPtr;        

    return 0;
}

