#include <stdio.h>

// Q-2) WAP to accept 5 numbers from user and display all numbers


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

    printf("\nYou entered:\n");
    
    for (i = 0; i < 5; i++) 
    {
        printf("Number %d: %d\n", i + 1, numbers[i]);
    }

}
