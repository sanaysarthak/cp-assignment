// To implement a program to perform Arithmetic operations on variables

#include <stdio.h>
int main()
{
    int a=10, b=5, sum, diff, prod;
    float quotient;
 
    // Performing the Arithmetic operations
    sum= a+b; // Addition
    diff= a-b; // Subtraction
    prod= a*b; // Multiplication
    quotient= (float)a/b; // Division

    // Printing the results
    printf("Sum is: %d\n", sum);
    printf("Difference is: %d\n", diff);
    printf("Product is: %d\n", prod);
    printf("Quotient is: %d\n", quotient);

    return 0;
}