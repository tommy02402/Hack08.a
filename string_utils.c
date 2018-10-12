/**
Author: Victor Nguyen, Collin Sipple, Tony Ong
My NU ID: 02357235
CLASS: 155E
Section 250
Date Started: 10/11/2018
Date Finished: 10/12/2018
 *
 */
/**
 * A program that represents and edit the letter of a given quotes.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "string_utils.h"


void replaceChar(char *s, char oldChar, char newChar) {

if(s == NULL) {
  return;
}

  for (int i = 0; i < strlen(s); i++) {
    if(s[i] == oldChar) {
      s[i] = newChar;
      }
  }
return;
}


char * replaceCharCopy(const char *s, char oldChar, char newChar)
{
  if(s == NULL) {
  return NULL;
}
   char *newString = (char *) malloc(sizeof(char) * (strlen(s) +1));
   for(int i =  0; i <= strlen(s); i++) {
     newString[i] = s[i];
if(newString[i] == oldChar) {
  newString[i] = newChar;
}
   }
   return newString;
}

void removeChar(char *s, char c)
  { if(s == NULL) {
    return;
  }
  for(int i = 0; i < strlen(s); i++) {
    int j = 0;
  	if(s[i] == c) {
  	  for(int j = i; j < strlen(s); j++) {
  		s[j] = s[j + 1];
}
j = i;
    while(s[j] == c) {
      for(int j = i; j < strlen(s); j++) {
  		s[j] = s[j + 1];
  	  }
      }

} else if(s[i] == '\0') {
  	  for(int j = i; j < strlen(s); j++) {
  		s[j] = '\0';
  	  }
  	}

    }

    return;
}

char * removeCharCopy(const char *s, char c) {
    if(s == NULL) {
    return NULL;
  }
char *newCopy = replaceCharCopy(s, '.', '.');
removeChar(newCopy, c);
char *FinalCopy = replaceCharCopy(newCopy, '.', '.');
free(newCopy);
return FinalCopy;
}

char **lengthSplit(const char *s, int n) {
  if(s == NULL) {
  return NULL;
}

int lengthSplit1 = strlen(s);
int rows = ceil(1.0  * lengthSplit1 / n);
char **matrix = (char **)malloc(sizeof(char*) * (rows));
for(int i = 0; i < rows; i++) {
  matrix[i] = (char *)malloc(sizeof(char) * n);
}
int k = 0;
for (int i = 0; i < rows; i++) {
  for (int j = 0; j < n; j++) {
    matrix[i][j] = s[k];
    k++;
  }
}
return matrix;
}
