#include <stdio.h>
#include <math.h>

int main ()
{
    float wt, ht, bmi;
    printf("enter height in meters : ");
    scanf("%f", &ht);
    printf("enter weight in kilograms : ");
    scanf("%f", &wt);

    bmi=wt/(pow(ht,2));

    printf("BMI is = %f\n", bmi);

    if (bmi<15)
    {
        printf("starvation");
    }
    else if(bmi>=15.1 && bmi<=17.5){
        printf("anorexic");
    }
    else if(bmi>=17.6 && bmi<=18.5){
        printf("underweight");
    }
    else if(bmi>=18.6 && bmi<=24.9){
        printf("ideal");
    }
    else if(bmi>=25 && bmi<=29.9){
        printf("overweight");
    }
    else if(bmi>=30 && bmi<=39.9){
        printf("obese");
    }
    else if(bmi>=40){
        printf("morbidly obese");
    }
    
    return 0;
}