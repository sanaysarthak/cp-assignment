// Program in C to explore different data types in C (int, float, char) and write programs to manipulate them.

#include <stdio.h>
int main()
{

    // Exploring and performing operations on the Integer (int) data type.
    int i1 = 400, i2= 100, iRes;
    printf("Performing arithmetical operations on the Integer (int) data type.\n");

    iRes = i1+i2; // addition
    printf("%d + %d = %d\n", i1, i2, iRes);
    iRes = i1-i2; // subtraction
    printf("%d - %d = %d\n", i1, i2, iRes);
    iRes = i1*i2; // multiplication
    printf("%d x %d = %d\n", i1, i2, iRes);
    iRes = i1/i2; // division
    printf("%d / %d = %d\n\n", i1, i2, iRes);


    // Exploring and performing operations on the Float data type.
    float f1 = 100.45, f2 = 30.2, fRes;
    printf("Performing arithmetic operations on the Float data type.\n");

    fRes = f1+f2; // addition
    printf("%f + %f = %f\n", f1, f2, fRes);
    fRes = f1-f2; // subtraction
    printf("%f - %f = %f\n", f1, f2, fRes);
    fRes = f1*f2; // multiplication
    printf("%f x %f = %f\n", f1, f2, fRes);
    fRes = f1/f2; // division
    printf("%f / %f = %f\n\n", f1, f2, fRes);
    

    // Manipulating character (char) data type
    char c1='A', c2='B';
    printf("Concatenating twp characters: %c%c\n", c1, c2);
    // Returning ASCII values designated to that character
    printf("ASCII value of %c is: %d\n", c1, c1);
    printf("ASCII value of %c is: %d", c2, c2);
    return 0;
}