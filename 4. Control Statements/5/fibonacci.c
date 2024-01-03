// Program in C to generate the Fibonacci series up to a specified number of terms using a loop

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:-\n");
    int a=0, b=1, c=a+b; // initializing the first three terms
    printf("%d\t%d\t",a, b);
    for(int i=3; i<=n; i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c= a+b;
    }
    return 0;
}