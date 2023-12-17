// Program in C to Explicit typecasting between different data types
#include <stdio.h>
int main() 
{
    char c= 'A';
    int n;
    // Explicit typecasting from char to int
    n = (int)c;
    printf("Typecasting character '%c' to int: %d\n",c, n);
    return 0;
}
