#include <stdio.h>

/*
Q-13) Find character value from ascii

in this program:
ASCII means (American Standard Code for Information Interchange),
this value is a numerical representation of character used in computer and electronic
devices. each letter, digit, punctuation mark, etc. has assigned ascii code.
for example, '65' ascii value is assigned for 'A'.
*/

int main() 
{
    int asciiValue;
    char character;

    printf("Enter the ASCII value: ");
    scanf("%d", &asciiValue);

    character = (char)asciiValue;

    printf("The character for ASCII value %d is '%c'\n", asciiValue, character);

}
