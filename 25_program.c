#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    printf("absolute value of %d is = %d", num, abs(num));
    return 0;
}