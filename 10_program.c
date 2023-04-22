#include <stdio.h>

int main()
{
    int n, num_notes = 0;
    int notes[6] = {100, 50, 10, 5, 2, 1};

    printf("Enter the amount in rupees: ");
    scanf("%d", &n);

    printf("The smallest number of notes required to make up Rs %d is:\n", n);

    for (int i = 0; i < 6; i++)
    {
        num_notes += n / notes[i];
        n %= notes[i];

        if (num_notes > 0)
        {
            printf("%d note(s) of Rs %d\n", num_notes, notes[i]);
            num_notes = 0;
        }
    }
 int amount, temp;  
  
    printf("Enter amount\n");  
    scanf("%d", &amount);  
  
    temp   = amount / 100;  
    amount = amount - (temp*100);  
  
    printf("%d   x 100 = %d\n", temp, (temp*100));  
  
    temp   = amount / 50;  
    amount = amount - (temp*50);  
  
    printf("%d   x 50  = %d\n", temp, (temp*50));  
  
    temp   = amount / 10;  
    amount = amount - (temp*10);  
  
    printf("%d   x 10  = %d\n", temp, (temp*10));  
  
    temp   = amount / 5;  
    amount = amount - (temp*5);  
  
    printf("%d   x 5   = %d\n", temp, (temp*5));  
  
    temp   = amount / 2;  
    amount = amount - (temp*2);  
  
    printf("%d   x 2   = %d\n", temp, (temp*2));  
  
    temp   = amount / 1;  
    amount = amount - (temp*1);  
  
    printf("%d   x 1   = %d\n", temp, (temp*1));  
    return 0;
}

   
  
