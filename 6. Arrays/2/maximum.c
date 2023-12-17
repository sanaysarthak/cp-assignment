// Program in C to find the maximum element in an array
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
    int max= arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
            max= arr[i];
    }
    printf("\nMaximum value of the array is: %d", max);
    return 0;
}