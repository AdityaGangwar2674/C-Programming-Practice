#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int s = sum(n);
    printf("sum of first %d natural numbers = %d\n", n, s);
    return 0;
}