#include <stdio.h>

// Q-13) calculate the Factorial of a Given Number using while loop

int main() 
{
    int number;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) 
    {
        printf("Factorial of a negative number is not defined.\n");
    } 
    
    else 
    {
        int i = number;
        
        while (i > 1) 
        {
            factorial *= i;
            i--;
        }
        
        printf("Factorial of %d is %d\n", number, factorial);
    }

}
