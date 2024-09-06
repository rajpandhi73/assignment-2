#include <stdio.h>

// Q-10) Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)


int main() 
{
    int number, firstDigit, lastDigit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    lastDigit = number % 10;

    firstDigit = number;

    while (firstDigit >= 10) 
    {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digits of %d is %d\n", number, sum);

}
