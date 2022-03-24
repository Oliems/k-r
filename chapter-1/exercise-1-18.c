#include <stdio.h>
#include "myfunctions.h"

/* Write a program to remove trailing blanks and tabs from each line of input,
 *  and to delete entirely blank lines. */

#define MAXLINE 1000

int main(void)
{
	char line[MAXLINE];

	while (get_line(line, MAXLINE) > 0)
	{
		if (delete_trailing_blanks(line) > 0)
		{
			printf("%s", line);
		}
	}
	return 0;
}
