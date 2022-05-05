#include "ch1.h"
#include <stdio.h>

/* read a line into s, return length */
int get_line(char s[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

/* remove trailing blanks and tabs from a character string and return length */
int rm_blank(char s[])
{
    int i;

    i = 0;

    /* find newline character */
    while (s[i] != '\n') {
        ++i;
    }

    /* back off from '\n' */
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {
        --i;
    }

    if (i >= 0) /* is it a nonblank line ? */
    {
        ++i;
        s[i] = '\n'; /* put \n back */
        ++i;
        s[i] = '\0'; /* end the string */
    }
    return i;
}

void reverse(char s[], char s_reversed[])
{
    int i, k;

    i = k = 0;

    while (s[i] != '\n') {
        ++i;
    }

    i--;

    while (i > 0) {
        s[i--] = s_reversed[k++];
    }
    s_reversed[k++] = '\n';
    s_reversed[k++] = '\0';
}
