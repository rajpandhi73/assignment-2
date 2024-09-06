#include <stdio.h>

// Q-15) Store 5 numbers in array and sort it in ascending order

int main() 
{
    int numbers[5];  
    int i, j, temp;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 4; i++) 
    {  
        for (j = i + 1; j < 5; j++) 
        {
            if (numbers[i] > numbers[j]) 
            {  
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\nThe numbers in ascending order are:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
}
