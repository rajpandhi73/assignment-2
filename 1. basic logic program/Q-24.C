#include <stdio.h>

/*
Q-24) Accept 5 employees name and salary and count average and total 
salary

in this program:
we will use arrays to store 5 employees name and salary
*/

int main()
{
    char employeeName[5][30];
    float salary[5];
    float totalSalary;
    float averageSalary;

    for (int i= 0; i < 5; i++)
    {
        printf("\nENTER EMPLOYEES NAME %d: ", i+1);
        scanf("%s", employeeName[i]);

        printf("ENTER SALARIES OF EMPLOYEES %d: ", i+1);
        scanf("%f", &salary[i]);
        
        totalSalary += salary[i];
    }

        averageSalary= totalSalary / 5;

        printf("\nTOTAL SALARY= %.2f", totalSalary);
        printf("\nAVERAGE SALARY OF EMPLOYEES= %.2f", averageSalary);

}