/* While statement

initial
while (condtion) 
{
   code ...
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    while (i<20)
    {
        printf(" while %d \n",i);
        i++;  // This varation must be here. if not, statement would be infinite loop
    }


    // while statement is used when number of repetitions is undecided.
    // example : pick up number 3 card in the card pile

    srand(time(NULL));  // make random number seed!

    int j = 0;
    
    while (j != 3)
    {
        j = rand() % 10;
        printf("%d \n",j);
    }

    

    return 0;
}
