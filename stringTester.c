/*
 *Author(s): Collin Sipple, Victor Nguyen
 *Date Created: 10/10/2018
 *Date Modified: 10/11/2018
 My NU ID: 02357235
 CLASS: 155E
 Section 250
 *Purpose: Test the functions within the string_utils library
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"string_utils.h"

int main(int argc, char **argv) {

  //Test for function replaceChar()
  int numCases = 0;
  int casePassed = 0;
  char sampString[] = "Hello my dudes!";
  printf("Your sample string is:\n");
  printf("%s\n", sampString);
  //Test for correct usage
  numCases++;
  replaceChar(sampString, 'd', 'f');
  printf("Your string is now:\n");
  printf("%s\n", sampString);
  if(strcmp(sampString, "Hello my fufes!") == 0) {
	printf("Case %d passed!\n", numCases);
	casePassed++;
  } else {
	printf("Case %d failed! Expected following string:\n", numCases);
	printf("Hello my fufes!\n");
  }
  //Test for NULL error
  numCases++;
  char *nullString = NULL;
  replaceChar(nullString, 'd', 'f');
  if(nullString == NULL) {
	printf("Case %d passed!\n", numCases);
	casePassed++;
  } else {
	printf("Case %d failed! Expected to return as NULL.\n", numCases);
  }
  //Test for no change
  numCases++;
  printf("Your current string is:\n");
  printf("%s\n", sampString);
  replaceChar(sampString, 'q', 'g');
  printf("Your string is now:\n");
  printf("%s\n", sampString);
  if(strcmp(sampString, "Hello my fufes!") == 0) {
	printf("Case %d passed!\n", numCases);
	casePassed++;
  } else {
	printf("Case %d failed! Expected no change!\n", numCases);
  }

  //Test for function replaceCharCopy()
  //Test for correct usage
  numCases++;
  char *newString = replaceCharCopy(sampString, 'H', 'B');
  printf("Your new string reads:\n");
  printf("%s\n", newString);
  if(strcmp(newString, "Bello my fufes!") == 0) {
	printf("Case %d passed!\n", numCases);
	casePassed++;
  } else {
	printf("Case %d failed! Expected following string!\n", numCases);
	printf("%s\n", newString);
  }

  //Test for function removeChar()
  //Test for correct usage
  numCases++;
  printf("Your string reads:\n");
  printf("%s\n", sampString);
  removeChar(sampString, 'e');
  if(strcmp(sampString, "Hllo my fufs!") == 0) {
	printf("Case %d passed!\n", numCases);
  casePassed++;}
  else {
 printf("Case %d failed! Expected following string!\n", numCases);
 printf("%s\n", sampString);
 }

  numCases++;
  printf("Your string reads:\n");
  printf("%s\n", sampString);
  char *sampstring2 = (removeCharCopy(sampString, 'l'));
  if(strcmp(sampstring2, "Ho my fufs!") == 0) {
	printf("Case %d passed!\n", numCases);
  casePassed++;}
  else {
 printf("Case %d failed! Expected following string!\n", numCases);
 printf("%s\n", sampstring2);
 }
  printf("Your string now reads:\n");
  printf("%s\n", sampstring2);
  casePassed++;


    numCases++;
    printf("Your string reads:\n");
    printf("%s\n", sampString);
    char *sampstring3 = (removeCharCopy(sampString, 'f'));
    if(strcmp(sampstring3, "Hllo my us!") == 0) {
  	printf("Case %d passed!\n", numCases);
  }
    else {
   printf("Case %d failed! Expected following string!\n", numCases);
   printf("%s\n", sampstring3);
   }
    printf("Your string now reads:\n");
    printf("%s\n", sampstring3);
    casePassed++;

    numCases++;

  //Test for function removeCharCopy()
  //Test for correct usage
  printf("You passed %d out of %d cases.\n", casePassed, numCases);
  return 0;
}
