// Program in C to display a three-dimensional array as a matrix
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
    printf("Three-dimensional array in Matrix format:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}