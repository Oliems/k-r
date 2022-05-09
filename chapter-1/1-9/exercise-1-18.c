/*
Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/

#include "../ch1.h"
#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
    char s[MAXLINE];
    char s_no_blank[MAXLINE];

    while (get_line(s, MAXLINE) > 0) {
        rm_blank(s, s_no_blank);
        printf("%s", s_no_blank);
    }
}
