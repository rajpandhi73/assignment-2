#include <stdio.h>

/*
Q-6) Find area of Triangle, Formula : A = 1/2 × b × h

in this program:
b= BASE OF TRIANGLE
h= HEIGHT OF THE TRIANGLE
1/2 will be considered as 0.5
*/

int main()
{
    float A, b, h;
    printf("ENTER VALUE FOR BASE(b)= ");
    scanf("%f",&b);

    printf("\nENTER VALUE FOR HEIGHT(h)= ");
    scanf("%f",&h);

    A= 0.5 * b * h;
    printf("AREA OF TRIANGLE IS= %.3f",A);

}