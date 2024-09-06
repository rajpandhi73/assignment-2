#include <stdio.h>

// Q-27) Convert days into months

int main()
{
    int days, months;

    printf("ENTER THE NUMBER OF DAYS= ");
    scanf("%d", &days);

    months= days / 30;

    printf("MONTHS= %d", months);
}