#include <stdio.h>

int main ()
{
    int a=11;
    scanf("%d", &a);

    while(a<10){
        printf("%d\n",a);
        a++;
    }
    return 0;
}