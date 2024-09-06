#include <stdio.h>

/*
Q-7) Find area of Rectangle, Formula : A=wl

in this program:
A= area of rectangle
w= width of rectangle
l= length of rectangle
*/

int main()
{
    int A, w, l;
    printf("ENTER VALUE FOR WIDTH(w)= ");
    scanf("%d",&w);

    printf("\nENTER VALUE FOR LENGTH(l)= ");
    scanf("%d",&l);

    A= w * l;
    printf("AREA OF RECTANGLE IS= %d",A);
    
}