#include <stdio.h>

int main()
{
    int l, b, area, per;
    printf("enter the length of the rectangle : ");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle : ");
    scanf("%d", &b);

    area = l * b;
    per = 2 * (l + b);

    printf("area of the rectangle = %d\n", area);
    printf("perimeter of the rectangle = %d\n", per);

    if (area > per)
    {
        printf("area of rectangle is greater than perimeter\n");
    }
    else
    {
        printf("perimeter of rectangle is greater than area\n");
    }

    return 0;
}