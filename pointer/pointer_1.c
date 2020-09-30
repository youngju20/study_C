/* Pointer

Variables is used by "name" such as num1 = 1.
Also it presented by "memory address"

'Pointer save memory address'

*/

#include <stdio.h>

int main()
{
    // what is memory address
    printf("present as memory address\n");
    int num1 = 10;

    printf("%d, %p\n", num1, &num1);

    // use pointer
    printf("save \"memory address\" \n");
    int *numPtr;  // declare pointer variable

    numPtr = &num1; // save 'memory address' of num1 in 'pointer variable

    printf("print pointer var. %p\n", numPtr);
    printf("print memory address %p\n", &num1);
    
    // dereference : pick up value from memory
    // Use "*" in front of variable
    printf("derefernce operator\n");

    printf("%d\n", *numPtr);

    // change value using deference
    *numPtr = 20;
    printf("%d\n", *numPtr);
    printf("%d\n", num1);  // original num1 is also changed. because num1's memory address is numPtr and it is changed.

    return 0;
}
