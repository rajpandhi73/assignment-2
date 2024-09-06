#include <stdio.h>

//Q-15) Convert school’s name in abbreviated form

int main()
{
    char fname[10], mname[10], lname[10];
    printf("ENTER THE SCHOOLS NAME= ");
    scanf("%s %s %s",fname, mname, lname);

    printf("ABBREVIATED FORM= ");
    printf("%c. %c. %s\n", fname[0], mname[0], lname);

}