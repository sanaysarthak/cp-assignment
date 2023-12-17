// Program in C to count the number of vowels and consonants in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int vowCount=0, consCount=0;
    printf("Enter string: ");
    scanf("%s", str);
    int len= strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]=='a' || str[i]=='A' 
        || str[i]=='e' || str[i]=='E' 
        || str[i]=='i' || str[i]=='I' 
        || str[i]=='o' || str[i]=='O' 
        || str[i]=='u' || str[i]=='U')
            vowCount++;
        else
            consCount++;
    }
    printf("Number of Vowels: %d\n",vowCount);
    printf("Number of Consonants: %d",consCount);
    return 0;
}