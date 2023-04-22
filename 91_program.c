#include <stdio.h>
#define pi 3.14
#define area(x) (pi * x * x)
#define sqaure(n) n *n
int main()
{
    float a;
    int r, n;

    printf("enter radius of the circle : ");
    scanf("%d", &r);
    a = area(r);
    printf("area of circle = %f\n", a);

    printf("enter a number : ");
    scanf("%d", &n);
    int s = sqaure(n);
    printf("square of %d = %d\n", n, s);

    return 0;
}