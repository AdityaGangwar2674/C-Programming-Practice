#include <stdio.h>

int main()
{
    int yr;
    printf("enter year : ");
    scanf("%d", &yr);
    (yr % 400 == 0 || yr % 100 != 0 && yr % 4 == 0) ? printf("%d is a leap year ", yr) : printf("%d is not a leap year ", yr);

    return 0;
}