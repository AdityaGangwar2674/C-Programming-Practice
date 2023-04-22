#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main ()
{
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.69;
    strcpy(facebook[0].code,"Aditya");

    facebook[1].code=101;
    facebook[1].salary=120.69;
    strcpy(facebook[1].code,"Abhishek");
    return 0;
}