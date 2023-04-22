#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    // printf("size of int in my pc is %d\n", sizeof(int));
    // printf("size of float in my pc is %d\n", sizeof(float));
    // printf("size of char in my pc is %d\n", sizeof(char));
    ptr = (int *)malloc(6 * sizeo
    f(int));
    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int *)malloc(600 * sizeof(int));
        printf("enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}