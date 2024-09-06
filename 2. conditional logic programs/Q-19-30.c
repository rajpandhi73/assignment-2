#include <stdio.h>

int main() 
{
    int customerID;
    char name[50];
    float units, totalBill = 0.0, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 350) 
    {
        totalBill = units * 1.20;
    } 
    
    else if (units > 350 && units < 600) 
    {
        totalBill = (350 * 1.20) + ((units - 350) * 1.50);
    } 
    
    else if (units >= 600 && units < 800) 
    {
        totalBill = (350 * 1.20) + (250 * 1.50) + ((units - 600) * 1.80);
    } 
    
    else 
    {
        totalBill = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((units - 800) * 2.00);
    }

    if (totalBill > 800) 
    {
        surcharge = totalBill * 0.18;
    }

    totalBill += surcharge;

    if (totalBill < 256) 
    {
        totalBill = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill Amount: Rs. %.2f\n", totalBill);

}
