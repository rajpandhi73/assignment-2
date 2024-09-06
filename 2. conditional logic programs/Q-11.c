#include <stdio.h> 

// Q-11) WAP to find number is even or odd using ternary operator
   
int main() 
{  
    int num, isEven;  
   
    printf("Enter any number= ");  
    scanf("%d", &num); 
     
    isEven =  (num%2 == 1) ? 0 : 1;  
     
    if(isEven == 1)
    {
        printf("%d is Even\n", num);
    }
    
    else
    {
        printf("%d is Odd\n", num);
    }
     
}