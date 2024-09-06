#include <stdio.h>

//Q-31) Convert kilometers into meters

int main()
{
    int kilometers, meters;

    printf("ENTER DISTANCE IN KILOMETERS= ");
    scanf("%d", &kilometers);

    meters= kilometers*1000;

    printf("\n%d KILOMETERS IS EQUIVALENT TO %d METERS", kilometers, meters);

}