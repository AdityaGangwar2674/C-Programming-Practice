#include <stdio.h>

int main()
{
    int n, num, min, max, range;

    // Read the number of input values
    printf("Enter the number of values: ");
    scanf("%d", &n);

    // Read the input values
    printf("Enter %d values:\n", n);
    scanf("%d", &num);
    min = max = num;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    // Compute the range and print the result
    range = max - min;
    printf("Range = %d\n", range);

    return 0;
}
