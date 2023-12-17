// Program in C to check whether a year given by the user is leap year or not using logical operators.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if(year%4==0)
        printf("%d is a leap year!", year);
    else
        printf("%d is not a leap year!", year);
    return 0;
}