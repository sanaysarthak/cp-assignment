#include <stdio.h>
int main() 
{
    int i=1, j, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    do 
    {
        j= 1;
        do 
        {
            if (j>=i)
                printf("*");
            else
                printf(" ");
            j++;
        } while (j<=N);
        printf("\n");
        i++;
    } while (i<=N);
    return 0;
}