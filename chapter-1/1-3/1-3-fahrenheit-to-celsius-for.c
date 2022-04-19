// Prints a Farenheit to Celsius table.
// This time we use a for `loop` instead of a `while` using only one variable.

#include <stdio.h>

int main(void)
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return 0;
}
