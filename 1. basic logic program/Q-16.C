#include <stdio.h>
 
 // Q-16) Convert country’s name in abbreviate form

int main()
{
    char fname[10], mname[10], lname[10];
    printf("ENTER COUNTRIES NAME= ");
    scanf("%s %s %s",fname, mname, lname);

    printf("ABBREVIATED FORM= ");
    printf("%c. %c. %c\n", fname[0], mname[0], lname[0]);

}