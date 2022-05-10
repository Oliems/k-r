/*
Counts lines, words and characters, assuming a word is any sequence of characters
that does not contain a blank, tab or newline.
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == '\n') {
      ++nl;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    }

    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("Characters: %d\nWords: %d\nLines: %d\n", nc, nw, nl);

  return 0;
}
