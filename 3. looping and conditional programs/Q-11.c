#include <stdio.h>

// Q-11) Accept 5 names from user at run time.

int main() 
{
    char names[5][50];

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nThe entered names are:\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("%s\n", names[i]);
    }

}
