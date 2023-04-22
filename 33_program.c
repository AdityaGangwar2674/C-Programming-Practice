#include <stdio.h>

int main ()
{
    char g, qual;
    int yos, sal;

    printf("enter gender and qual:");
    scanf("%c %c", &g, &qual);
    printf("enter yos :");
    scanf("%d", &yos);
    
    

    if(g=='m'&& yos>=10 && qual=='p'){
        sal=11000;
    }
    else if(g=='m'&& yos>=10 && qual=='g'){
        sal=10000;
    }
    else if(g=='m'&& yos<10 && qual=='p'){
        sal=10000;
    }
    else if(g=='m'&& yos>10 && qual=='g'){
        sal=7000;
    }


    else if(g=='f'&& yos>=10 && qual=='p'){
        sal=12000;
    }
    else if(g=='f'&& yos>=10 && qual=='g'){
        sal=9000;
    }
    else if(g=='f'&& yos<10 && qual=='p'){
        sal=10000;
    }
    else if(g=='f'&& yos<10 && qual=='g'){
        sal=6000;
    }

printf("salary of the employee is = %d\n", sal);
    return 0;
}