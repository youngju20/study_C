#include <stdio.h>
#include <stdlib.h>

struct Data {
    char c1;
    int *numptr;
};

int main()
{
    int num1 = 10;
    struct Data d1;
    struct Data *d2 = malloc(sizeof(struct Data));

    d1.numptr = &num1;
    d2->numptr = &num1;

    printf("%d\n", *d1.numptr);
    printf("%d\n", *d2->numptr);

    d2->c1 = 'a';
    printf("%c\n", (*d2).c1);

    printf("%d\n", *(*d2).numptr);

    free(d2);

    return 0;
}
