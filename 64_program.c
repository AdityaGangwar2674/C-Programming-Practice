#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("pythagorean triplets with side length less than or equal to 30\n");
    for(c=1;c<=30;c++){
        for(b=1;b<c;b++){
            for(a=1;a<b;a++){
                if(a*a+b*b==c*c){
                    printf("%d %d %d\n", a,b,c);
                }
            }
        }
    }
    return 0;
}