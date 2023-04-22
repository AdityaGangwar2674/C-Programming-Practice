#include <stdio.h>

int fibonacci(int n);

    int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth element of the Fibonacci series is: %d", n, fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    { // base case
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
    }
}