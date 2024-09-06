#include <stdio.h>

// Q-2) Write a program in C to separate individual characters from a string.

int main() 
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  
    printf("The individual characters of the string are:\n");
   
    while (str[i] != '\0') 
    {
        printf("%c\n", str[i]);
        i++;
    }

}
