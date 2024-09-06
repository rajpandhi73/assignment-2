#include <stdio.h>

// Q-10) Write a program in C to extract a substring from a given string

int main() 
{
    char str[100], substr[100];
    int start, length, i;

    printf("Enter a string: ");
    gets(str); 

    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    for (i = 0; i < length && str[start + i] != '\0'; i++) 
    {
        substr[i] = str[start + i];
    }
    
    substr[i] = '\0'; 

    printf("Extracted substring: %s\n", substr);
}
