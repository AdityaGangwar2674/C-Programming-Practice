#include <stdio.h>
float fahr(float cel);
int main ()
{
    float cel;

    printf("enter temperature in celsius : \n");
    scanf("%f", &cel);

    printf("the temperature in fahrenheit is  %f", fahr(cel));
    return 0;
}

float fahr(float cel){
    float f;
    f=(float)((cel*9/5)+32);
    return f;
}