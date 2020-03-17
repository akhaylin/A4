/*CS2211B 2020 */
/* Assignment 4 */
/* Akhaylin Rajagopaul */
/* 250965398 */
/*arajago3*/
/*March 15, 2020*/

#include<stdlib.h>
#include<stdio.h>

#include "arajago3_headers_P1.h"

int main()
{
	//file name variable
	char fname[25];
	//user prompt
	printf("Enter the Filename: \n");
	scanf("%s",fname);

	//Functions for counting words characters and lines 
	printf("Total number of characters = %d\n",countCharacters(fname));
	printf("Number of words = %d\n",countWords(fname));
	printf("Number of lines = %d\n",countLines(fname));
	return 0;
}

