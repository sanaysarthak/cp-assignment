#include <stdio.h>
int main() 
{
    // Integer variables
    int i = 42;
    short shortI = 32767; // Short integer
    long longI = 1234567890L; // Long integer

    // Floating-point variables
    float f = 3.14f;
    double d = 2.71828; // Double-precision floating-point

    // Character variables
    char c = 'A';

    // String variables
    char str[100] = "Sarthak Sanay";   
    // Printing the values
    printf("Integer Variable: %d\n", i);
    printf("Short Variable: %d\n", shortI);
    printf("Long Variable: %ld\n", longI);
    printf("Float Variable: %.2f\n", f);
    printf("Double Variable: %.5f\n", d);
    printf("Character Variable: %c\n", c);
    printf("String Variable: %s\n", str);
    return 0;
}