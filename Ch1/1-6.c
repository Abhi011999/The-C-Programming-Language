#include <stdio.h>

/* verifying expression as 0 or 1 */

main()
{
  int c;
  while((c = getchar()) != EOF)
  {
    printf("%i\n(getchar() != EOF) is ", (c != EOF));
  }
}
