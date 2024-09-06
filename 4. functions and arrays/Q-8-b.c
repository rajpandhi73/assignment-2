#include <stdio.h>

/*
Q-8) WAP to reverse a string and check that the string is palindrome 
or notWrite a program of structure employee that provides the 
following

b) Write a program of structure for five employee 
that provides the following information -print and 
displayempno, empname, address and age
*/

struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() 
{
    struct Employee emp[5];
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].empno);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].empname);

        printf("Enter Employee Address: ");
        scanf("%s", emp[i].address);

        printf("Enter Employee Age: ");
        scanf("%d", &emp[i].age);

        printf("\n");

    }

    printf("\nEmployee Information:\n");
    
    for (i = 0; i < 5; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", emp[i].empno);
        printf("Employee Name: %s\n", emp[i].empname);
        printf("Employee Address: %s\n", emp[i].address);
        printf("Employee Age: %d\n", emp[i].age);
        printf("\n");
    }

}
