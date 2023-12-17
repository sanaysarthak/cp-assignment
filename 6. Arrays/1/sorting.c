// Program in C to implement Sorting (Bubble Sort) in an array
#include <stdio.h>
int main()
{
    int arr[5]= {34,128,64,101,56};
    printf("Array before Sorting: \t\t");
    for(int i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    // Implementing Ascending Bubble Sort
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    printf("\nArray after Bubble Sort: \t");
    for(int i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}