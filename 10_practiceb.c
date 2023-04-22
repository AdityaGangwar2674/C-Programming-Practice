#include <stdio.h>

int main ()
{
    FILE *ptr;
    int num;
    printf("enter the integer you need the table of : ");
    scanf("%d", &num);
    ptr=fopen("10_table.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d x %d = %d\n", num,i, num*i);
    }
    fclose(ptr);
    return 0;
}