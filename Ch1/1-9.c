#include <stdio.h>

/* replacing one or more blanks by a single blank */

main()
{
  int c, blanks;
  blanks = 0;

  while ((c = getchar()) != EOF)
  {
    if(c == ' ')
    {
      if(blanks < 1)
        printf("%c", c);
      ++blanks;
    }
    else
    {
      printf("%c", c);
      blanks = 0;
    }
  }
}
