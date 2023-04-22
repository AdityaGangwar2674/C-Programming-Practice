#include <stdio.h>

int main()
{
    int marks[5]; // allocate 4 spaces for integers
    printf("enter marks for student 1 : ");
    scanf("%d", &marks[0]);
    printf("enter marks for student 2 : ");
    scanf("%d", &marks[1]);
    printf("enter marks for student 3 : ");
    scanf("%d", &marks[2]);
    printf("enter marks for student 4 : ");
    scanf("%d", &marks[3]);
    printf("enter marks for student 5 : ");
    scanf("%d", &marks[4]);

    printf("you have entered %d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);

        return 0;
}