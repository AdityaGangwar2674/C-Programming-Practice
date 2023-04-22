#include <stdio.h>
#include <math.h>

void stats(int *sum, float *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;
    printf("enter 5 numbers : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = (float)*sum / 5;
    *stdev = sqrt(((pow((n1 - *avg), 2.0)) + (pow((n2 - *avg), 2.0)) + (pow((n3 - *avg), 2.0)) + (pow((n4 - *avg), 2.0)) + (pow((n5 - *avg), 2.0))) / 5);
}
int main()
{
    int sum;
    float avg;
    double stdev;
    stats(&sum, &avg, &stdev);
    printf("sum = %d\naverage = %f\nstandard deviation = %lf\n", sum, avg, stdev);
    return 0;
}