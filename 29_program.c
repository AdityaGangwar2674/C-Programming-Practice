#include <stdio.h>

int main ()
{
    int x, y;
    printf("enter the coordinates of the point : ");
    scanf("%d %d", &x, &y);

    printf("the coordinates of the point is (%d,%d)\n", x, y);

    if(x==0&&y==0){
        printf("the point is origin");}
    else if (x==0)
    {
        printf("the point lies on y-axis");
    }
    else if(y==0){
        printf("the point lies on x-axis");
    }
    else{
        printf("point neither lies on x-axis or y-axis or origin");
    }
    
    return 0;
}