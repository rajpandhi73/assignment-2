#include <stdio.h>

/*
Q-8) WAP to reverse a string and check that the string is palindrome 
or notWrite a program of structure employee that provides the 
following

a) information -print and display empno, empname, 
address and age
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
    struct Employee emp;

    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);

    printf("Enter Employee Name: ");
    scanf("%s", emp.empname);

    printf("Enter Employee Address: ");
    scanf("%s", emp.address);

    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);

}
