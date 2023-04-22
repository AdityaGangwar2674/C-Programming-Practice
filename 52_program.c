#include <stdio.h>

int main()
{
    int num, ct_pos = 0, ct_neg = 0, ct_zero = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            ct_pos++;
        }
        else if (num < 0)
        {
            ct_neg++;
        }
        else
        {
            ct_zero++;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Number of positive values entered: %d\n", ct_pos);
    printf("Number of negative values entered: %d\n", ct_neg);
    printf("Number of zero values entered: %d\n", ct_zero);

    return 0;
}
