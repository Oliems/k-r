#include <stdio.h>

int main(void)
{
	int celsius;

	printf("\nCelsius\t\tFarenheit\n=========================\n");

	for (celsius = -50; celsius <= 100; celsius = celsius + 10)
	{
		printf("%7d\t\t%9.0f\n", celsius, (9.0 / 5.0) * (celsius + 32));
	}

	return 0;
}