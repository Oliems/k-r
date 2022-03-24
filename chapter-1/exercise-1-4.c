#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	celsius = lower = -50;

	upper = 100;

	step = 10;

	printf("\nCelsius\t\tFahrenheit\n=========================\n");

	while (celsius <= upper)
	{
		fahr = (celsius * (9.0 / 5.0)) + 32;
		printf("%7.0f\t\t%9.0f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
