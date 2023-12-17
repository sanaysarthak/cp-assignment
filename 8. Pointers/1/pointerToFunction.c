// Program in C to showcase call-by reference using a simple swap function
// Program in C to demonstrate the passing of pointers to functions.
#include <stdio.h>
int swap(int *a, int *b)
{
    *a = 100;
    *b = 200;
}
int main()
{
    int a=10, b=20;
    printf("Before Changes:-\na = %d\t\tb = %d\n",a, b);
    swap(&a, &b);
    printf("After Changes (by passing pointers):-\na = %d\t\tb = %d",a, b);
    return 0;
}