#include <stdio.h>

/*
22.Calculate compound interest(Compound Interest formula:

a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t

b. Compound Interest = Amount – P
*/

int main()
{
    float Amount, p, R, t;
    int compund_interest;

    printf("ENTER VALUE FOR PRINCIPAL AMOUNT(p)= ");
    scanf("%f", &p);

    printf("ENTER VALUE FOR RATE(r)= ");
    scanf("%f", &R);

    printf("ENTER TIME(t)= ");
    scanf("%f", &t);

    Amount= p*(1 + R/100)*t;
    printf("\nFINAL AMOUNT= %.2f", Amount);

    compund_interest= Amount - p;
    printf("\nCOMPOUND INTEREST= %d", compund_interest);

}