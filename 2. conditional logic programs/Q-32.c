#include <stdio.h>

/*
Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:

Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

int main() 
{
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) 
    {
        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.80; 
    } 
    
    else if (basicSalary <= 20000) 
    {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.90; 
    } 
    
    else 
    {
        HRA = basicSalary * 0.30;
        DA = basicSalary * 0.95; 
    }

    grossSalary = basicSalary + HRA + DA;

    printf("The Gross Salary of the employee is: %.2f\n", grossSalary);

}
