#include <stdio.h>

int main ()
{
    float hd, cc, ts;
    printf("enter the hardness of the steel : ");
    scanf("%f", &hd);
    printf("enter the carbon content of the steel : ");
    scanf("%f", &cc);
    printf("enter the tensile strength of the steel : ");
    scanf("%f", &ts);

    if(hd>50 && cc<0.7 && ts>5600){
        printf("grade 10");
    }
    else if(hd>50 && cc<0.7){
        printf("grade 9");
    }
    else if(ts>5600 && cc<0.7){
        printf("grade 8");
    }
    else if(hd>50 && ts>5600){
        printf("grade 7");
    }
    else if(hd>50 || cc<0.7 || ts>5600){
        printf("grade 6");
    }
    else {
        printf("grade 5");
    }
    return 0;
}