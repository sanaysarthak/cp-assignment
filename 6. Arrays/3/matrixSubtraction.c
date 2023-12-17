// Program in C to use a three-dimensional array for implementing matrix subtraction
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    printf("Enter the no of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    
    printf("Enter values for first matrix\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix A is as follows:-\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter values for second matrix\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B is as follows:-\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    
    printf("On performing subtraction operation on the two matrices A and B, we get:- \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}