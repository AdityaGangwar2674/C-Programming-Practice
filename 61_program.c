#include <stdio.h>

int main()
{
    double y, x, i;

    printf("  y  |   x   |  i  \n");
    printf("-------------------\n");

    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2 + (y + 0.5 * x);
            printf("%3.0lf  | %4.1lf  | %4.1lf  \n", y, x, i);
        }
    }

    return 0;
}
