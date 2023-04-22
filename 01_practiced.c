#include <stdio.h>
#include <math.h>

int main ()
{
    float celsius;
    float far;
    printf("enter the temperature in celsius\n");
    scanf("%f", &celsius);
    far=(celsius*9/5)+32;
    printf("the temperature in fahrenheit is %f", far);
    return 0;
}