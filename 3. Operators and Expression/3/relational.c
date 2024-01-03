// Program in C to demonstrate the use of Relational operators
#include <stdio.h>
int main() 
{
    int a = 10, b = 20;
    // Using ternary operators to return the output
    printf("%d==%d is %s\n", a, b, a==b? "true" : "false"); // equal to
    printf("%d!=%d is %s\n", a, b, a!=b ? "true" : "false"); // not equal to
    printf("%d>%d is %s\n", a, b, a>b ? "true" : "false"); // greater than
    printf("%d<%d is %s\n", a, b, a<b ? "true" : "false"); // less than
    printf("%d>=%d is %s\n", a, b, a>=b ? "true" : "false"); // greater than or equal to
    printf("%d<=%d is %s\n", a, b, a<=b ? "true":"false"); // less than or equal to
    return 0;
}
