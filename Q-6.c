#include <stdio.h>

void inputMatrix(int matrix[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[10][10], int b[10][10], int result[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrix(int a[10][10], int b[10][10], int result[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int result[10][10], int row1, int col1, int col2) 
{
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() 
{
    int a[10][10], b[10][10], result[10][10];
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns for Matrix A (Max 10x10): ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the number of rows and columns for Matrix B (Max 10x10): ");
    scanf("%d%d", &row2, &col2);

    if (row1 != row2 || col1 != col2) 
    {
        printf("Addition and Subtraction not possible (Matrices dimensions do not match)\n");
    } 
    
    else 
    {
        printf("Enter elements for Matrix A:\n");
        inputMatrix(a, row1, col1);

        printf("Enter elements for Matrix B:\n");
        inputMatrix(b, row1, col1);

        addMatrix(a, b, result, row1, col1);
        printf("Result of Addition:\n");
        printMatrix(result, row1, col1);

        subtractMatrix(a, b, result, row1, col1);
        printf("Result of Subtraction:\n");
        printMatrix(result, row1, col1);
    }

    if (col1 != row2) 
    {
        printf("Multiplication not possible (Column of A must be equal to row of B)\n");
    } 
    
    else 
    {
        multiplyMatrix(a, b, result, row1, col1, col2);
        printf("Result of Multiplication:\n");
        printMatrix(result, row1, col2);
    }
}
