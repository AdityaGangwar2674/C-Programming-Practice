#include <stdio.h>
#include <string.h>

int main()
{
    char *st1 = "aditya";
    char st2[50];

    printf("the st1 is %s\n", st1);

    strcpy(st2, st1);

    printf("now the st2 is %s", st2);
    
    return 0;
}