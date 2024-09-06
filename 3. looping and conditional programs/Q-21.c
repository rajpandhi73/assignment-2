#include <stdio.h>

// Q-21) Accept 3 numbers from user using while loop and check each numbers palindrome

int main() 
{
    int count = 0;
    int number, original, reversed, remainder;

    while (count < 3) 
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        original = number;
        reversed = 0;

        while (number != 0) 
        {
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number /= 10;
        }

        if (original == reversed) 
        {
            printf("Number %d is a palindrome.\n", original);
        } 
        
        else 
        {
            printf("Number %d is not a palindrome.\n", original);
        }

        count++;
    }

}
