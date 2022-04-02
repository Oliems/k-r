// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 20

int main(void)
{
	int c, i, j, ncw, state;
	int word_length[MAX_WORD_LENGTH];

	c = ncw = 0;
	state = OUT;
	for (i = 0; i < MAX_WORD_LENGTH; ++i)
	{
		word_length[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\t' && c != '\n')
		{
			++ncw;
			state = IN;
		}
		else if (state == IN)
		{
			++word_length[ncw];
			ncw = 0;
			state = OUT;
		}
	}

	for (i = 0; i < MAX_WORD_LENGTH; ++i)
	{
		printf("\n%2d |", word_length[i]);
		for (j = 0; j < word_length[i]; ++j)
		{
			printf("=");
		}
	}

	return 0;
}