#include <stdio.h>

// Q-9) Write a program make a summation of given number (E.g., 1523 Ans: -11) 

int main() 
{
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    for (int i = number; i != 0; i /= 10) 
    {
        int digit = i % 10;
        sum += digit;
    }

    printf("Sum of the digits in %d is %d\n", number, sum);

}
