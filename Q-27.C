#include <stdio.h>

// Q-27) Convert days into months

int main()
{
    float days, months;

    printf("ENTER THE NUMBER OF DAYS= ");
    scanf("%f", &days);

    months= days / 30;

    printf("MONTHS= %f", months);
}