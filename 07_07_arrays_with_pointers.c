#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("enter value of marks for student %d : ", i + 1);
        scanf("%d", ptr);//or scanf("%d", &i);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("value of marks for student %d : %d\n", i + 1, marks[i]);
    }
    return 0;
}