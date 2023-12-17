// Write a program to calculate the area of a triangle using Heron's formula.
// Program in C to calculate the area of a triangle using Heron's formula.

#include <math.h> // Including or importing math header file which has pre-defined functions
#include <stdio.h>

int main()
{
    int s, a, b, c;
	printf("Enter the value of semi-perimeter (s) : ");
	scanf("%d", &s);
    printf("Enter side a : ");
    scanf("%d", &a);
    printf("Enter side b : ");
    scanf("%d", &b);
    printf("Enter side c : ");
    scanf("%d", &c);
    double x = s*(s-a)*(s-b)*(s-c);
    float area = sqrt(x);
    printf("Area of the triangle is %f", area);
	
	return 0;
}