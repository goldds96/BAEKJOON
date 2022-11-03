#include <stdio.h>

int main(void)
{
    int row, col;
    scanf("%d %d", &row, &col);
    
    int matrixA[row][col];
    int matrixB[row][col];
    
    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
            scanf("%d", &matrixA[j][i]);
    }
    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
            scanf("%d", &matrixB[j][i]);
    }

    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
        {
            if (j == row-1) printf("%d", matrixA[j][i] + matrixB[j][i]);
            else printf("%d ", matrixA[j][i] + matrixB[j][i]);
        }
        printf("\n");
    }

    return 0;
}