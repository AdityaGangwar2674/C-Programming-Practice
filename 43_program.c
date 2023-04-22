#include <stdio.h>

int main ()
{
    int a, b, c;
    int max;
    printf("enter the three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("%d is maximum number", max);
    return 0;
}