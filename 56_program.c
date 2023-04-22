#include <stdio.h>

int main ()
{
    int num, i=2;
    printf("enter a number : ");
    scanf("%d", &num);

while(i<num){
if(num%i==0){
    printf("%d is a composite number\n",num);
    break;
}
i++;
}
if(i==num){
    printf("%d is a prime number\n",num);
}
    return 0;
}