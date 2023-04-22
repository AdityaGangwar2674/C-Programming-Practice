#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    double angle_degrees, sum_of_squares;

    printf("Enter the value of an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    double angle_radians = angle_degrees * pi / 180.0; // convert degrees to radians
    double sine = sin(angle_radians);
    double cosine = cos(angle_radians);
    sum_of_squares = pow(sine,2)+pow(cosine,2);

    if (fabs(sum_of_squares - 1.0) < 1e-10) // check if the difference between sum_of_squares and 1 is less than a small number
    {
        printf("The sum of squares of sine and cosine is equal to 1.\n");
    }
    else
    {
        printf("The sum of squares of sine and cosine is not equal to 1.\n");
    }

    return 0;
}
