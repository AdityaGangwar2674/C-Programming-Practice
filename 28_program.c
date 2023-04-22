#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, a, b, r;
    float dist;
    printf("enter the coordinates of the center of the circle : ");
    scanf("%d %d", &x, &y);

    printf("enter the radius of the circle : ");
    scanf("%d", &r);

    printf("enter the coordinates of the point : ");
    scanf("%d %d", &a, &b);

    dist = sqrt(pow((x - a), 2) + pow((y - b), 2));
    
    printf("distance between the center and the point = %f\n", dist);
    if (dist > r)
    {
        printf("point is lying outside the circle\n");
    }
    else if (dist < r)
    {
        printf("point is lying inside the circle\n");
    }
    else if (r = dist)
    {
        printf("point is lying on the circle\n");
    }

    return 0;
}