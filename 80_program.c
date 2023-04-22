#include <stdio.h>

int main()
{
    float x = 3.14;
    float *y = &x;
    float **z = &y;
    printf("%u %u %u\n", &x, &y, &z);
    printf("%u %u\n", y, z);
    printf("%f %f %f\n", x, *y, **z);
    return 0;
}