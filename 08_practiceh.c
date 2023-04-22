#include <stdio.h>

int search(char str[], char ch)
{
    int i, flag = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    if (search(str, ch) == 1)
    {
        printf("Character '%c' found in the string.", ch);
    }
    else
    {
        printf("Character '%c' not found in the string.", ch);
    }

    return 0;
}


