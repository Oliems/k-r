#include <stdio.h>

/* Write a program that prints its input one word per line. */

#define NONBLANK '0'
#define NEWLINE '\n'

int main()

{
	int c, nl;

	nl = NONBLANK;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n' && nl != NEWLINE)
		{
			putchar('\n');
			nl = NEWLINE;
		}
		if (c != ' ' && c != '\t' && c != '\n')
		{
			putchar(c);
			nl = NONBLANK;
		}
	}
}
