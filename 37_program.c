#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, ls, sum;
    printf("enter the sides : ");
    scanf("%d %d %d", &a, &b, &c);
    int p, q, r;
    p = pow(a, 2);
    q = pow(b, 2);
    r = pow(c, 2);

    if (a > b)
    {
        if (a > c)
        {
            sum = b + c;
            ls = a;
        }
        else
        {
            sum = a + b;
            ls = c;
        }
    }
    else
    {
        if (b > c)
        {
            sum = c + a;
            ls = b;
        }
        else
        {
            sum = a + b;
            ls = c;
        }
    }

    if (sum > ls)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is invalid\n");
    }

    if (a == b && b == c && c == a)
    {
        printf("equilateral triangle\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("isosceles triangle");
    }

    else if ((p = q + r) || (q = p + r) || (r = q + p))
    {
        printf("right angled triangle");
    }
    else if (p != q && q != r && r != p)
    {
        printf("scalene triangle");
    }
    return 0;
}