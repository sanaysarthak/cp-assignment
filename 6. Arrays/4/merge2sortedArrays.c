#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter size of 1st Array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of 1st Array:-\n");
    for(int i=0; i<n1; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }      
    printf("Array 1 is: ");
    for(int i=0; i<n1; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nEnter size of 2nd Array: ");
    scanf("%d", &n2);
    int b[n2], c[n1+n2];
    
    printf("Enter elements of 2nd Array:-\n");
    for(int i=0; i<n2; i++)      
    {
        printf("Enter element %d: ", i);
        scanf("%d", &b[i]);
    }
    printf("Array 2 is: ");
    for(int i=0; i<n2; i++)
    {
        printf("%d  ", b[i]);
    }
    for(int i=0; i<n1; i++)
    {
        c[i] = a[i];
    }
    for(int i = 0; i<n2; i++)
    {
        c[i+n1] = b[i];
    }
    printf("\nThe merged array: ");
    for(int i=0; i<(n1+n2); i++) //Printing the merged array
    {
        printf("%d  ", c[i]);
    }
    printf("\nFinal array after sorting: ");
    for(int i=0; i<(n1+n2); i++)
    {
        int temp;
        for(int j=i+1; j<(n1+n2); j++) {
            if(c[i] > c[j]) 
            {
                temp= c[i];
                c[i]= c[j];
                c[j]= temp;
            }
        }
    }   
    for(int i=0; i<(n1+n2); i++) //Printing final array
    {
        printf("%d  ",c[i]);
    } 
    return 0;   
}