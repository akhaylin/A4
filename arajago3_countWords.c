/* CS2211B 2020 */
/* Assignment 4 */
/* Akhaylin Rajagopaul */
/* 250965398 */
/*arajago3*/
/*March 15, 2020*/

#include<stdlib.h>
#include<stdio.h>

int countWords(char fname[])
{
	FILE*fp;
	char c;
	int wordCount=0;
	fp=fopen(fname,"r");
	c=fgetc(fp);

	while(c!=EOF)
	{
		//if a character is a blank space or a new line then 
		//a word is completed therefore incremenet count
		if(c==' '||c=='\n')
			wordCount++;
		c=fgetc(fp);
	}
	fclose(fp);

	return wordCount+1;
}

