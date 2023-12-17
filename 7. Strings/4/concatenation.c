// Program in C to demonstrate string manipulation (Concatenation)
// Using strcat, a built-in function in C to concatenate (join) a string A with another string B
#include <stdio.h>
#include <string.h>
int main()
{
    char A[100], B[100];
    printf("Enter String A: ");
    scanf("%s", A);
    printf("Enter String B: ");
    scanf("%s", B);
    // Concatenating String A with B (it will be stored in the variable passed first in the paranthesis)
    strcat(A, B); // Understand it as A= A + B
    printf("Concatenated String is:- %s", A);
    return 0;
}