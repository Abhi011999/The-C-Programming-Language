#include <stdio.h>

/* replacing each tab by \t, backspace by \b, and backslash by \\ */

main()
{
  int c;

  while((c = getchar()) != EOF)
  {
    if(c == '\t')
      printf("\\t");
    if(c == '\b')
      printf("\\b");
    if(c == '\\')
      printf("\\\\");
    else
    {
      printf("%c", c);
    }
  }
}
