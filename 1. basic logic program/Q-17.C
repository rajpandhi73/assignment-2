#include <stdio.h>

/*
Q-17) Calculate person’s insurance premium based on salary

in this program:
we will calculate the insurance premium according to conditions as under:-
1. if salary < 30,000 then insurance premium will be 5% of salary
2. if salary is between 30,000 to 60,000 then insurance premium will be 7% of salary
3. if salary is above 60,000 then insurance will be 10% of salary
*/

int main ()
{
    float salary, premium;
        
        printf("ENTER YOUR ANNUAL SALARY= ");
        scanf("%f", &salary);

    if (salary < 30000)
    {
        premium= salary * 0.05;
    }

    else if (salary >= 30000 && salary <= 60000)
    {
        premium= salary * 0.07;
    }

    else 
    {
        premium= salary * 0.10;
    }

    printf("YOUR PREMIUM ACC TO SALARY= %.2f",premium);


}