#include <stdio.h>

int main ()
{
    int i=1, n, factorial=1;
    
    printf("enter a number : ");
    scanf("%d", &n);
    for(i;i<=n;i++){
        factorial=factorial*i;
    }
    printf("the value of factorial %d is %d\n", n, factorial);

    printf("enter a number : ");
    scanf("%d", &n);
    while(i<=n){
        factorial=factorial*i;
        i++;
    }

    printf("the value of factorial %d is %d", n, factorial);
    return 0;
}