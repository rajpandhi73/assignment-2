#include <stdio.h>

//Q-28) Convert years into days and months

int main()
{
    float years, months, days;

    printf("ENTER THE NUMBER OF YEARS= ");
    scanf("%f", &years);

    months= years*12;
    days= years*365;

    printf("\n%f YEARS IS EQUIVALENT TO %f MONTHS AND %f DAYS", years, months, days);

}