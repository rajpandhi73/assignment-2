#include <stdio.h>

//ii. Vowel or Consonant using switch case

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

            printf("The character is a vowel.\n");
            break;
        
        default:
    
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
            {
                printf("The character is a consonant.\n");
            } 
            
            else 
            {
                printf("The character is neither a vowel nor a consonant.\n");
            }
    }

}
