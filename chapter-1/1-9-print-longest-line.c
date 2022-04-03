#include <stdio.h>
#include "ch1.h"

// maximum input line size
#define MAXLINE 1000

// print longest input line
int main(void)
{
	int current_line_length;	// current line length
	int max_line_length;		// maximum length seen so far
	char current_line[MAXLINE]; // current line input
	char longest_line[MAXLINE]; // longest line saved here

	max_line_length = 0;
	while ((current_line_length = get_line(current_line, MAXLINE)) > 0)
	{
		if (current_line_length > max_line_length)
		{
			max_line_length = current_line_length;
			copy_line(longest_line, current_line);
		}
	}
	if (max_line_length > 0)
	{
		printf("%s", longest_line);
	}

	return 0;
}