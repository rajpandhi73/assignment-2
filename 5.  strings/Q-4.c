#include <stdio.h>

// Q-4) Write a program in C to count the total number of words in a string.

int main() 
{
    char str[100];
    int i = 0, wordCount = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            wordCount++;
        }
        i++;
    }

    printf("Total number of words in the string: %d\n", wordCount);

}
