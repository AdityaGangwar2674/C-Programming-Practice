#include <stdio.h>

int main ()
{
    int a=6;
    int *ptr=&a;
    printf("address of the variable a is %u\n", &a);
    printf("value of the variable a is %d\n", *ptr);
    return 0;
}