// Program in C to create a function to swap two values by passing pointers

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a=10, b=20;
    printf("Original Values:-\na = %d\t\tb = %d\n",a, b);
    swap(&a, &b);
    printf("After Swapping:-\na = %d\t\tb = %d",a, b);
    return 0;
}