#include <stdio.h>

int main(void)
{
	int c, tabs, newlines, blanks;

	tabs = newlines = blanks = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++newlines;
	}

	printf("Tabs: %d\nNewlines: %d\nBlanks: %d", tabs, newlines, blanks);

	return 0;
}
