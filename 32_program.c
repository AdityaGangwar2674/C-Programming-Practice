#include <stdio.h>

int main ()
{
    int age;
    char sex, ms;
    printf("enter age, sex, marital status : \n");
    scanf("%d %c %c", &age, &sex, &ms);

    if((ms=='m')||(ms=='u' && sex=='m' && age>=30)||(ms=='u' && sex=='f' && age>=25)){
        printf("driver should be insured\n");
    }
    else{
        printf("driver should not be insured\n");
    }
    return 0;
}