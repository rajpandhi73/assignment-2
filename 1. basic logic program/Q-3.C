#include <stdio.h>

/*
Q-3) Write a Program to Find Area And Circumference of Circle.

in this program:
pi= 3.14, 
a= AREA OF CIRCLE, 
c= CIRCUMFERENCE OF CIRCLE,
r= RADIUS OF CIRCLE.
*/

int main()
{
    float a, c, r;
    float pi= 3.14;
    int choice;
        printf("\nENTER YOUR CHOICE\n");
        printf("\n1. AREA OF CIRCLE \n2. CIRCUMFERENCE OF CIRCLE");
        scanf("%d",&choice);
    
     if (choice > 2) 
    {
        printf("YOU HAVE ENTERED WRONG CHOICE\n");
    }

    else
    {
        printf("\nENTER ANY NUMBER FOR RADIUS= ");
        scanf("%f",&r);

    }

    if (choice == 1)
    {
        a= pi * r * r;
        printf("AREA OF CIRCLE IS = %.3f",a);
    }

    else if (choice == 2)
    {
        c= 2 * pi * r;
        printf("CIRCUMFERENCE OF CIRCLE IS = %.3f",c);
    }


}
