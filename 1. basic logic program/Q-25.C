#include <stdio.h>

// Q-25) Accept 5 expense from user and find average of expense\

int main()
{
    float expense[5];
    float totalExpense;
    float averageExpense;

    for (int i=0; i < 5; i++)
    {
        printf("ENTER EXPENSES %d: ", i+1);
        scanf("%f", &expense[i]);

        totalExpense += expense[i];

    }

    averageExpense= totalExpense / 5;

    printf("AVERAGE EXPENSE %.3f: ", averageExpense);

}
