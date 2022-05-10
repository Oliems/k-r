/*
Counts character in input.
We declare `nc` as a `double` instead of a `long` and we use a `for` loop
instead of a `while`.
*/

#include <stdio.h>

int main(void)
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("%.0f\n", nc);

  return 0;
}
