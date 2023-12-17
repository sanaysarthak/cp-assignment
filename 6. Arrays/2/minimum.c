// Program in C to find the minimum element in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("The Array is:-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    int min= arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
            min= arr[i];
    }
    printf("\nMinimum value of the array is: %d", min);
    return 0;
}