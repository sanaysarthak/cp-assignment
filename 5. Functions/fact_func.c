// Program in C to find the factorial of a number entered by the user using function

#include <stdio.h>
int fact(int n)
{
    int p=1;
    for(int i=n; i>=1; i--)
    {
        p= p*i;
    }
    return p;
}

int main()
{
    int n, fac;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, fact(n));
    return 0;
}