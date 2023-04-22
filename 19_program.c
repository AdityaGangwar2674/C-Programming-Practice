#include <stdio.h>

int main ()
{
    float cp, sp,p,l;
    printf("enter the cost price and selling price : ");
    scanf("%f %f", &cp, &sp);
    p=sp-cp;
    l=cp-sp;

    if(p>0){
        printf("the seller made a profit of Rs.%f\n", p);
    }
    else if(l>0){
        printf("the seller made a loss of Rs.%f\n", l);
    }
    else if(p==0){
        printf("there is no loss and no profit \n");
    }
    return 0;
}