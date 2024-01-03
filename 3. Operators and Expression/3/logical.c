// Program in C to demonstrate the use of Logical operators
#include <stdio.h>
int main()
{
    int a=1, b=0;
    // Using ternary operators to return the output

    // Logical AND
    printf("(%d && %d) is %s\n", a, b, a&&b ? "true":"false");
    // Logical OR
    printf("(%d || %d) is %s\n", a, b, a||b ? "true":"false");
    // Logical NOT
    printf("!(%d) is %s\n", a, !a ? "true" : "false");
    printf("!(%d) is %s\n", b, !b ? "true" : "false");
    return 0;
}
