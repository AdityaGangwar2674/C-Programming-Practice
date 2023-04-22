#include <stdio.h>

int main()
{
    double population = 100000; // Starting population
    int year;

    printf("Population at the end of each year in the last decade:\n");
    for (year = 1; year <= 10; year++)
    {
        population *= 1.1; // Increase population by 10% each year
        printf("Year %d: %.0f\n", year, population);
    }

    return 0;
}
