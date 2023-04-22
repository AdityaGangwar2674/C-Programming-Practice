#include <stdio.h>
int fact(int num)
{
    int i;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num, factorial;
    printf("enter the number : ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("factorial of %d = %d\n", num, factorial);
    return 0;
}