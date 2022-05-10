/* Print the longest line in the input */

#include "../ch1.h"
#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
  int length; /* current line length */
  int max_length; /* maximum length seen so far */
  char current_line[MAXLINE]; /* current line input */
  char longest_line[MAXLINE]; /* longest line saved here */

  max_length = 0;
  while ((length = get_line(current_line, MAXLINE)) > 0) {
    if (length > max_length) {
      max_length = length;
      copy(longest_line, current_line);
    }
  }
  if (max_length > 0) {
    printf("%s", longest_line);
  }

  return 0;
}
