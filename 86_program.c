#include <stdio.h>
void factor(int n, int i);
int main ()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    printf("prime factors are : ");
    factor(num,2);
    return 0;
}
void factor(int n, int i){
    if(i<=n){
        if(n%i==0){
            printf("%d ", i);
            n=n/i;
        }
        else{
            i++;
        }
        factor(n,i);
    }
}