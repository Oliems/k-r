/*
Write a function 'reverse(s)' that reverses the character string s. Use it to write a program
that reverses its input a line at a time.
*/

#include "../ch1.h"
#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
    char s[MAXLINE];
    char s_reversed[MAXLINE];

    while (get_line(s, MAXLINE) > 0) {
        reverse(s, s_reversed);
        printf("%s", s_reversed);
    }
}
