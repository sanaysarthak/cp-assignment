// Program in C to remove all occurences of a specified character from a given string by the user.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], rem;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character to remove all its occurences: ");
    scanf("%c", &rem);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        // Shifting all characters to one place left and decrementing the length of string by 1, if the character is found.
        if(str[i] == rem)
        {
            for(int j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--; // not incrementing i when a character is found, as we are decreasing the size of string by 1
        }
    }
    printf("String after removing '%c': %s", rem, str);
    return 0;
}