#include <stdio.h>

int main ()
{
    int principal, rate, time;
    int simple_interest;
    printf("enter principal amount");
    scanf("%d", &principal);
    printf("enter rate");
    scanf("%d", &rate);
    printf("enter time in year");
    scanf("%d", &time);
    simple_interest=principal * rate * time;
    printf("the simple interest is %d", simple_interest);
    
    return 0;
}