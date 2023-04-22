#include <stdio.h>

int main ()
{
    int i=1, sum=0, n=10;

    // for (i; i<=n;i++){
    //     sum+=i;
    // }
    // printf("the value of sum (1 to 10) is %d\n", sum);

    // do
    // {
    //     sum+=i;
    //     i++;
    // } while (i<=n);
    // printf("the value of sum (1 to 10) is %d\n", sum);

    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("the value of sum (1 to 10) is %d\n", sum);
    
    return 0;
}