#include <stdio.h>
#include <math.h>
int main ()
{
    double l1, l2, g1, g2;
    printf("enter the coordinates of one place (l1,g1) : ");
    scanf("%lf %lf", &l1, &g1);
    printf("enter the coordinates of other place (l2,g2) : ");
    scanf("%lf %lf", &l2, &g2);

    double d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));

    printf("the distance between the two places is = %lf\n", d);
    return 0;
}