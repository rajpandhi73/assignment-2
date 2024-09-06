#include <stdio.h>

// Q-14) Write a program in C to combine two strings manually


int main()
{
    char s1[100]= "flutter", s2[100]= " is best";
    int length, j;

  length = 0;
  while (s1[length] != '\0') 
  {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) 
  {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);


}