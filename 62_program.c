#include <stdio.h>
#include <math.h>

int main()
{
    float a, r;
    int p, q, n, count;

    for (count = 1; count <= 3; count++)
    {
        printf("enter values of p,q,n,r : ");
        scanf("%d %d %d %f", &p, &q, &n, &r);

        a = pow((p * (1 + (r / q))), (n * q));
        printf("compound interest = %f\n", a);
    }
    return 0;
}