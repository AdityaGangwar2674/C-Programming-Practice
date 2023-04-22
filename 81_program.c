#include <stdio.h>
void circle(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a, b, c;
    printf("enter three integers a b c : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("the values of a b c before right circular shift : \n");
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
    circle(&a, &b, &c);
    printf("the values of a b c after right circular shift : \n");
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
    return 0;
}