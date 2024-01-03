// Implementing a program in C to print 1 to N using a recursive function
#include <stdio.h>
int rec(int i, int n)
{
    if(i<=n)  // adding a termination condition
    {
        printf("%d\n", i);
        i++;
        rec(i, n);
    }
}
int main()
{
    int n, i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    rec(i, n);
    return 0;
}