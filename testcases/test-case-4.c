/*
// Authors:
// Manit Nahar (RA1911028010100)
// Harsh Gupta (RA1911028010118)
// Eshanika Ray (RA1911028010123)


Compiler Design Project 1

Test Case 4

Following errors must be detected
 - Invalid identifiers: 9y, total$
 - Invalid operator: @
 - Escaped quoted should be part of the string that is identified
 - Stray characters: `, @, -
 
The output should display appropriate errors
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  `
  @ -
  short int b;
  int x, 9y, total$;
  total = x @ y;
  printf ("Total = %d \n \" ", total);
}