// Program in C to take name of user as input and then display a greeting message

#include <stdio.h>
int main()
{
    // declaring a variable with space of 100 characters, to store the name entered by the user
    char name[100];
    printf("Enter your name: ");
    scanf("%s", &name); // storing the input from the user
    printf("Hello %s! Have a great day ahead!", name); // printing the greeting message
    return 0;
}