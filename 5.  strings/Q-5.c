#include <stdio.h>

// Q-5) Write a program in C to compare two strings without using string library functions

int main()
{
    char str1[100], str2[100];
    int i=0, isequal=1;

    printf("enter the first string= ");
    scanf(" %s", str1);

    printf("enter the second string= ");
    scanf(" %s", str2);

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            isequal=0;
            break;
        }
        i++;
    }

    if (isequal)
    {
        printf("the strings are equal");
    }

    else
    {
        printf("the strings are not equAL");
    }
}