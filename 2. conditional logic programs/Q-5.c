#include <stdio.h>

// Q-5) Check Number Is Positive or Negative

int main() 
{
    int num;

    printf("Enter any number=  ");
    scanf("%d", &num);

    if (num > 0) 
    {
        printf("%d is a positive number\n", num);
    } 
    
    else if (num < 0) 
    {
        printf("%d is a negative number\n", num);
    } 
    
    else 
    {
        printf("The number is zero\n");
    }

}
