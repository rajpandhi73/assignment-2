#include <stdio.h>

//Q-7) WAP Find out length of string without using inbuilt function

int main()
{
    char str[100];
    int length=0;

    printf("enter the string= ");
    scanf(" %s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("length of the string is %d\n", length);
}