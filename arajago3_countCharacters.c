/*CS2211B 2020 */
/* Assignment 4 */
/* Akhaylin Rajagopaul */
/* 250965398 */
/*arajago3*/
/*March 15, 2020*/

#include <stdlib.h>
#include <stdio.h>

int countCharacters(char fname[])
{
	//initialising the file pointer 
	FILE*fp;
	char c;
	//array to count occurence of characters 
	int occurence[128]={0};

	//Variable for word count and character count 
	int wordCount =1;
	int charCount =0;
	//open file 
	fp=fopen(fname,"r");
	//read first character 
	c=fgetc(fp);

	//loop till end of file 
	while(c!=EOF)
	{
		if(c==' '||c=='\n')
			wordCount++;
		else
		{
			//if chat is other than '' and 'new line'
			//then incremenet count and incremenet occurence array
			//of corresponding index 
			charCount++;
			occurence[(int)c]++;
		}

		//read next character 
		c=fgetc(fp);
	}

	int i;
	int disCount=0;
	//loop to count dinstinct characters 
	for (i=0;i<128;i++)
		if(occurence[i]>=1)
		{
			disCount++;
		}

	//printing the number of distinct characters 
	printf("number of distinct characters : %d\n",disCount);
	//close file 
	fclose(fp);
	//return total num characters 
	return charCount;
}

