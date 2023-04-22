#include <stdio.h>

int main ()
{
    char ch;
    printf("enter a character from keyboard : ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        printf("character is an uppercase letter");
    }
    else if (ch>=97 && ch<=122){
        printf("character is a lowercase letter");
    }
    else if (ch>=48 && ch<=57){
        printf("character is a digit");
    }
    else if ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)){
        printf("character is a symbol");
    }

    return 0;
}