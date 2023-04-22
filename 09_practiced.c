#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;

void display(date d)
{
    printf("the date is : %d/%d/%d", d.date, d.month, d.year);
}
int datecmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}
int main()
{
    date d1 = {5, 3, 2023};
    date d2 = {8, 7, 2024};
    display(d1);printf("\n");
    display(d2);printf("\n");
    

    int a=datecmp(d1,d2);
    printf("date comparison function returns %d\n", a);
    return 0;
}