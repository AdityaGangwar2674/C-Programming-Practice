#include <stdio.h>
// void printarray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2]=5555;//this value will be changed in the arr array of the main as well
}

int main()
{
    int arr[] = {1, 6, 9, 69, 23, 54, 45};
    printarray(arr, 7);
    printf("%d", arr[2]);
    return 0;
}