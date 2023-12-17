// Program in C to write files
#include <stdio.h>
#include <stdlib.h> 
int main()
{
	FILE* ptr; 
	ptr = fopen("./hello.txt", "w+"); // opens file
    if(ptr == NULL) 
    { 
        printf("Error occured while writing to file!"); 
        exit(1); 
	} 
    char str[] = "This is all the data to be inserted into the file."; 
	fputs(str, ptr); // puts data inside the file
	fclose(ptr); // file closed
    printf("Data written inside the file successfully!"); 
    return 0;
}