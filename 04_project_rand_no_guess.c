#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
   int n ,guess, nguess=1;
   srand(time(0));
   n=rand()%100+1;//generates a no b/w 1 and 100
//    printf("the number is %d", n); 
   //keep running loop until no. is guessed

   do
   {
    printf("guess a number between 1 to 100 : \n");
    scanf("%d", &guess);
    if (guess>n){
        printf("lower number please!\n");
    }
    else if(guess<n){
        printf("higher number please!\n");
    }
    else{
        printf("you guessed it in %d attempts\n", nguess);
    }
    nguess++;
   } while (guess!=n);
   
   return 0;
}