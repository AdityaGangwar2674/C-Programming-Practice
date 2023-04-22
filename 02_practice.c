#include <stdio.h>

int main (){
    // Q.1 tell if these are valid or invalid
    int a; int b=a;
    int v=3^3;
    char dt='2';
    float d=(3.0/8-2);
    printf("%d\n", v);
    printf("%f\n", d);

    // Q.2 divisibility test for 97
    int num;
    printf("enter the number");
    scanf("%d", &num);
    printf("divisibility test returns; %d", num%97); 
    
    // Q.3 step by step evaluation
    // 3*2=6 // 6/3=2 // 2-3=-1 // -1+1=0 
    int x=2; int y=3; int z=3; int k=1;
    printf("value of 3*x/y-z+k is %d\n", 3*x/y-z+k);
    return 0;
}