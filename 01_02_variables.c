#include <stdio.h>
/*this is my first c program*/
int main()
{
    int a=4; float b=8.5;  char c='p';
    // int b=8.5; //not recommended bcz 8.5 is not an int
    int d=40; int e=40+a;
    printf("the value of a is %d\n",a);
    printf("the value of b is %f\n",b);
    printf("the value of c is %c\n",c);
    printf("the sum of a and d is %d\n",a+d);
    printf("the sum of a and e is %d\n",e);
    return 0;
}