#include <stdio.h>
void multbyten(int *num){
    *num=*num*10;
}
int main ()
{
    int x=5;
    printf("og value of x = %d\n", x);
    multbyten(&x);
    printf("new value of x = %d\n", x);
    return 0;
}