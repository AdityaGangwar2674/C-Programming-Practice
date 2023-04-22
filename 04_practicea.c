#include <stdio.h>

int main ()
{
    int i, n;
    printf("***Multiplication table of 10***\n");
    for(i=1; i<11; i++){
        printf("10 X %d = %d\n", i, 10*i);
    }

    printf("***Multiplication table of 10 in reverse order***\n");
    for(i=10; i; i--){
        printf("10 X %d = %d\n", i, 10*i);
    }

    printf("enter a number : ");
    scanf("%d", &n);
    printf("***Multiplication table of %d is***\n", n);
    for(i=1; i<11; i++){
        printf("%d X %d = %d\n", n,i, n*i);
    }
    return 0;
}