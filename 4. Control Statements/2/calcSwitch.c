// Implement a calculator program using switch-case statements.

#include <stdio.h>
int main()
{
    int c, n1, n2;
    printf("Enter 1 for addition, 2 for multiplication, 3 for division, and 4 for subtraction: ");
    scanf("%d", &c);
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    switch(c)
    {
        case 1:
            printf("Sum of %d and %d is %d", n1, n2, n1+n2);
            break;
        
        case 2:
            printf("Product of %d and %d is %d \n\n", n1, n2, n1*n2);
            break;

        case 3:
            printf("Quotient of %d and %d is %d \n\n", n1, n2, n1/n2);
            break;

        case 4:
            printf("Difference of %d and %d is %d \n\n", n1, n2, n1-n2);
            break;

        default:
            printf("Enter correct number as input for choice.");
            break;
    }
    return 0;
}