#include <stdio.h>
/*
Q-26) Convert temperature Fahrenheit to Celsius

in this program:
converting into celsius the formula is
celsius= 5/9 * (fahrenheit-32)
*/

int main()
{
    float celsius, fahrenheit;

    printf("ENTER THE TEMPERATURE IN FAHRENHEIT= ");
    scanf("%f", &fahrenheit);

    celsius= (5.0/9.0) * (fahrenheit-32);

    printf("TEMPERATURE IN CELSIUS IS= %.3f", celsius);

}