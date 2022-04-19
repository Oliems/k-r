// Prints a Farenheit to Celsius table.
// This time we have a better formatting of the ouput and more precise results.

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	fahr = lower = 0;

	upper = 300;

	step = 20;

	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
