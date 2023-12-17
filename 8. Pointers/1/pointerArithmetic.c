// Program in C to demonstrate Pointer Arithmetic
#include <stdio.h>
int main()
{
    // Pointer Increment and Decrement
    printf("Pointer Increment (char data type):-\n");
    char c= 'A';
    char *cp= &c;
    printf("cp = %d\n", cp);
    cp++;
    printf("cp++ = %d\n", cp);

    // Addition of Integer to Pointer
    printf("\nAddition of Integer to Pointer:-\n");
    int a= 22;
    int *p = &a;
    printf("Pointer before Addition:  %u\n", p);
    p= p+250;
    printf("Pointer after Addition:  %u\n", p);
    
    // Addition of two pointers
    printf("\nAddition of two pointers:-\n");
    int n1= 100, n2= 200, sumOfPtr;
    int *ptr1= &n1, *ptr2= &n2;
    sumOfPtr= *ptr1 + *ptr2;
    printf("ptr1 = %d\n", ptr1);
    printf("ptr2 = %d\n", ptr2);
    printf("ptr1 + ptr2 = %d\n", sumOfPtr); // 4 is converted into 1, i.e why output given is 300

    // Comparision of two pointers
    printf("\nComparision of two pointers:-\n");
    if(ptr1 == ptr2)
        printf("Pointer 1 and Pointer 2 are equal.");
    else
        printf("Pointer 1 and Pointer 2 are not equal.");
    
    return 0;
}