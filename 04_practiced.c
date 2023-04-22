#include <stdio.h>

int main ()
{
    int n, i, prime=1;
    printf("enter a number :");
    scanf("%d", &n);

    for(i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;}

        }
        if(prime==1 && n!=2){
            printf("this is  a prime number\n");

        }
        else{
            printf("this is not a prime number\n");
        }
        

    return 0;
}