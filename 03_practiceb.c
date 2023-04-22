#include <stdio.h>

int main ()
{
    int total_percentage;
    int p, c, m;

    printf("Physics percentage\n");
    scanf("%d", &p);

    printf("Chemistry percentage\n");
    scanf("%d", &c);

    printf("Maths percentage\n");
    scanf("%d", &m);

    total_percentage = (p + c + m)/3;

    if (p>=33){
        printf("you are pass in Physics\n");
    }
    else{
        printf("you are fail in Physics\n");
    }

    if (c>=33){
        printf("you are pass in Chemistry\n");
    }
    else{
        printf("you are fail in Chemistry\n");
    }

    if (m>=33){
        printf("you are pass in Maths\n");
    }
    else{
        printf("you are fail in Maths\n");
    }

    if (total_percentage<=40 || p<=33 || m<=33 || c<=33){
        printf("your total percentage is %d you are failed", total_percentage);
    }
    else {
        printf("you are promoted to next class\n");
    }

    return 0;
}