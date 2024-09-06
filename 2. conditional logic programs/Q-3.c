#include <stdio.h>

/*
Q-3) WAP to check if the given year is a leap year or not

in this program:
The year is a leap year if it is divisible by 4 and not divisible by 100, 
or if it is divisible by 400.
*/

int main() 

{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("%d is a leap year.\n", year);
    } 
    
    else 
    {
        printf("%d is not a leap year.\n", year);
    }

}
