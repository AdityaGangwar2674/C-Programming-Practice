#include <stdio.h>
void cal(float a, int b, int n, float *power, int *fact)
{
    float res = 1;
    for (int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    *power = res;
    res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
        *fact = res;
    }
}
int main()
{
    float a;
    int b, n, fact;
    float pow;
    printf("enter a and b for calculating a raised to b : ");
    scanf("%f %d", &a, &b);
    printf("enter number whose factorial to be calculated : ");
    scanf("%d", &n);
    cal(a, b, n, &pow, &fact);
    printf("power = %f\nfactorial = %d\n", pow, fact);
    return 0;
}