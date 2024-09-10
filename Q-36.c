#include <stdio.h>

/*
Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:

For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

int main() 
{
    float units, bill = 0, surcharge;

    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    bill += (units > 50) ? 50 * 0.50 : units * 0.50;
    bill += (units > 50 && units <= 150) ? (units - 50) * 0.75 : (units > 150) ? 100 * 0.75 : 0;
    bill += (units > 150 && units <= 250) ? (units - 150) * 1.20 : (units > 250) ? 100 * 1.20 : 0;
    bill += (units > 250) ? (units - 250) * 1.50 : 0;

    surcharge = bill * 0.20;

    bill += surcharge;

    printf("Total electricity bill = Rs. %.2f\n", bill);

}

