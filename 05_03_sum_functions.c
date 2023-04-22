#include <stdio.h>
int sum(int a, int b); //sum is a function which takes a and b as integer and returns int
int main ()
{
int c;
c=sum(2,5);
printf("he value of c is %d", c);
sum(2,5); //functn call   
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}