#include <stdio.h>

int main()
{
    int i = 2, n;
    printf("prime numbers between 1 and 300 : \n");

    for (n = 1; n <= 300; n++)
    {
        i = 2;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {

                break;
            }
        }
        if (i == n)
        {
            printf("%d\t", n);
        }
    }
    return 0;
}