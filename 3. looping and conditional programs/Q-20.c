#include <stdio.h>

/*
Q-20) WAP program to print below output using for loop 
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/

int main() 
{
    int i, j;
    int number = 1;

    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 10; j++) 
        {
            printf("%d ", number++); 
        }
        printf("\n");
    }
}
