#include <stdio.h>

void findLargestSmallestWords(char str[], char largest[], char smallest[]) 
{
    int i = 0, j = 0, start = 0, end = 0;
    int maxLen = 0, minLen = 1000, wordLen = 0;
    char word[100];

    while (str[i] != '\0') 
    {
        while (str[i] == ' ') 
        {
            i++;
        }

        start = i;

        while (str[i] != ' ' && str[i] != '\0') 
        {
            i++;
        }

        end = i;

        wordLen = end - start;

        for (j = 0; j < wordLen; j++) 
        {
            word[j] = str[start + j];
        }
        word[j] = '\0';

        if (wordLen > maxLen) 
        {
            maxLen = wordLen;
            for (j = 0; j <= wordLen; j++) 
            {
                largest[j] = word[j];
            }
        }

        if (wordLen < minLen) 
        {
            minLen = wordLen;
            for (j = 0; j <= wordLen; j++) 
            {
                smallest[j] = word[j];
            }
        }
    }
}

int main() 
{
    char str[100] = "This is a test string with smallest and largest words";
    char largest[100], smallest[100];

    findLargestSmallestWords(str, largest, smallest);

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

}
