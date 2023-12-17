// Program in C to find the sum of elements of an array using pointers.
#include <stdio.h>
int main() 
{
    int n, sum=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements:- \n");
    for(int i=0; i<n; i++)      
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int *ptr= arr; // Setting address of first array element to *ptr
    for(int i=0; i<n; i++)
    {
        sum= sum + *ptr;
        ptr++; // Incrementing pointer by one to get next element
    }
    printf("The sum of elements of Array is:  %d", sum);
    return 0;
}