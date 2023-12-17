// Program in C to find the average of the values in an array
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
    int sum= 0;
    for(int i=0; i<n; i++)
    {
        sum+= arr[i];
    }
    double avg= (double)sum/n;
    printf("\nAverage of the elements: %.2f", avg);
    return 0;
}