/* data structure 'alias'
   using "typedef"
*/

#include <stdio.h>
#include <string.h>

typedef struct _Person {    // structure name can be the same as alias name
    char name[20];
    int age;
    char address[100];
} Person;                   // Person is alias name 

int main()
{
    Person p1;    // state structure using alias

    strcpy(p1.name, "ABC");
    p1.age = 30;
    strcpy(p1.address, "DEFG");

    printf("name: %s\n", p1.name);
    printf("age: %d\n", p1.age);
    printf("address: %s\n", p1.address);

    return 0;
}
