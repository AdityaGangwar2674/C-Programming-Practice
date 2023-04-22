#include <stdio.h>

int main ()
{
    int i=1, fact=1, num;
    printf("enter a number : ");
    scanf("%d", &num);

    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is = %d\n", num,fact);
    return 0;
}