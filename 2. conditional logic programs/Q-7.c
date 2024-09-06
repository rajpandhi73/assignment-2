#include <stdio.h>

/* Q-7) Accept marks from user and check pass or fail

in this program if user input marks below 35 than we will print 'fail' 
else if the marks are 35 or above we will print 'pass'.
*/

int main()
{
    int marks;

    printf("Enter the marks of student= ");
    scanf("%d", &marks);

    if(marks < 35)
    {
        printf("FAIL");
    }

    else
    {
        printf("PASS");
    }
    
}