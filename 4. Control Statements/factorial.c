// Program in C to find the factorial of a number using iterative approach  

#include <stdio.h>
int main()
{
    int n, p=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
        p= p*i; 
    }
    printf("Factorial of %d is %d", n, p);
    return 0;
}