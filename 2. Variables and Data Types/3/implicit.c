// Program in C to demonstrate Implicit Typecasting (Widening Conversion)
#include <stdio.h>
int main()
{   int a= 10;
    float b= 5.5;
    // Implicit typecasting (widening conversion)
    float res= a+b;
    printf("Implicit Typecasting: %.2f\n", res);
    return 0;
}