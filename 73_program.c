#include <stdio.h>
float power(float x, int y){
    int i;
    float p=1;
    for(i=1;i<=y;i++){
        p=p*x;
    }
    return p;
}
int main ()
{
    float x, pow;
    int y;
    printf("enter value of x and y : ");
    scanf("%f %d", &x,&y);
    pow=power(x,y);
    printf("%f to the power %d = %f", x,y,pow);
    
    return 0;
}