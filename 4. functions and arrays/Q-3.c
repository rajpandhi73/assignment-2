#include <stdio.h>

//Q-3) WAP to find reverse of string using recursion

void reverseString(char str[], int start, int end) 
{
    if (start >= end) 
    {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }

    reverseString(str, 0, len - 1);

    printf("Reversed string: %s\n", str);

}
