#include <stdio.h>

int main ()
{
    int ascii=0;
    while(ascii<=255){
        printf("the value is %d and equivalent character %c  \n", ascii, ascii);
        ascii++;
    }
    return 0;
}