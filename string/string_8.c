/* Cut string
   "strtok"
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "The Little Prince";
  
    char *ptr = strtok(s1, " ");  // cut string by blank character

    while (ptr != NULL)
    {
         printf("%s\n", ptr);
         ptr = strtok(NULL, " ");
    }

    // example 2. cut string by various standard
    char s2[30] = "2020-08-19T16:38:20";

    char *ptr2 = strtok(s2, "-T:");

    while (ptr2 != NULL)
    {
         printf("%s\n", ptr2);
         ptr2 = strtok(NULL, "-T:");
    }

    //_____________________________________________
    // cut string and save values

    char s3[30] = "The Little Prince";
    char *sArr[10] = { NULL, };
    int i = 0;

    char *ptr3 = strtok(s3, " ");

    while (ptr3 != NULL)
    {
        sArr[i] = ptr3;
        i++;

        ptr3 = strtok(NULL, " ");
    }
 
    for (int i = 0; i < 10; i++)
    {
        if (sArr[i] != NULL)
            printf("%s\n", sArr[i]);
    }


    return 0;
}
