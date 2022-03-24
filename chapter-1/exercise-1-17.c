#include <stdio.h>
#include "myfunctions.h"

/* Write a program to print all input lines that are longer than CHARLIMIT characters */

#define MAXLINE 1000
#define CHARLIMIT 80

int main()

{
	int line_length;
	char line[MAXLINE];

	while ((line_length = get_line(line, MAXLINE)) > 0)
	{
		if (line_length > CHARLIMIT)
		{
			printf("\n%s\n", line);
		}
	}
}
