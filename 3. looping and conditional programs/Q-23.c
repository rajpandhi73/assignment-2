#include <stdio.h>

// Q-23) C Program to Reverse a Number Using FOR Loop

int main() 
{
    int number, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int temp = number; temp != 0; temp /= 10) 
    {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("Reversed number is: %d\n", reversed);

}
