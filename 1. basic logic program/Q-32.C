#include <stdio.h>

// Q-32) Accept 2 numbers and find out its sum check it size

int main() 
{
    int num1, num2, sum, size;

    printf("ENTER FIRST NUMBER= ");
    scanf("%d", &num1);

    printf("ENTER SECOND NUMBER= ");
    scanf("%d", &num2);

    sum= num1+num2;
    size= num1*num2;

    printf("SUM OF %d AND %d IS %d\n", num1, num2, sum);
    printf("SIZE OF THE ABOVE 2 NUMBERS IS %d", size);
}


