/*
list of "int" data type

char  ( 1 byte, 8 bit, -128~127 )
short ( 2 byte, 16 bit, -32,768~32,767 )
int   ( 4 byte, 32 bit, -2,147,483,648~2,147,483,647 )
long  ( 4 byte, 32 bit, -2,147,483,648~2,147,483,647 )
...
other type is here: https://dojang.io/mod/page/view.php?id=30

*/

#include <stdio.h>
int main()
{
    char num1 = -10;
    short num2 = 30000;
    int num3 = -1234567890;
    long num4 = -1234567890;
    long long num5 = -1234567890123456789;

    printf("%d %d %d %ld %lld\n",num1,num2,num3,num4,num5);
    // %d (decimal) %ld (long decimal) %lld (long long decimal)

    //_________________________________________________________
    // Get size of data type : "sizeof"
    int num6 = 0;
    int size;
 
    size = sizeof num6;
  
    printf("size : %d\n", size);

    printf("%ld\n",sizeof(char));

    return 0;
}
