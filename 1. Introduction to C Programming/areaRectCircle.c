// Program in C to calculate the area of a rectangle and a circle based on the user input

#include <stdio.h>
int main()
{
    int c;
    printf("Enter 1 to find area of Rectangle\nEnter 2 to find area of Circle\n");
    scanf("%d", &c);

    if (c==1)
    {
        printf("Calculating the area of Rectangle\n");
        int l,b;
        printf("Enter length: ");
        scanf("%d", &l);
        printf("Enter breadth: ");
        scanf("%d", &b);
        int areaRect = l*b;
        printf("Area of the Rectangle is %d", areaRect);
    }

    else if (c==2)
    {
        printf("Calculating the area of Circle\n");
        int r;
        printf("Enter radius: ");
        scanf("%d", &r);
        float areaCircle = (3.14*r*r);
        printf("Area of the Circle is %f", areaCircle);
    }

    else
        printf("Enter the correct number.");
        
    return 0;
}