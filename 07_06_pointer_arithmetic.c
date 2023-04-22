#include <stdio.h>

int main ()
{
    int i=34;
    int *ptr=&i;

    printf("value of ptr is %u\n",ptr);
    ptr++;
    ptr--;
    ptr--;
    printf("value of ptr is %u\n",ptr);

    char c='a';
    char *pt=&c;

    printf("value of ptr is %u\n",pt);
    pt++;
    pt--;
    pt--;
    printf("value of ptr is %u\n",pt);

    float f=3.14;
    float *p=&f;

    printf("value of ptr is %u\n",p);
    p++;
    p--;
    p--;
    printf("value of ptr is %u\n",p);
    return 0;
}