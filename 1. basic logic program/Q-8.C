#include <stdio.h>

/*
Q-8) Find circumference of Rectangle, formula : C = 4 * a

in this program:
C= circumference of rectangle
a= sides of rectangle
*/

int main()
{
    int C, a;

    printf("enter the value for sides= ");
    scanf("%d", &a);
    
    C= 4 * a;
    printf("circumference of rectangle= %d", C);

}