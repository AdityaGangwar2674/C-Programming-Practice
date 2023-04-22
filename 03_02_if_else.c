#include <stdio.h>

int main (){
    int age;
    int vip_pass=0;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age<=70 && age>=18 || vip_pass==1){
        printf("you are above 18 and below 70, you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    // if(age==50){
    //     printf("half century\n");
    // }
    return 0;
}