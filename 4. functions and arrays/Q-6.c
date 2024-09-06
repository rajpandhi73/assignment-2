#include <stdio.h>

void addMatrices(int r, int c, int a[r][c], int b[r][c], int result[r][c]) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int r, int c, int a[r][c], int b[r][c], int result[r][c]) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2], int result[r1][c2]) 
{
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int r, int c, int matrix[r][c]) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];

    if (c1 != r2) 
    {
        printf("Error! Column of first matrix should be equal to row of second matrix.\n");
        return -1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    int sum[r1][c1], diff[r1][c1], product[r1][c2];

    addMatrices(r1, c1, a, b, sum);
    subtractMatrices(r1, c1, a, b, diff);
    multiplyMatrices(r1, c1, a, r2, c2, b, product);

    printf("Sum of matrices:\n");
    printMatrix(r1, c1, sum);

    printf("Difference of matrices:\n");
    printMatrix(r1, c1, diff);

    printf("Product of matrices:\n");
    printMatrix(r1, c2, product);

}
