// Program in C to reverse a string entered by the user
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    int len= strlen(str);
    char rev[len];
    int i, j=0;
    for(int i=len-1; i>=0; i--)
    {
        rev[j]= str[i];
        j++;
    }
    printf("Reverse of %s is:  %s", str, rev);
    return 0;
}