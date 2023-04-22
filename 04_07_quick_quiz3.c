#include <stdio.h>

int main ()
{
    int n; int a=0;
    printf("enter a no. ");
    scanf("%d", &n);

    for (a; a<n; a++){
        printf("%d", a+1);
        printf("\n");
    }
    return 0;
}