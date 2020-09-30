#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person {
    char name[20];
    int age;
    char addr[100];
} Person;

int main()
{
    Person *p1 = malloc(sizeof(Person));

    strcpy(p1->name, "AB");
    p1->age = 30;
    strcpy(p1->addr, "CD");

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);
    printf("%s\n", p1->addr);

    free(p1);

    return 0;
}
