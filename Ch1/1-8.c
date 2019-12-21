#include <stdio.h>

/* counting blanks, tabs and newlines */

main()
{
  int c, blanks, tabs, nl;
  blanks = 0;
  tabs = 0;
  nl = 0;

  while ((c = getchar()) != EOF)
  {
    if(c == ' ')
      ++blanks;
    if(c == '\t')
      ++tabs;
    if(c == '\n')
      ++nl;
    if(c == '\\')   /* enter \ to break the loop */
      break;
  }
  printf("%s%i\n", "Blanks - ", blanks);
  printf("%s%i\n", "Tabs - ", tabs);
  printf("%s%i\n", "Newlines - ", nl);
}
