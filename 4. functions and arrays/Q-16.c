#include <stdio.h>

// Q-16) Accept 5 numbers from user and perform sum of array

int main()
{
    int numbers[5];
    int i;
    int sum=0;

    printf("enter 5 numbers:\n");

    for(i=0; i<5; i++)
    {
        printf("number %d= ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for(i=0; i<5; i++)
    {
        sum+= numbers[i];
    }

    printf("the sum of the numbers is= %d", sum);

}