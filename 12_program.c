#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r, theta;
    printf("Enter the value of x and y: ");
    scanf("%lf %lf", &x, &y);

    // Convert cartesian coordinates to polar coordinates
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan(y / x);

    // Convert radians to degrees
    theta = theta * 180 / 3.14;

    printf("The polar coordinates are (r, theta) = (%lf, %lf degrees)", r, theta);

    return 0;
}
