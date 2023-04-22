#include <stdio.h>

int main (){
    int marks;

    printf("enter the marks of the student\n");
    scanf("%d", &marks);

    if (marks>=91 && marks<=100){
        printf("grade is A\n ");
    }
    else if(marks>=81 && marks<=90){
        printf("grade is B\n ");
    }
    else if(marks>=71 && marks<=80){
        printf("grade is C\n ");
    }
    else if(marks>=61 && marks<=70){
        printf("grade is D\n ");
    }
    else if(marks<70 && marks>=0){
        printf("grade is F\n ");
    }
    else{
        printf("invalid marks");
    }

    return 0;
}