/* data structure
*/

#include <stdio.h>
#include <string.h>

// Define structure 
struct Person {
    char name[20];        // structure member 
    int age;
    char address[100];
};

// This method also can use
//
// struct Person{
//      char name[20];
//      int age;
//      char address[100];
//} p1;

int main()
{
    // state structure variable
    struct Person p1;

    strcpy(p1.name, "ABC");
    
    p1.age = 30;

    strcpy(p1.address, "DEFG");

    // access structure member using dot(.)
    printf("name: %s\n", p1.name);
    printf("age: %d\n", p1.age);
    printf("address: %s\n", p1.address);

    //_________________________________
    // define and intialize structure at the same time

    //struct Person p1 = { .name = "ABC", .age = 30, .address = "DEFG" };

    return 0;
}
