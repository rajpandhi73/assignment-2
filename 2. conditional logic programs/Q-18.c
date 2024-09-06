#include <stdio.h>

/*
Write a C program to calculate profit and loss on a transaction.

in this program: formula to find profit is
profit= selling price - cost price
*/

int main() 
{
    float costPrice, sellingPrice, profit;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profit = sellingPrice - costPrice;

    if (profit > 0) 
    {
        printf("You made a profit of RS. %.2f\n", profit);
    } 
    
    else if (profit < 0) 
    {
        printf("You are in loss of RS. %.2f\n", -profit);
    } 
    
    else 
    {
        printf("No profit, no loss.\n");
    }

}
