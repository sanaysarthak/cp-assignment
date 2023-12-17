// Program in C to check whether a number entered by the user is Prime or not

#include <stdio.h>
int isPrime(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPrime(n))
        printf("%d is a Prime number!", n);
    else
        printf("%d is not a Prime number.", n);
    return 0;
}