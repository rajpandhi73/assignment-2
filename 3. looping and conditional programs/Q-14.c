#include <stdio.h>

// Q-14) Accept 5 numbers from user and find those numbers factorials 

int main() 
{
    int numbers[5]; 
    int factorials[5]; 


    for (int i = 0; i < 5; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        int number = numbers[i];
        int factorial = 1;

        if (number < 0) 
        {
            printf("Factorial of a negative number (%d) is not defined.\n", number);
            factorials[i] = -1; 
        } 
        
        else 
        {
            int temp = number;

            while (temp > 1) 
            {
                factorial *= temp;
                temp--;
            }
            
            factorials[i] = factorial;
        }
    }

    printf("\nFactorials of the entered numbers:\n");
    
    for (int i = 0; i < 5; i++) 
    {
        if (factorials[i] != -1) 
        {
            printf("Factorial of %d is %d\n", numbers[i], factorials[i]);
        }
    }

}
