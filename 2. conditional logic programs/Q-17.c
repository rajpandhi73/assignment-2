#include <stdio.h>

/*
Write a C program to check whether a triangle can be formed with the given 
values for the angles.

in this program: if a sum of all angles comes 180 then a triangle can be formed.
*/

int main() 
{
    int angle1, angle2, angle3, sum;

    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    printf("Sum of all three angles of triangle is: %d\n", sum);

    if (sum == 180) 
    {
        printf("A triangle can be formed with the given angles.\n");
    } 
    
    else 
    {
        printf("A triangle cannot be formed with the given angles.\n");
    }

}
