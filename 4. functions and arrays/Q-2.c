#include <stdio.h>

/*
Q-2) WAP of Addition, Subtraction, Multiplication and Division using 
Switchcase.(Must Be Menu Driven)
*/

int main() 
{
    int choice;
    float num1, num2, result;

    while(1) 
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) 
        {
            printf("Exiting from calculator\n");
            break;
        }

        printf("enter any two numbers= ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
            case 1:
                result= num1+num2;
                printf("result= %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            
            case 2:
                result= num1-num2;
                printf("result= %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            
            case 3:
                result= num1*num2;
                printf("result= %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            
            case 4:
                if (num2 != 0)
                {
                result= num1/num2;
                printf("result= %.2f / %.2f = %.2f\n", num1, num2, result);
                }

                else 
                {
                    printf("number cannot be divided by zero\n");
                }
                break;

            default:

                printf("you have entered wrong choice. enter choice between 1 to 5\n");
        }
    }
}

