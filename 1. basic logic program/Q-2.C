#include <stdio.h>

/*
Q-2) Write a program to make Simple calculator 
(to make addition, subtraction, multiplication, division and modulo)
*/

int main()
{
    int num1,num2,choice;

        printf("\n~|CALc BY RAJ PANDHI|~\n");

        printf("\nENTER YOUR CHOICE");
        printf("\n 1. ADDITION\n 2. SUBRACTION\n 3. MULTIPLICATION\n 4. DIVISION\n 5. MODULO");
        scanf("%d",&choice);

    if (choice > 5) 
    {
        printf("YOU HAVE ENTERED WRONG CHOICE\n");
    }

    else
    {
        printf("\nENTER ANY 2 NUMBERS");
        scanf("%d %d",&num1,&num2);
    }
    
    if (choice == 1)
    {
        printf("\n%d + %d = %d",num1,num2,num1+num2);
    }

    else if (choice == 2)
    {
        printf("\n%d - %d = %d",num1,num2,num1-num2);
    }

    else if (choice == 3)
    {
        printf("\n%d * %d = %d",num1,num2,num1*num2);
    }

    else if (choice == 4)
    {
        if (num2 != 0)
        {
            printf("\n%d / %d = %d",num1,num2,num1/num2);
        }
        else
        {
            printf("NUMBER CANNOT BE DIVIDED BY 0\n");
        }
    }

    else if (choice == 5)
    {
        if (num2 != 0)
        {
            printf("\nMODULO OF %d and %d = %d",num1,num2,num1%num2);
        }
        else
        {
            printf("NUMBER CANNOT BE DIVIDED BY 0\n");
        }
    }

    else
    {
        printf("PLEASE CHOICE BETWEEN 1,2,3,4 OR 5 OPTION");
    }
    
 }
