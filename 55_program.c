#include <stdio.h>

int main()
{
    int p, n, count;
    float si, r;

    for (count = 1; count <= 3; count++)
    {
        printf("enter values of p, n, r : ");
        scanf("%d %d %f", &p, &n, &r);

        si = p * n * r / 100;
        
        printf("simple interest is = Rs. %f\n", si);
    }
    return 0;
}