// Program in C to calculate the power of a number using a user-defined function

#include <math.h>
#include <stdio.h>
int power(int b, int p)
{
    int pwr= pow(b, p);
    return pwr;
}
int main()
{
    int b, p;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter power: ");
    scanf("%d", &p);
    int pw= power(b, p);
    printf("%d raised to the power %d is:-  %d",b,p,pw);
    return 0;
}