#include <stdio.h>

int main ()
{
    FILE *ptr;
    int a,b,c;
    ptr=fopen("10_pra.txt","r");
    fscanf(ptr,"%d %d %d", &a,&b,&c);
    printf("the values of a b c are = %d %d %d\n",a,b,c);
    fclose(ptr);
    return 0;
}