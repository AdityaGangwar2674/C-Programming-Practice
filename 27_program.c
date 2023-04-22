#include <stdio.h>
#include <math.h>

int main ()
{
    int x1, y1 , x2, y2, x3, y3;
    int m, n;
    printf("enter the coordinates of first point : ");
    scanf("%d %d", &x1, &y1);
    printf("enter the coordinates of second point : ");
    scanf("%d %d", &x2, &y2);
    printf("enter the coordinates of third point : ");
    scanf("%d %d", &x3, &y3);

    printf("coordinates of first point is (%d,%d)\n", x1, y1);
    printf("coordinates of second point is (%d,%d)\n", x2, y2);
    printf("coordinates of third point is (%d,%d)\n", x3, y3);

    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    

    if(m==n){
        printf("the three points fall on the same straight line \n");
    }
    else{
        printf("the three points do not fall on the same straight line \n");
    }
    return 0;
}