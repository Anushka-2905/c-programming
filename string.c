1..basic program of string..

  #include<stdio.h>

int main() {

  char name[20];

  printf("Enter your name : ");
  scanf("%s", name);
  printf("Hello %s", name);
  return 0;
}

2..Program to find the length of a string

#include<stdio.h>
#include<string.h>

int main()  {
   char str[50];
   printf("Enter a string : ");
   scanf("%s", str);

   printf("Length = %ld", strlen(str));

   return 0;
}

3..Program to copy one string into another

#include<stdio.h>
#include<string.h>

int main() {
  char s1[50], s2[50];
  printf("Enter a string : ");
  scanf("%s", s1);
  strcpy(s2, s1);
  printf("Copied string = %s", s2);

  return 0;
}

4..Program to concatenate two strings

#include<stdio.h>
#include<string.h>

int main() {
  char s1[50], s2[50];

  printf("Enter first string : ");
  scanf("%s", s1);
  printf("Enter second string : ");
  scanf("%s", s2);

  strcat(s1, s2);

  printf("Concatenated string = %s", s1);
  return 0;
}

5..Program to compare two strings

#include<stdio.h>
#include<string.h>

int main() {
  char s1[50], s2[50];

  printf("Enter first string : ");
  scanf("%s", s1);
  printf("Enter second string : ");
  scanf("%s", s2);

  if(strcmp(s1, s2) == 0) {
    printf("Strings are equal");

  }
    else {
      printf("Strings are not equal");
    }
  return 0;
}

6..Program to reverse a string (without using strrev)

#include<stdio.h>

#include<string.h>

int main() {
  char str[50], rev[50];
  int len, i;
  printf("Enter a string :");
  scanf("%s", str);
  len = strlen(str);

  for (i = 0; i<len; i++) {
    rev[i] = str[len - i -1];
  }
  rev[len] = '\0';

  printf("Reversed string = %s", rev);

  return 0;
}

7..Program to count vowels in a string



