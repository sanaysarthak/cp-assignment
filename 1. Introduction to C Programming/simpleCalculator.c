// Simple Calculator program in C that performs addition, subtraction, multiplication, and division based on user choice

#include <stdio.h>
int main()
{
    int ch, a, b;
    printf("Simple Calculator Program\nEnter 1 for addition, 2 for subtraction, 3 for multiplication, or 4 for division : ");
    scanf("%d", &ch);
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    if (ch==1)
        printf("Sum of %d and %d is %d \n\n", a, b, a+b);
    else if (ch==2)
        printf("Difference of %d and %d is %d \n\n", a, b, a-b);
    else if (ch==3)
        printf("Product of %d and %d is %d \n\n", a, b, a*b);
    else if (ch==4)
        printf("Quotient of %d and %d is %d \n\n", a, b, a/b);
    else
        printf("Enter correct number for choice.");
        
    return 0;
}