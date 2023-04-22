#include <stdio.h>
int occ(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Aditya";
    int count = occ(st, 'a');
    printf("occurences = %d", count);
    return 0;
}