#include <stdio.h>

//Q-28) Convert years into days and months

int main()
{
    int years, months, days;

    printf("ENTER THE NUMBER OF YEARS= ");
    scanf("%d", &years);

    months= years*12;
    days= years*365;

    printf("\n%d YEARS IS EQUIVALENT TO %d MONTHS AND %d DAYS", years, months, days);

}