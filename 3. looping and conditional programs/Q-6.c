#include <stdio.h>

// Q-6) WAP to print Fibonacci series up to given numbers

int main()
{
    int i, n;
    int t1 = 0, t2 = 1;
    int t3 = t1 + t2;

    printf("enter any number= ");
    scanf("%d", &n);

    printf("fibonacci series: %d, %d, ", t1, t2);

    for(i=3; i<=n; ++i)
    {
        printf("%d, ", t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }

}