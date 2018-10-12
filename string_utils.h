/*
 *Author(s): Collin Sipple, Victor Nguyen
 *Date Created: 10/10/2018
 *Date Modified: 10/11/2018
 My NU ID: 02357235
 CLASS: 155E
 Section 250
 *Purpose: Provide functions that copies, modifies, and produces strings from
 *given arrays (namely strings)
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//Replaces a given character in a string with another one.
void replaceChar(char *s, char oldChar, char newChar);

//Deep copies a string, but replaces a certain character with another.
char * replaceCharCopy(const char *s, char oldChar, char newChar);

//Removes characters from a string, making all char shift down
void removeChar(char *s, char c);

/** This function remove the characters from a copy string */
char * removeCharCopy(const char *s, char c);


/** This function will split the characters from a string */
char **lengthSplit(const char *s, int n);
