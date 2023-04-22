#include <stdio.h>

int main ()
{
    float bs, gs, hra, da;
    printf("enter basic salary : ");
    scanf("%f", &bs);

    if(bs<1500){
        hra=0.10*bs;
        da=0.90*bs;

    }
    else{
        hra=500;
        da=0.98*bs;
    }
    gs=bs+da+hra;
    printf("gross salary of employee is = %f\n", gs);
    
    return 0;
}