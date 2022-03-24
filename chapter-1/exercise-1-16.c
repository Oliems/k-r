#include <stdio.h>
/* maximum input line size */
#define MAXLINE 1000

/* Revise the main routine of the longest line program so it will correctly
 *  print the lenght of arbitrarily long input lines, and as much as possible of
 *  the text. */

int get_line(char[], int);
void copy_line(char[], char[]);

/* print longest input line */
int main()
{
	int current_line_length;	/* current line length */
	int max_line_length;		/* maximum length seen so far */
	char current_line[MAXLINE]; /* current line input */
	char longest_line[MAXLINE]; /* longest line saved here */

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
}

/* read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy_line(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}
