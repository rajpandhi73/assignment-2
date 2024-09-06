#include <stdio.h>

/*
Q-23) WAP to calculate swap 2 numbers with using of multiplication and 
division
*/

int main() {
    float a, b;

    printf("ENTER VALUE FOR A=: ");
    scanf("%f", &a);

    printf("ENTER VALUE FOR B=: ");
    scanf("%f", &b);

    printf("\nOriginal values: a = %.2f, b = %.2f\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("\nAfter swapping using multiplication and division: a = %.2f, b = %.2f\n", a, b);

}
