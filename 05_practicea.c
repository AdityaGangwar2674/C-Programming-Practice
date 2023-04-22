#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c;

    printf("enter first number : \n");
    scanf("%d", &a);

    printf("enter second number : \n");
    scanf("%d", &b);

    printf("enter third number : \n");
    scanf("%d", &c);

    printf("the value of average is %f", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}