#include <stdio.h>

void printadd(int a){
printf("the address of variable a is %u\n", &a);
}
int main ()
{
    int i=5;
    printf("value of the variable i is %d\n", i);
    printadd(i);
    printf("address of the variable i is %u\n", &i);
    return 0;
}