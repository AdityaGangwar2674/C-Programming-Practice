#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // printf("size of int in my pc is %d\n", sizeof(int));
    // printf("size of float in my pc is %d\n", sizeof(float));
    // printf("size of char in my pc is %d\n", sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter the value of %d element : " ,i);
        scanf("%d", &ptr[i]);
    }


    for(int i=0;i<6;i++){
        printf("the value of %d element is %d\n" ,i, ptr[i]);
    }
    return 0;
}