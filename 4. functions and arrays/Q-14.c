#include <stdio.h>

// Q-14) .Perform 2D matrix array


int main() 
{
    int matrix[3][3];  
    int i, j;

    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
