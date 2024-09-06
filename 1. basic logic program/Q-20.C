#include <stdio.h>

/*
Q-20) Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.

in this program:
10% will be taken in decimal as '0.10'.

to find, remaining salary= monthly_salary(m_s) - insurance_premium(i_p) -loan_installments(l_intallM).
*/

int main()
{
    float m_s, i_p=0.10, L_intallM=0.10, remaining_salary;

    printf("ENTER YOUR MONTHLY SALARY= ");
    scanf("%f", &m_s);

    i_p= m_s * 0.10;

    L_intallM= m_s * 0.10;
    
    remaining_salary= m_s - i_p - L_intallM;
    
    printf("\nYOUR INSURANCE PREMIUM IS= %.3f", i_p);
    printf("\nYOUR LOAN INSTALLMENT IS= %.3f", L_intallM);
    printf("\nYOUR REMAINING SALARY IS= %.3f", remaining_salary);

}