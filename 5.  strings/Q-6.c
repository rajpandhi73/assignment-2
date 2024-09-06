#include <stdio.h>

// Q-6) Write a program in C to count the total number of alphabets, digits and specialcharacters in a string.

int main()
{
    char str[100];
    int i=0, alphabets=0, numbers=0, specialChars=0;    

    printf("enter a string= ");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }

        else if (str[i] >= '1' || str[i] <= '9')
        {
            numbers++;
        }

        else
        {
            specialChars++;
        }
        i++;
    }

    printf("alphabets in string are= %d\n", alphabets);
    printf("numbers in string are= %d\n", numbers);
    printf("special characters in string are= %d", specialChars);

}