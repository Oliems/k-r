/*
** Write a program to "fold" long input lines into two or more shorter lines
** after the last non-blank character that occurs before the n-th column of
** input. Make sure your program does something intelligent with very long
** lines, and if there are no blanks or tabs before the specified column.
*/

#include "ch1.h"
#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int main(void) {
  char s[MAXLINE];
  char s_folded[MAXLINE];

  while (get_line(s, MAXLINE) > 0) {
    fold(s, s_folded, LIMIT);
    printf("%s", s_folded);
  }
}
