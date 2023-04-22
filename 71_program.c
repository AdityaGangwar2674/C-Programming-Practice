#include <stdio.h>
int calsum(int x,int y, int z){
    int d=x+y+z;
    return d;
}
int main ()
{
    int a,b,c,sum;
    printf("enter three integers : ");
    scanf("%d %d %d", &a,&b,&c);
    sum=calsum(a,b,c);
    printf("sum of the three integers = %d\n", sum);
    return 0;
}