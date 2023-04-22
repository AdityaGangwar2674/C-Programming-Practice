#include <stdio.h>

int main ()
{
    int s1,s2,s3,ls,sum;
    printf("enter the three sides of triangle : ");
    scanf("%d %d %d", &s1,&s2,&s3);

    if(s1>s2){
        if(s1>s3){
            sum=s2+s3;
            ls=s1;
        }
        else{
            sum=s1+s2;
            ls=s3;
        }
    }
    else{
        if(s2>s3){
            sum=s3+s1;
            ls=s2;
        }
        else{
            sum=s1+s2;
            ls=s3;
        }
    }

    if (sum>ls)
    {
        printf("triangle is valid\n");
    }
    else{
        printf("triangle is invalid\n");
    }
    
    return 0;
}