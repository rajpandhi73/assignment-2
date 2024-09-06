#include <stdio.h>

//Q-29) Convert minutes into seconds and hours

int main()
{
    int minutes, hours, seconds;

    printf("ENTER MINUTES= ");
    scanf("%d", &minutes);

    hours= minutes/60;
    seconds= minutes*60;

    printf("\n%d MINUTES IS EQUIVALENT TO %d HOURS AND %d SECONDS", minutes, hours, seconds);

}
