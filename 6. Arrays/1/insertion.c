// Program in C to implement Insertion of an element at a specific position in an array
#include <stdio.h>
int main()
{
	int arr[100]= {1,2,3,4,5,6,7,8,9,10};
	int x, pos, n=10;
    printf("Original Array:-\n");
	for (int i=0; i<n; i++)
    {
		printf("%d ", arr[i]);
    }
    printf("\nEnter element to be inserted: ");
    scanf("%d", &x);
    printf("Enter position at which element has to be inserted: ");
    scanf("%d", &pos);
	n++; // increase the size by 1
	// shifting elements forward
	for (int i=n-1; i>=pos; i--)
    {
		arr[i] = arr[i-1];
    }
	arr[pos-1] = x; // inserting elements at pos
	printf("Array after Insertion:-\n");
	for (int i=0; i<n; i++)
    {
		printf("%d ", arr[i]);
    }
	return 0;
}