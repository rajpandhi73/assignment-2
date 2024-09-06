#include <stdio.h>

//Q-1) Write a C program to accept two integers and check whether they are equal or not

int main()

{
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) 
    {
        printf("The integers are equal.\n");
    } 
    
    else 
    {
        printf("The integers are not equal.\n");
    }

   
}
