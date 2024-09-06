#include <stdio.h>

// Q-8) Write a program to find out the max from given number (E.g., No: - 1562Max number is 6)


int main() 
{
    int number, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    for (int i = number; i != 0; i /= 10) 
    {
        int digit = i % 10;

        if (digit > maxDigit) 
        {
            maxDigit = digit;
        }
    }

    printf("Maximum digit in %d is %d\n", number, maxDigit);

}
