#include <stdio.h>
void display(); //function prototype
int main ()
{
    int a; 
    printf("initializing display fn\n");
    display(); //function call
    printf("display fn finished its work\n");
    return 0;
}
void display() //function definition
{
    printf("i am display\n");
}