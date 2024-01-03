// Program in C to demonstrate the use of Bitwise operators
#include <stdio.h>
int main() 
{
    int a = 5, b = 3;
    printf("Bitwise AND: \t%d & %d = %d\n", a, b, a&b);
    printf("Bitwise OR: \t%d | %d = %d\n", a, b, a|b); 
    printf("Bitwise XOR: \t%d ^ %d = %d\n", a, b, a^b);
    printf("Bitwise NOT: \t~%d = %d\n", a, ~a);
    printf("Bitwise NOT: \t~%d = %d\n", b, ~b);
    printf("Left shift: \t%d << 1 = %d\n", a, a<<1);
    printf("Right shift: \t%d >> 1 = %d\n", a, a>>1);
    return 0;
}
