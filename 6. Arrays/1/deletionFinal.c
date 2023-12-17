#include <stdio.h>

int main()
{
    int n, p;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Original Array:-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nEnter index to be deleted: ");
    scanf("%d", &p);
    if (p >= n+1)    
        printf("Deletion not possible. Enter valid index position.\n");
    else
    {    
        for(int i=(p-1); i<(n-1); i++)
        {
            arr[i]= arr[i+1];
        }
        printf("Array after Deletion:- \n");
        // for( c = 0 ; c < n - 1 ; c++ )        
        for(int i=0; i<n-1; i++)
        {
            printf("%d  ", arr[i]);        
        }
    }    
    return 0;
}