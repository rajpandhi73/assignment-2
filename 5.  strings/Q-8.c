#include <stdio.h>

// Q-8) Write a program in C to count the total number of vowels or consonants in astring

int main()
{
    char str[100];
    int i=0, vowels=0, consonants=0;

    printf("enter a string= ");
    scanf(" %s", str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
            {
                vowels++;
            } 
            
            else 
            {
                consonants++;
            }
        }
        i++;
    }

    printf("total number of vowels are= %d\n", vowels);
    printf("total numbers of consonants are= %d\n", consonants);

}