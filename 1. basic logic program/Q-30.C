#include <stdio.h>

//Q-30) WAP to convert years into days and days into years

int main()
{    

    int choice;
    float years, days;
    
    printf("Choose an option: ");
    printf("\n1. Convert years into days");
    printf("\n2. Convert days into years");
    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
             
                printf("Enter the number of years: ");
                scanf("%f", &years);

                days = years * 365;

                printf("\n%.2f years is equivalent to %.2f days", years, days);
                break;

            case 2:
                
                printf("Enter the number of days: ");
                scanf("%f", &days);

                years = days / 365;

                printf("\n%.2f days is equivalent to %.2f years", days, years);
                break;

            default:
                printf("\nInvalid choice. Please enter 1 or 2.");
        

        }
}
