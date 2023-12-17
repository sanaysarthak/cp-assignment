// Program in C to use a three-dimensional array for implementing matrix multiplication
#include <stdio.h>
int main()
{ 
    int a[3][3], b[3][3], c[3][3];
    
    printf("Enter values for first matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix A is as follows:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter values for second matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B is as follows:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    
    // Matrix Multiplication and printing
    printf("On Multiplication of Matrix A and B, we get:-\n");
    for(int i=0;i<3;i++)    
    { 
        for(int j=0;j<3;j++)    
        {    
            c[i][j]=0;    
            for(int k=0;k<3;k++)    
            {   
                // You can use shorthand as well.
                // c[i][j]+= a[i][k]*b[i][k];
                c[i][j]= c[i][j] + (a[i][k]*b[k][j]);    
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}