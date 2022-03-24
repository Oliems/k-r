#include <stdio.h>

/* print Celsius-Farenheit table */
int main()
{

	int C;

	printf("\nCelsius\t\tFarenheit\n=========================\n");

	for (C = -50; C <= 100; C = C + 10)
		printf("%3d %6.1f\n", C, (9.0 / 5.0) * C + 32);
}