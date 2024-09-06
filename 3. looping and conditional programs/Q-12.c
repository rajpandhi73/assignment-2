#include <stdio.h>

// Q-12) Program of Armstrong Number in C Using For Loop & While Loop

int main()
{
    int num, originalNum, remainder, result=0;

    printf("enter any three digit number: ");
    scanf("%d", &num);

    originalNum=num;

    while(originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder*remainder*remainder;

        originalNum /= 10;
    }
    
    if(result == num)
    {
        printf("%d is an Armstrong number.", num);
    }

    else
    {
        printf("%d is not an Armstrong number.", num);
    }
}