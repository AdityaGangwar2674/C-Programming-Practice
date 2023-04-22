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
    struct employee aditya = {100, 6969.69, "Aditya"};

    printf("code is %d\n", aditya.code);
    printf("salary is %f\n", aditya.salary);
    printf("name is %s\n", aditya.name);
    
    return 0;
}