#include <stdio.h>

// Q-12) WAP to find maximum number among 3 numbers using ternary operator

int main() 
{
    int num1, num2, num3, max;

    printf("Enter 1st number= ");
    scanf("%d", &num1);

    printf("\nEnter 2nd number= ");
    scanf("%d", &num2);

    printf("\nEnter 3rd number= ");
    scanf("%d", &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum number is: %d\n", max);

}
