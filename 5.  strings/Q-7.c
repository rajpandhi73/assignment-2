#include <stdio.h>

// Q-7) Write a program in C to copy one string to another string

int main()
{
    char str1[100], str2[100];
    int i=0;

    printf("enter a string= ");
    scanf(" %s", str1);

    while (str1[i] != '\0')
    {
        str2[i]=str1[i];
        i++;

    }

    str2[i] = '\0';

    printf("copied string= %s", str2);


}