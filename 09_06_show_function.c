#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp){
    printf("code of employee is %d\n",emp.code);
    printf("salary of employee is %f\n", emp.salary );
    printf("name of employee is %s\n", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;

   ptr=&e1;
   ptr -> code=101;
   ptr ->salary=11.01;
   strcpy(ptr->name,"Aditya");

   show(e1);

    return 0;
}