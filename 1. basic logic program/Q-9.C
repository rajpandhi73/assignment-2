#include <stdio.h>

/*
Q-9) Find circumference of Triangle, formula : triangle = a + b + c

in this program:
a, b, c are the sides of triangle
*/

int main()
{
    int triangle, a, b, c;
    printf("ENTER THE VALUE FOR SIDE(a)= ");
    scanf("%d",&a);

    printf("ENTER THE VALUE FOR SIDE(b)= ");
    scanf("%d",&b);

    printf("ENTER THE VALUE FOR SIDE(c)= ");
    scanf("%d",&c);

    triangle= a + b + c;
    printf("\nCIRCUMFERENCE OF TRIANGLE= %d",triangle);

}