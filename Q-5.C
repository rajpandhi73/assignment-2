#include <stdio.h>

/*
Q-5) Find Area of Cube formula : a = 6a2

in this program:
a= length of side of cube
A= area of the cube
*/

int main()
{
    int a, A;
    printf("ENTER THE VALUE FOR LENGTH OF THE SIDE(a)= ");
    scanf("%d",&a);

    A= 6 * a * a;
    printf("\nAREA OF THE CUBE IS= %d",A);

}