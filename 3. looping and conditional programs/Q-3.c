#include <stdio.h>

/*
Q-3) WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

int main()
{
    int numbers[10];
    int i;
    int evenNumbers=0, evenSum=0;
    int oddNumbers=0, oddSum=0;

    printf("enter 10 numbers:\n");
    
    for(i=0; i<10; i++)
    {
        printf("numbers %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(i=0; i<10; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            evenNumbers++;
            evenSum += numbers[i];
        }

        else 
        {
            oddNumbers++;
            oddSum += numbers[i];
        }
    }

    printf("\nNumber os even numbers are:%d\n", evenNumbers);
    printf("Number of odd numbers are:%d\n", oddNumbers);
    printf("Sum of even numbers is:%d\n", evenSum);
    printf("Sum of odd numbers is:%d\n", oddSum);

}