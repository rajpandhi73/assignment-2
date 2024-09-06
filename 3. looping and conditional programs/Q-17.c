#include <stdio.h>

// Q-17) Calculate 5 numbers from user and calculate number of even and odd using of while loop

int main() 
{
    int i = 0;
    int number;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter 5 numbers:\n");

    while (i < 5) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0) 
        {
            evenCount++;
        } 
        
        else 
        {
            oddCount++;
        }
        i++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

}
