#include <stdio.h>

// Q-6) Find the Character Is Vowel or Not

int main() 
{
    char alphabet;
    char capital_vowels, lowercase_vowels;

    printf("Enter any alphabet: ");
    scanf("%c", &alphabet);

  capital_vowels= (alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U');
lowercase_vowels= (alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u');
   
    if (capital_vowels || lowercase_vowels) 
    {
        printf("%c is a vowel.\n", alphabet);
    } 
   
    else 
    {
        printf("%c is not a vowel.\n", alphabet);
    }

}
