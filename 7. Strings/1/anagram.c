#include <stdio.h>
#include <string.h>
int main ()  
{  
    char str1[100], str2[100];  
    int len1, len2, len, i, j, found= 0, notFound= 0;  
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter first string: ");
    scanf("%s", str2);
    // finding length of the strings
    len1= strlen(str1);  
    len2= strlen(str2);  
    // use if statement to check the length is equal or not  
    if(len1 == len2)  
    {  
        len= len1; // assign the length to len variable  
        for(i=0; i<len; i++)  
        {  
            found= 0;  
            for(j=0; j<len; j++)  
            {  
                // checking whether each character of str1 is there in str2 or not, irrespective of positioning
                if(str1[i] == str2[j])  
                {  
                    found= 1;  
                    break;  
                }  
            }  
            if(found == 0)  
            {  
                notFound = 1; // assign 1 to notFound 
                break;  
            }  
        }  
        if(notFound == 1)  
            printf("%s and %s are not Anagram.\n\n",str1,str2);  
        else  
            printf("%s and %s are Anagram.\n\n",str1,str2);  
    }  
    else  
        printf("%s and %s are not Anagram as their string size is not same.\n\n",str1,str2);  
    return 0;     
} 