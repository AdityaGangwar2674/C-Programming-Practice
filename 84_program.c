#include <stdio.h>

int main()
{
    int a, fact;
    printf("enter any number : ");
    scanf("%d", &a);
    fact = rec(a);
    printf("factortial of %d = %d\n", a, fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * rec(x - 1);
    }
    return f;
}