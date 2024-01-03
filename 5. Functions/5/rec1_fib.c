// Implement recursive functions for Fibonacci series, factorial, and any other suitable problem.
// Implementing fibonacci series in C using recursive function
#include <stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("%d\t", fib(i));
    }
    return 0;
}
