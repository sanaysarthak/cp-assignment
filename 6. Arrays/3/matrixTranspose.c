// Program in C to find the transpose of a matrix using three-dimensional arrays
#include <stdio.h>
int main()
{
    int m[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("Original Matrix:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", m[j][i]);
        }
        printf("\n");
    }
    return 0;
}