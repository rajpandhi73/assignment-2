#include <stdio.h>
/*
Q-13) WAP to accept 5 numbers from user and check entered number is even 
or odd using of array
*/

int main() 
{
    int numbers[5]; 
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nChecking if the numbers are even or odd:\n");
    for (i = 0; i < 5; i++) 
    {
        if (numbers[i] % 2 == 0) 
        { 
            printf("Number %d (%d) is even.\n", i + 1, numbers[i]);
        } 
        
        else 
        {
            printf("Number %d (%d) is odd.\n", i + 1, numbers[i]);
        }
    }

}
