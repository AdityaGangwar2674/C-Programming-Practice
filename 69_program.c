#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, num, i, fact, isprime = 1;

    printf("---this menu driven application is capabable of performing following operations---\n");
    printf("1.Factorial\n");
    printf("2.Prime\n");
    printf("3.Odd/Even\n");
    printf("4.Exit\n");

    printf("your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter a number : ");
        scanf("%d", &num);
        fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("factorial value = %d\n", fact);
        break;

    case 2:
        printf("enter a number : ");
        scanf("%d", &num);

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d is a prime number.", num);
        }
        else
        {
            printf("%d is a composite number.", num);
        }

        break;

    case 3:
        printf("enter a number : ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("%d is an even number\n", num);
        }
        else
        {
            printf("%d is an odd number\n", num);
        }
        break;

    case 4:
        exit(0);
        break;

    default:
        printf("wrong choice\n");
    }

    return 0;
}