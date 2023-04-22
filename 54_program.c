#include <stdio.h>

int main()
{
    int decimal, octal = 0, i = 1;

    printf("Enter a decimal integer: ");
    scanf("%d", &decimal);

    // convert decimal to octal
    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Octal equivalent: %d", octal);

    return 0;
}
