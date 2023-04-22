#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
    float x, result = 0, a, b, p;
    printf("enter the value of 'x' : ");
    scanf("%f", &x);
    a = (x - 1) / x;

    for (int i = 2; i <= 7; i++)
    {
        p = pow(a, i);
        b = p / 2;
        result += b;
    }
    result = a + result;
    printf("the result of the logarithmic function is = %f\n", result);
    return 0;
}

