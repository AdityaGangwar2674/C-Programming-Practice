#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("enter the value of a = ");
    scanf("%d", &a);
    
    printf("enter the value of b = ");
    scanf("%d", &b);

printf("value of a is = %d\n", a);
printf("value of b is = %d\n", b);

    c=a;a=b;b=c;

    printf("after interchanging the values of a and b \n");

    printf("value of a is = %d\n", a);
    printf("value of b is = %d\n", b);
    return 0;
}