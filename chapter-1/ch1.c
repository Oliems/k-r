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
void copy(char from[], char to[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

/* remove trailing blanks and tabs from a character string and return length */
void rm_blank(char from[], char to[])
{
  int i, j, k;

  i = j = k = 0;

  /* remove empty lines */
  if (from[0] == '\n') {
    to[0] = '\0';
    return;
  }

  for (i = 0; from[i] != '\n'; i++) {
    ;
  }

  /* back off from '\n' */
  while (i >= 0 && (from[i] == ' ' || from[i] == '\t')) {
    i--;
  }

  k = i;

  for (i = 0, j = 0; j != k; i++, j++) {
    to[j] = from[i];
  }

  to[j] = '\n';
  to[j + 1] = '\0';
}

/* reverse the characters in 'from' into 'to'; assume to is big enough */
void reverse(char from[], char to[])
{
  int i, j;

  i = j = 0;

  if (from[0] == '\n') {
    to[0] = '\n';
    to[1] = '\0';
    return;
  }

  for (i = 0; from[i] != '\0'; i++) {
    ;
  }

  for (i = i - 2; i >= 0; i--, j++) {
    to[j] = from[i];
  }

  to[j] = '\n';
  to[j + 1] = '\0';
}

/* fold the line if it is longer than the limit */
void fold(char from[], char to[], int limit)
{
  int i, j;

  i = j = 0;

  while ((to[i] = from[i]) != '\0') {
    i++;
    if (i % limit == 0) {
      j = i;
      while (i > 0 && from[i] != ' ' && from[i] != '\t') {
        i--;
      }
      if (i != 0) {
        to[i] = '\n';
      }
      i = j;
    }
  }
}

void rm_com(char from[], char to[])
{
  extern int comment;

  int i, j;
  i = j = 0;
  comment = OUT;

  while ((from[i] != '\0') && (to[j] != '\0')) {
    // printf("comment : %d\n", comment);
    for (; (comment == OUT) && ((from[i] != '/') && (from[i + 1] != '*')); i++, j++) {
      to[j] = from[i];
    }
    comment = IN;
    if ((comment == IN) && ((from[i] == '*') && (from[i] == '/'))) {
      comment = OUT;
    }
    if ((comment == IN) && (from[i] == '\0')) {
      to[j] = '\n';
      to[j + 1] = '\0';
    }
    i++;
  }
}
