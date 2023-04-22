#include <stdio.h>

int main ()
{
    int n; int a=0;
    printf("enter a no. ");
    scanf("%d", &n);

    for (a=n; a; a--){
        printf("%d", a);
        printf("\n");
    }
    return 0;
}