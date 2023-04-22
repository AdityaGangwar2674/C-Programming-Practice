#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    e1.code=100;
    e1.salary=234.69;
    // e1.name="aditya";---->wont work
    strcpy(e1.name,"Aditya");

    printf("%d\n", e1.code);
    printf("%d\n", e1.salary);
    printf("%f\n", e1.name);
    return 0;
}