#include <stdio.h>
int rsum(int n);
int main()
{
    int num, sum, n;
    printf("enter a number : ");
    scanf("%d", &num);
    sum = rsum(num);
    printf("sum of digits = %d\n", sum);
    return 0;
}
int rsum(int n)
{
    int s, rem;
    if (n != 0)
    {
        rem = n % 10;
        s = rem + rsum(n / 10);
    }
    else
    {
        return 0;
    }
    return s;
}