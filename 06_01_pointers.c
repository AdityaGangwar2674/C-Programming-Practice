#include <stdio.h>

int main ()
{
    int i=34;
    int *j=&i;//for value of j as an address
    //j has the address of i

    printf("address i = %u\n", &i);
    printf("address i = %u\n", j);
    printf("address j = %u\n", &j);
    printf("value i = %d\n", i);
    printf("value j = %d\n", *(&j));
    printf("value i = %d\n", *j);
    return 0;
}