#include <stdio.h>

int main ()
{
    int p, n, count;
    float r, si;
    count=1;

    while (count<=3)
    {
        printf("enter the values of p, n, r :");
        scanf("%d %d %f", &p, &n, &r);

        si=p*n*r/100;
        printf("the simple interest is = %f\n", si);

        count++;
    }
    
    return 0;
}