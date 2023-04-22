#include <stdio.h>
#include <math.h>

int main()
{
    double angle_degrees, angle_radians;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    angle_radians = angle_degrees * 3.14159/ 180.0;
    printf("sin(%lf) = %lf\n", angle_degrees, sin(angle_radians));
    printf("cos(%lf) = %lf\n", angle_degrees, cos(angle_radians));
    printf("tan(%lf) = %lf\n", angle_degrees, tan(angle_radians));
    printf("cosec(%lf) = %lf\n", angle_degrees, 1 / sin(angle_radians));
    printf("sec(%lf) = %lf\n", angle_degrees, 1 / cos(angle_radians));
    printf("cot(%lf) = %lf\n", angle_degrees, 1 / tan(angle_radians));
    return 0;
}
