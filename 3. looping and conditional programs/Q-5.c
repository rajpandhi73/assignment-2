#include <stdio.h>

// Q-5) WAP to print factorial of given number

int main()
{
    int x, fact=1, n;

    printf("enter any number= ");
    scanf("%d", &n);

    for(x=1; x<=n; x++)
    {
        fact= fact*x;
    }

    printf("factorial of %d is= %d", n,fact);

}