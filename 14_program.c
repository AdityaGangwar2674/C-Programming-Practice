#include <stdio.h>
#include <math.h>

int main ()
{
    float wcf; int v, t;
    printf("enter the temperature : ");
    scanf("%d", &t);
    printf("enter the wind velocity : ");
    scanf("%d", &v);

    wcf=35.74 + 0.6215*t+(0.4275*t-35.75)*pow(v, 0.16);

    printf("the wind-chill factor is = %f\n", wcf);

    return 0;
}