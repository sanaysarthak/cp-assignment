// Program in C to allocate dynamic memory using malloc() and then free the memory using free()
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
    printf("Enter number of elements: ");
	scanf("%d", &n);

    // Dynamically allocate memory using malloc()
	int *ptr = (int*)malloc(n * sizeof(int)); 
    if(ptr != NULL)
        printf("Memory allocated dynamically using malloc()\n");
    // Storing the elements of the array
    for(int i=0; i<n; i++)
    {
        ptr[i] = i+1;
    }
    // Printing the elements of the array
    for(int i=0; i<n; i++)
    {
        printf("%d\t", ptr[i]);
    }

    // Deallocating the memory
    free(ptr);
    printf("Memory deallocated succesfully using free()");
    return 0;
}