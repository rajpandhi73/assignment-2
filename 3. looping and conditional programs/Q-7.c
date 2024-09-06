#include <stdio.h>

// Q-7) WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

int main() 
{
    int number, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = number; i!= 0; i /= 10) 
    {
        int remainder = i % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("Reversed number: %d\n", reverse);

}
