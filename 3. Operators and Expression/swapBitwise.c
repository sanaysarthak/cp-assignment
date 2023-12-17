// Swapping two numbers using Bitwise operators
#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("Before swapping: \ta=%d   b=%d\n", a, b);
    // Swapping using bitwise XOR
    a= a^b;
    b= a^b;
    a= a^b;
    printf("After swapping: \ta=%d   b=%d\n", a, b);
    return 0;
}