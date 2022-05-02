/*
Prints a Farenheit to Celsius table.
We use symbolic constants to make the program more legible and easier to modify.
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr + 32));

    return 0;
}
