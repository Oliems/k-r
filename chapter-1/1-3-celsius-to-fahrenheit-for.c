// Prints a Celsius to Farenheit table.
// This time we use a for `loop` instead of a `while` using only one variable.

#include <stdio.h>

int main(void)
{
	int celsius;

	for (celsius = -50; celsius <= 100; celsius = celsius + 10)
	{
		printf("%3d°C\t%7.0f°F\n", celsius, ((9.0 / 5.0) * celsius) + 32);
	}

	return 0;
}