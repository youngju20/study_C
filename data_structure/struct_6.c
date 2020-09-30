/* Using structure pointer without dynamic memory
*/

#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char addr[100];
};

int main()
{
    struct Person p1;
    struct Person *ptr;

    ptr = &p1;  // allocate memory address of p1 into ptr

    ptr->age = 30;

    printf("age: %d\n", p1.age);
    printf("age: %d\n", ptr->age);

    return 0;
}
