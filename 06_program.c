#include <stdio.h>

int main ()
{
    int l, b, r, area_r, per_r;
    float cir_c, area_c;
    printf("enter the length of the rectangle = ");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle = ");
    scanf("%d", &b);
    area_r=l*b;
    per_r=2*(l+b);
    printf("the perimeter of rectangle = %d\n", per_r);
    printf("the area of rectangle = %d\n", area_r);

    printf("enter the radius of the circle = ");
    scanf("%d", &r);
    
    cir_c=(float)2*3.14*r;
    area_c=(float)3.14*r*r;

    printf("the circumference of circle = %f\n", cir_c);
    printf("the area of circle = %f\n", area_c);
    return 0;
}