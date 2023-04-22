#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("enter the value of x ");
    scanf("%d", &x);
    printf("enter the value of y ");
    scanf("%d", &y);

    printf("the value of 3x-8y is %d\n", 3 * x - 8 * y);
    printf("the value of 3x/8y is %d\n", (8 * y) / (3 * x));
    // 8*3/3*2 = 24/6 will give wrong answer bcz first 8*3 will execute then 24/3 will execute then 8*2 will execute.
    return 0;
}