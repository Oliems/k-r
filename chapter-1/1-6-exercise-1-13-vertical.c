// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define IN 1			   // we are inside of a word
#define OUT 0			   // we are outside of a word
#define MAX_WORD_LENGTH 20 // the maximum number of characters in a word

int main(void)
{
	int c, i, j, state, ncw; // ncw is the number of characters in a word
	int height;				 // the heigth of the histogram which corresponds to the highest number of occurences for a given word length.
	int word_length[MAX_WORD_LENGTH];

	c = ncw = height = 0;
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
		if (height <= word_length[i])
		{
			height = word_length[i];
		}
	}

	printf("\n%d\n", height);

	while (height > 0)
	{
		for (i = 0; i < MAX_WORD_LENGTH; ++i)
		{
			if (height > word_length[i])
			{
				printf(" ");
			}
			else
			{
				printf("|");
			}
		}
		--height;
		printf("\n");
	}

	for (i = 0; i < MAX_WORD_LENGTH; ++i)
	{
		printf("=");
	}

	printf("\n");

	for (i = 0; i < MAX_WORD_LENGTH; ++i)
	{
		printf("%d", i);
	}

	return 0;
}

// En un village de la Manche du nom duquel je ne me veux souvenir