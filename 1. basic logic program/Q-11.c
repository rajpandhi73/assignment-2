#include <stdio.h>

/* 
Q-11) Find circumference(perimeter) of square, formula : C = 4 * a

in this program:
a= side of square
*/

int main()
{
    int C, a;
    printf("ENTER THE VALUE FOR SIDES(a)= ");
    scanf("%d",&a);

    C= 4 * a;
    printf("CIRCUMFERENCE OF SQUARE IS= %d",C);
    
}