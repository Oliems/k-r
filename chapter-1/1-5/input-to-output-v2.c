/*
Copies the input to the output one character at a time.
This is a more concise version of the program using the fact that in any context
where it is permissible to use the value of a variable of some type, you can use
a more complicated expression of that type.
*/

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
