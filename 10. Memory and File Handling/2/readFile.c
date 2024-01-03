// Program in C to read files
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* ptr;
	char str[50];
	ptr = fopen("test.txt", "a+");

    if(ptr == NULL)
    {
        printf("Error occured while opening file!\n");
        exit(1);
    }
    
    printf("Contents of the file are as follows:-\n");
    while(fgets(str, 50, ptr) != NULL) 
    {
		printf("%s", str);
	}

    fclose(ptr);
    return 0;
}