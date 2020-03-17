/* CS2211B 2020 */
/* Assignment 4 */
/* Akhaylin Rajagopaul */
/* 250965398 */
/*arajago3*/
/*March 15, 2020*/

#include<stdlib.h>
#include<stdio.h>

int countLines(char fname[])
{
	FILE*fp;
	char c;
	int lineCount=0;
	fp=fopen(fname,"r");
	c=fgetc(fp);
	//in loop if char is a new line the incremenet count 
	while((c=fgetc(fp))!=EOF){
		if(c=='\n')
			lineCount++;
	}
	fclose(fp);
	//add 1 to consider last line
	return lineCount+1;
}

