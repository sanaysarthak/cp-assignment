// Program in C to implement Linear searching in an array
#include <stdio.h>
int main()
{
    int c=0, n;
    int arr[5]= {10,20,30,40,50};
    printf("Enter number to check if it is an element of the array: ");
    scanf("%d", &n);
    for(int i=0; i<5; i++)
    {
        if(arr[i] == n)
        {
            printf("%d is present at index %d",n,i);
            c=1;
        }
    }
    if(c==0)
        printf("%d is not present in the array.", n);
    return 0;
}