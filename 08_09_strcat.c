#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50] = "Hello";
    char st2[50] = "World";

    

    strcat(st1, st2);

    printf("now the st1 is = %s", st1);

    
    
    return 0;
}