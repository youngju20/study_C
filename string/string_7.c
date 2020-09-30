/* Search character in string
   "strchr" : it returns position(pointer) where character is 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "A garden diary";

    char *ptr = strchr(s1, 'a');

    while (ptr != NULL)
    {
         printf("%s\n", ptr);
         ptr = strchr(ptr+1, 'a');
    }

    //_________________________________________
    // "strrchr" : find character from the right
    char *ptr2 = strrchr(s1, 'a');

    printf("%s\n", ptr2);

    //__________________________________________
    // "strstr" : find string in string

    char *ptr3 = strstr(s1, "den");

    printf("%s\n", ptr3);

    return 0;
}
