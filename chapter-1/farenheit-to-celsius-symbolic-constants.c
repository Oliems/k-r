#include <stdio.h>

int main()

{

#define LOWER 0
#define UPPER 300
#define STEP 20

	float F;

	for (F = LOWER; F <= UPPER; F = F + STEP)
		printf("%3.0f %6.1f\n", F, (5.0 / 9.0) * (F + 32));
}
