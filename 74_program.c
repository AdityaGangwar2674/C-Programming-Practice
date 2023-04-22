#include <stdio.h>
int romanise(int y, int k, char ch)
{
    int i, j;
    j = y / k;
    for (int i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }
    return (y % k);
}
int main()
{
    int yr;
    printf("enter year : ");
    scanf("%d", &yr);

    yr = romanise(yr, 1000, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 50, 'l');
    yr = romanise(yr, 10, 'x');
    yr = romanise(yr, 5, 'v');
    romanise(yr, 1, 'i');

    return 0;
}