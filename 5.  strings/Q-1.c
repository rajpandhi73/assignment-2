#include <stdio.h>

// Q-1) Write a program in C to find the length of a string without using libraryfunctions.

int main() 
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[length] != '\0') 
    {
        length++;
    }

    printf("The length of the string is: %d\n", length);

}
