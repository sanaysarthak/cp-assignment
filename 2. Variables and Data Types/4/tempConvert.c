// To write a program in C to convert temperature from Fahrenheit to Celsius and vice versa.
#include <stdio.h>
int main()
{
    int ch;
    float c, f;
    printf("Enter 1 to input temperature in Celsius\nEnter 2 to input temperature in Fahrenheit\n");
    scanf("%d", &ch);
    if(ch==1)
    {
        printf("Enter temp in Celsius: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("%.2f C is equal to %.2f F", c, f);
    }
    else if(ch==2)
    {
        printf("Enter temp in Fahrenheit: ");
        scanf("%f", &f);
        c = (f-32) * 0.56;
        printf("%.2f F is equal to %.2f C", f, c);
    }
    else
        printf("Enter correct input for choice.");
    return 0;
}