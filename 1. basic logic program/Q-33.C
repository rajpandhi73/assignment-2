#include <stdio.h>

/*
Q-33) C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/

int main() 
{
    int num;
    int power1, power2, power3;

    printf("ENTER ANY INTEGER NUMBER= ");
    scanf("%d", &num);

    power1= num;
    power2= num*num;
    power3= num*num*num;

    printf("N^1 = %d", power1);
    printf("\nN^2 = %d", power2);
    printf("\nN^3 = %d", power3);

}
