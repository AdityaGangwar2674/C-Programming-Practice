#include <stdio.h>

int main ()
{
    int height, count=1;
    printf("enter the height of the pattern : ");
    scanf("%d", &height);

    for(int i=1;i<=height;i++){
        for(int j=1;j<=height-i;j++){
            printf(" ");
        }   
        for(int k=1;k<=i;k++){
            printf(" %d", count);
            count++;
        }
        printf("\n");
         }
    return 0;
}