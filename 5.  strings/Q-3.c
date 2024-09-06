#include <stdio.h>

// Q-3) Write a program in C to print individual characters of a string in reverse order

int main() 
{
    char str[50];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') 
    {
        length++;
    }

    printf("The string in reverse order is:\n");

    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c\n", str[i]);
    }

}
