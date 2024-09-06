#include <stdio.h>

// Q-18) Calculate person’s Annual salary 

int main()
{
    int monthly_salary, annual_salary;

    printf("ENETR YOUR MONTHLY SALARY= ");
    scanf("%d", &monthly_salary);

    annual_salary= monthly_salary * 12;

    printf("YOUR ANNUAL SALARY IS= %d", annual_salary);
    
}
