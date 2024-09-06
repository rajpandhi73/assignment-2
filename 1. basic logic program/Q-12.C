#include <stdio.h>

/*
Q-12) Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required?
*/

int main()
{
    int numberOfStudents;
    int applesPerStudent = 5;
    int totalApples;

    printf("ENTER NUMBER OF STUDENTS= ");
    scanf("%d", &numberOfStudents);

    totalApples= numberOfStudents * applesPerStudent;
    
    printf("TOTAL APPLES REQUIRED ARE= %d",totalApples);

}