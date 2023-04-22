#include <stdio.h>

int main()
{
    int width = 1189;
    int height = 841;
    int i;
    for (i = 0; i <= 8; i++)
    {
        printf("A%d: %d mm x %d mm\n", i, width, height);
        int temp = width;
        width = height / 2;
        height = temp / 2;
    }
    return 0;
}