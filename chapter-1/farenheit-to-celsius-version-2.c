#include <stdio.h>

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()

{
	float fahr, celsius;
	int lower, upper, step;

	/* lower limit if temperature table */
	lower = 0;

	/* upper limit */
	upper = 300;

	/* step size */
	step = 20;

	fahr = lower;

	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
