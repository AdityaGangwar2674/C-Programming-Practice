#include <stdio.h>

int main()
{
    int i, num, x, y, count;
    num = 30000;

    for (int i = 1; i <= 30000; i++)
    {
        count = 0;
        for (x = 1; x * x * x < i; x++)
        {
            for (y = x; y * y * y + x * x * x <= i; y++)
            {
                if (x * x * x + y * y * y == i)
                {
                    count++;
                }
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

