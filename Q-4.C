#include <stdio.h>

/*Q-4) Find Area of Square formula : a = a2

in this program:
a= length of the side of square
A= area of square 
*/

int main()
{
    
    int a,A;
    printf("ENTER VALUE FOR LENGTH OF SIDE(a)= ");
    scanf("%d",&a);

    A= a*a;
    printf("AREA OF SQUARE IS = %d",A);

}