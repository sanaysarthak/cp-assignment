// Program in C to convert a string to uppercase or lowercase
// Using built-in functions strupr and strlwr to carry out the operations
#include <stdio.h>
#include <string.h>
int main()
{
    int ch;
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Enter 1 to convert it into uppercase and 2 to convert it into lowercase: ");
    scanf("%d", &ch);
    if(ch==1)
        printf("Uppercase: \t%s\n", strupr(s));
    else if(ch==2)
        printf("Lowercase: \t%s\n", strlwr(s));
    else
        printf("Enter correct number as input for choice.");
    return 0;
}