#include <stdio.h>

int main()
{
    int class, sub;
    printf("enter the class obtained by the student : ");
    scanf("%d", &class);
    printf("enter the number of subject student has failed in  : ");
    scanf("%d", &sub);

    switch (class)
    {

    case 1:
        if (sub <= 3)
        {
            printf("he got the grace of %d marks\n", 5 * sub);
        }
        else
        {
            printf("he did not get any grace marks\n");
        }
        break;

    case 2:
        if (sub <= 2)
        {
            printf("he got the grace of %d marks\n", 4 * sub);
        }
        else
        {
            printf("he did not get any grace marks\n");
        }
        break;

    case 3:
        if (sub <= 1)
        {
            printf("he got the grace of %d marks\n", 5 * sub);
        }
        else
        {
            printf("he did not get any grace marks\n");
        }
        break;
    }
    return 0;
}