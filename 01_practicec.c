#include <stdio.h>
int main()
{
    float radius;
    float pi=3.14;
    printf("enter the radius");
    scanf("%f",&radius);
    printf ("the area of the circle is %f\n", pi*radius*radius);
    float volume;
    float height;
    printf("input height");
    scanf("%f",&height);
    printf("the volume of cylinder%f\n",pi*radius*radius*height);
   return 0;
}