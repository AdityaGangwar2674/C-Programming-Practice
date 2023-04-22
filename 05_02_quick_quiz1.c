#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main ()
{
    goodmorning();
    return 0;
}

void goodmorning(){
    printf("good morning mdfk \n");
    goodafternoon();
}
void goodafternoon(){
    printf("good afternoon mdfk \n");
    goodnight();
}
void goodnight(){
    printf("good night mdfk \n");
}