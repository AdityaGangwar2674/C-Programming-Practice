#include <stdio.h>

int main()
{
    char ch;
    printf("enter a character from keyboard : ");
    scanf("%c", &ch);

    (ch >= 97 && ch <= 122) ? printf("character is a lowercase letter\n") :

                            printf("character is not a lowercase letter\n");

    ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) ? printf("character is a symbol\n") :

                                                                                                            printf("character is not a symbol\n");

    return 0;
}