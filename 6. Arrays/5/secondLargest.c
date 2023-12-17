// Program in C to find out and print the second largest element in the array out of all the user input
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d", &arr[i]);
	}
    printf("Array is:-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
	int lr= arr[0];
	int slr;
	int p=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>lr)
		{
			lr= arr[i];
			p= i;
		}
		else
			slr= arr[i-1];
	}
	for(int i=0; i<n; i++)
	{
		if(i!=p)
		{
			if(arr[i]>slr)
				slr= arr[i];
		}
	}
	printf("\nSecond largest element in the array is -> %d", slr);
	return 0;
}