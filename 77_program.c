#include <stdio.h>
void areaper(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}
int main()
{
    int radius;
    float area, perimeter;
    printf("enter radius of circle : ");
    scanf("%d", &radius);
    areaper(radius, &area, &perimeter);
    printf("area = %f\n", area);
    printf("perimeter = %f\n", perimeter);
    return 0;
}