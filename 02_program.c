#include <stdio.h>

int main ()
{
    float basic_sal, da, hra, gross_sal;
    printf("enter the basic salary of ramesh = ");
    scanf("%f", &basic_sal);
    da=0.4*basic_sal;
    hra=0.2*basic_sal;
    gross_sal=da+hra+basic_sal;

    printf("basic salary of ramesh = %f\n", basic_sal);
    printf("daily allowance  of ramesh = %f\n", da);
    printf("house rent allowance of ramesh = %f\n", hra);
    printf("basic salary of ramesh = %f\n", gross_sal);
    return 0;
}