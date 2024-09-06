#include <stdio.h>

/*
Q-21) Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable
*/

int main()
{
    int x, y, H;

    printf("ENTER VALUE OF X= ");
    scanf("%d", &x);

    printf("ENTER VALUE FOR Y= ");
    scanf("%d", &y);

    printf("\nORIGINAL VALUES : x=%d, y=%d\n", x,y);

  // swapping numbers using 3rd variable
    
    H=x;
    x=y;
    y=H;

    printf("\nAFTER SWAPPING USING 3RD VARIABLE: x=%d, y=%d", x,y);

  // swapping back to original number without using 3rd variable

    x= x + y;
    y= x - y;
    x= x - y;

    printf("\nAFTER SWAPPING BACK WITHOUT USING 3RD VARIABLE: x=%d, y=%d", x, y);
}