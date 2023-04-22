#include <stdio.h>

int main ()
{
    int tax= 0,  income;
    printf("enter your income\n");
    scanf("%d", &income);

    if (income>=250000 && income<=500000){
        tax = tax + (0.05*income);
    }
    else if (income>=500000 && income<=1000000){
        tax = tax + (0.20*income);
    }
    else if (income>=100000){
        tax = tax + (0.30*income);
    }

    printf("the tax implemented on the person is : %d", tax);
    return 0;
}