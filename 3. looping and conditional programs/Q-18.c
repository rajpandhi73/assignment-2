#include <stdio.h>

// Q-18) Write a C Program to Print the Multiplication Table of N

int main()
{
    int n;
    int result;


        printf("ENTER NUMBER= ");
        scanf("%d",&n);

        for(int i=1; i<=10; i++)
        {
            printf("\n%d*%d=%d",n,i,n*i);

        }
}