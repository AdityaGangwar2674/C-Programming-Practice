#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "for";
    char s2[] = "joke";

    int val1 = strcmp(s1, s2);
    int val2 = strcmp(s2, s1);

    printf("the value is %d\n", val1);
    printf("the value is %d\n", val2);
    return 0;
}