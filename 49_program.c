#include <stdio.h>

int main()
{
    float power;
    int x, y, i;
    printf("enter the values of x and y : ");
    scanf("%d %d", &x, &y);
    power = i = 1;

    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%d to the power %d is = %f", x, y, power);

    return 0;
}