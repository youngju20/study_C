/* structure pointer
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    char addr[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));

    // Use 'arrow operator (->)' 

    strcpy(p1->name, "AB");
    p1->age = 30;
    strcpy(p1->addr, "CDF");

    printf("name: %s\n", p1->name);
    printf("age: %d\n", p1->age);
    printf("address: %s\n", p1->addr);

    free(p1);

    return 0;
}
