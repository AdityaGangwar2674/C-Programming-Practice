#include <stdio.h>

int main ()
{
    float km, m, ft, in, cm;
    printf("enter the distance between in kilometers = ");
    scanf("%f", &km);
    m=km*1000;
    cm=m*100;
    in=cm/2.54;
    ft=in/12;

    printf("distance in kilometers = %f\n", km);
    printf("distance in meters = %f\n", m);
    printf("distance in centimeters = %f\n", cm);
    printf("distance in feet = %f\n", ft);
    printf("distance in inches = %f\n", in);

    return 0;
}