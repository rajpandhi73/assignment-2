#include <stdio.h>

/*
Q-1) Write a program to find out the max number from given array using 
function
*/

int maxNumber(int arr[], int size)
{
    int max= arr[0];

    for (int i=0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max= arr[i];
        }
    }
}

int main()
{
    int n;

    printf("enter the number of elements in the array= ");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d elements= ", n);

    for (int i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    }

    int max= maxNumber(arr, n);

    printf("the maximum number in the array is %d\n", max); 

}