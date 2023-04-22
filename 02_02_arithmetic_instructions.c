#include <stdio.h>
#include <math.h>

int main (){
    int a, b;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);

    printf("the value of a+b is %d\n", a+b); 
    printf("the value of a-b is %d\n", a-b); 
    printf("the value of a*b is %d\n", a*b); 
    printf("the value of a/b is %d\n", a/b);

    // exponentiation
    printf("the value of ab is %f\n", pow(a,b)); 

    printf("the value of 6+5.6 is %d\n", 6+5.6); //returns nothing
    printf("the value of 6+5.6 is %f\n", 6+5.6); //returns correct value
    printf("the value of 6.1+5.6 is %f\n", 6.1+5.6); //returns correct value
    printf("the value of 5/2 is %d\n", 5/2); 
    return 0;
}