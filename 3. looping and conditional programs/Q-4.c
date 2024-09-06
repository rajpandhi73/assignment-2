#include <stdio.h>

// Q-4) WAP to print table up to given numbers


int main()
{
    int n;
    int result;

    printf("ENTER NUMBER= ");
    scanf("%d",&n);  
    
    for(int i=1; i<=20; i++)
    {
        printf("\n%d*%d=%d",n,i,n*i);    
    }
}