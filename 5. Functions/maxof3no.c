// Program in C to find the maximum of three numbers

#include <stdio.h>
int findMax(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c, max;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    max= findMax(a, b, c);
    printf("The maximum of the three numbers is:-  %d", max);
    return 0;
}