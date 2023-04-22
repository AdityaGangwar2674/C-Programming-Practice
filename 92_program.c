#include <stdio.h>
#define isupper(x) (x >= 65 && x <= 90 ? 1 : 0)
#define islower(x) (x >= 97 && x <= 122 ? 1 : 0)
#define isalpha(x) (isupper(x) || islower(x))
#define big(x, y) (x > y ? x : y)

int main()
{
    char ch;
    int d, a, b;
    printf("enter any character or alphabet : ");
    scanf("%c", &ch);
    if (isupper(ch) == 1)
    {
        printf("you have entered a capital letter\n");
    }
    if (islower(ch) == 1)
    {
        printf("you have entered a small case letter\n");
    }
    if (isalpha(ch) != 1)
    {
        printf("yoy have entered character other than alphabet\n");
    }
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    d = big(a, b);
    printf("bigger number is : %d", d);
    return 0;
}