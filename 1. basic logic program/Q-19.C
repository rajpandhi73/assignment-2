#include <stdio.h>
#include <math.h>

/*
Q-19) Calculate compound interest

in this program:
to calculate compound interest the formula is-  A = P * (1 + r/n)^(nt).
here,
A= represents final amount after interest
P= principal amount
r= interest rate
n= number of times the interest is compounded in the year/month
t= number of years

for ex-  investment of rs.10,000 into a savings account for 20 years
 at an annual interest rate of 6%, compounded monthly.
*/

int main()
{
    float p, r, n, t, A;
    
    printf("ENTER THE PRINCIPAL AMOUNT(p)= ");
    scanf("%f", &p);

    printf("ENTER THE INTEREST RATE= ");
    scanf("%f", &r);
    
    printf("NUMBER OF TIMES THE INTEREST IS COMPOUNDED= ");
    scanf("%f", &n);
    
    printf("ENTER THE NUMBER OF YEARS AMOUNT WAS INVESTED= ");
    scanf("%f", &t);

    A= p * pow((1 + r/n), n*t);

    printf("FINAL AMOUNT AFTER INTEREST= %.3f",A);
    
}