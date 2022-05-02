/*
Copies the input to the output one character at a time.
On macOS you can use `CONTROL + D` to send the EOF signal to the terminal.
*/

#include <stdio.h>

int main(void)
{
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
