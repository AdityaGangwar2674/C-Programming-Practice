#include <stdio.h>

int main()
{
    int age_r, age_s, age_a;
    printf("enter age of ram : ");
    scanf("%d", &age_r);

    printf("enter age of shyam : ");
    scanf("%d", &age_s);

    printf("enter age of ajay : ");
    scanf("%d", &age_a);

    if (age_a > age_r && age_s>age_r)
    {
        printf("ram is youngest\n");
    }
    else if(age_a>age_s)
    {
        printf("shyam is youngest\n");
    }
    else{
        printf("ajay is youngest\n");
    }

    return 0;
}