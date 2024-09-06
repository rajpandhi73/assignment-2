#include <stdio.h>

/*
Q-10) find the area of a rectangular prism, formula : A=2(wl+hl+hw)

in this program:
A= area of rectangular prism
w= width of rectangular prism
l= length of rectangular prism
h= height of rectangular prism
*/

int main()
{
    int A, w, l, h;
    printf("ENTER THE VALUE FOR WIDTH(w)= ");
    scanf("%d",&w);

    printf("ENTER THE VALUE FOR LENGTH(l)= ");
    scanf("%d",&l);

    printf("ENTER THE VALUE FOR HEIGHT(h)= ");
    scanf("%d",&h);

    A= 2*(w*l + h*l + h*w);
    printf("AREA OF RECTANGULAR PRISM= %d",A);

}