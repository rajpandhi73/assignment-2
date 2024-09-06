#include <stdio.h>

// Q-16) Calculate the Sum of Natural Numbers Using the While Loop


int main() 
{
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) 
    {
        sum += i;
        i++;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

}
