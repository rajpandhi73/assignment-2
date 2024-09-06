#include <stdio.h>

/* Q-8) WAP to accept the height of a person in centimeters and categorize the 
person according to their height.

in this program:
height is measured in ft.
*/

int main() 
{
    float height;

    printf("Enter your height= ");
    scanf("%f", &height);

    if (height < 5) 
    {
        printf("You are categorized as Short.\n");
    } 
    
    else if (height >= 5 && height <= 6) 
    {
        printf("You are categorized as Average.\n");
    } 
    
    else if (height > 6) 
    {
        printf("You are categorized as Tall.\n");
    } 
    
    else 
    {
        printf("Invalid height.\n");
    }

}
