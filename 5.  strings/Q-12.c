#include <stdio.h>

// Q-12) Write a program in C to find the number of times a given word 'is' appears inthe given string.

int main() 
{
    char str[100];
    const char *word = "is";
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);  
  
    while (str[i] != '\0') 
    {
        if (str[i] == 'i' && str[i + 1] == 's') 
        {
            count++;
            i += 2;
        } 
        
        else 
        {
            i++;
        }
    }

    printf("The word 'is' appears %d times in the string.\n", count);

}
