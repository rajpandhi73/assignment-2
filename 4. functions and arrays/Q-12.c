#include <stdio.h>

// Q-12) WAP to accept 5 students name and store it in array


int main()
{
    char studentsNames[5][100];
    int i;

    printf("Enter names of 5 students:\n");

    for(i=0; i<5; i++)
    {
        printf("Student no %d- ", i+1);
        scanf("%s", studentsNames[i]);
    }

    printf("\n The students names are: \n");

    for(i=0; i<5; i++)
    {
        printf("%s\n", studentsNames[i]);
    }
}
