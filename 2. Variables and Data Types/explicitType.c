// Program in C to demonstrate explicit typecasting (narrowing conversion)
#include <stdio.h>
int main() 
{
    int a;
    float b = 5.5;
    // Explicit typecasting (narrowing conversion)
    a = (int)b;
    printf("Explicit Typecasting: %d\n", a);
    return 0;
}