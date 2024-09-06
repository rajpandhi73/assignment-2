#include <stdio.h>

// Q-8) WAP to reverse a string and check that the string is palindrome or not

int main() 
{
    char str[100], reversedStr[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') 
    {
        length++;
    }

    for (i = 0; i < length; i++) 
    {
        reversedStr[i] = str[length - i - 1];
    }
    
    reversedStr[length] = '\0';

    for (i = 0; i < length; i++) 
    {
        if (str[i] != reversedStr[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    printf("Reversed String: %s\n", reversedStr);

    if (isPalindrome) 
    {
        printf("The string is a palindrome.\n");
    } 
    
    else 
    {
        printf("The string is not a palindrome.\n");
    }

}
