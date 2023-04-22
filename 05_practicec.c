#include <stdio.h>
#include <math.h>
float force(float mass, float g);
int main ()
{
    float mass, g=9.8;

    printf("enter mass of  body : ");
    scanf("%f\n", &mass);
    printf("the force is  %0.2f", force(mass, g));
    
    return 0;

}

float force(float mass, float g){
    float f;
    f=(float)((mass*g));
    return f;
}