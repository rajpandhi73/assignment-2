#include <stdio.h>
#include <math.h>

/*
Q-19) Calculate compound interest

in this program:
to calculate compound interest the formula is-  CI = P * (1 + r/100)^(t).
here,
P= principal amount
r= interest rate
n= number of times the interest is compounded in the year/month
t= number of years
*/

int main()
{
    float p, r, t, CI;

    printf("ENTER PRINCIPLE AMOUNT (P): ");
    scanf("%f", &p);

    printf("ENTER TIME (T): ");
    scanf("%f", &t);

    printf("ENTER RATE (R): ");
    scanf("%f", &r);

    CI = p* (pow((1 + r / 100), t));

    printf("COMPOUND INTEREST = %.3f", CI);

}