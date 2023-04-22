#include <stdio.h>

int main ()
{
    float fahr;
    int cel;
    
    printf("enter the temperature in celsius = ");
    scanf("%d", &cel);

    fahr=(float)(cel*9/5)+32;

    printf("temperature in fahrenheit = %f",fahr );
    return 0;
}