/* save input string value in the array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];

    printf("typing string: ");
    scanf("%s", s1);  // unlike normal var., it not need '&' in front of 's1'

    printf("%s\n", s1);

    // save in 'string pointer'

    char *s2 = malloc(sizeof(char) * 10);

    printf("typing string: ");
    scanf("%s", s2); 

    printf("%s\n", s2);

    free(s2);
    
    

    return 0;
}
