#include <stdio.h>

int main ()
{
    int a1, a2, a3;
    printf("enter the value of three angles of the triangles in degrees : ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if((a1+a2+a3)==180){
        printf("the triangle is valid\n");
    }
    else{
        printf("thr triangle is invalid");
    }
    return 0;
}