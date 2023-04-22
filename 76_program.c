#include <stdio.h>

void printPrimeFactors(int num);

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    printPrimeFactors(num);

    return 0;
}

void printPrimeFactors(int num)
{
    int i, j, isPrime;

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}
