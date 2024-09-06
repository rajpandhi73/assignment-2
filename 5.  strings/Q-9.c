#include <stdio.h>

// Q-9) Write a program in C to find the maximum number of characters in a string

int main()
{
    char str[100];
    int i=0, maxLength=0;

    printf("enter at string= ");
    scanf(" %s", str);

    while (str[i] != '\0')
    {
        maxLength++;
        i++;

    }

    printf("maximum length of a string is= %d\n", maxLength);

}