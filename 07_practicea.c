#include <stdio.h>

int main ()
{
    int arr[10];
    int *ptr=&arr[0];
    ptr=arr;
    
    ptr=ptr+2;

    if(ptr==&arr[2]){
        printf("points to the same location\n");
    }
    else{
        printf("do not points to the same location");
    }
    return 0;
}