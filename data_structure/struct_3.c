/* "anonymous structure"
*/

#include <stdio.h>
#include <string.h>

// no structure name
typedef struct {
    char name[20];
    int age;
    char address[100];
} Person;


int main()
{
    Person p1;  

    strcpy(p1.name, "A");
    p1.age = 30;
    strcpy(p1.address, "BC");

    printf("%s\n", p1.name);
    printf("%d\n", p1.age);
    printf("%s\n", p1.address);

    return 0;
}
