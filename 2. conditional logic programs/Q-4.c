#include <stdio.h>

/*
Q-4) WAP to make simple calculator (operation include Addition, 
Subtraction,Multiplication, Division, modulo) using conditional 
statement
*/

int main() 
{
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%)= ");
    scanf(" %c", &operator);

    printf("Enter first number= \n");
    scanf("%d", &num1);

    printf("Enter second number= \n");
    scanf("%d", &num2);

    if (operator == '+') 
    {
        result = num1 + num2;
        printf("Result is %d + %d = %d\n", num1, num2, result);
    } 
    
    else if (operator == '-') 
    {
        result = num1 - num2;
        printf("Result is %d - %d = %d\n", num1, num2, result);
    } 
    
    else if (operator == '*') 
    {
        result = num1 * num2;
        printf("Result is %d * %d = %d\n", num1, num2, result);
    } 
    
    else if (operator == '/') 
    {
        if (num2 != 0) 
        {
            result = num1 / num2;
            printf("Result is %d / %d = %d\n", num1, num2, result);
        } 
        
        else 
        {
            printf("Number cannot be divide by zero.\n");
        }
    } 
    
    else if (operator == '%') 
    {
        if (num2 != 0) 
        {
            result = num1 % num2;
            printf("Result is %d %% %d = %d\n", num1, num2, result);
        } 
        else 
        {
            printf("Number cannot be divided by zero.\n");
        }
    } 
    
    else 
    {
        printf("Please choose from given operators.\n");
    }

}
