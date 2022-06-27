/*
** Write a program to remove all comments from a C program. Don't forget to
** handle quoted strings and and character constants properly. C comments do not
** nest.
*/

#include "ch1.h"
#include <stdio.h>

#define MAXLINE 1000

int main(void) {
  char s[MAXLINE];
  char s_no_com[MAXLINE];

  while (get_line(s, MAXLINE) > 0) {
    rm_com(s, s_no_com);
    printf("%s", s_no_com);
  }
}
