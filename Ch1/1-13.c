#include <stdio.h>

/* prints histogram of the length of words in its input */

main()
{
    int c, i, len;
    len = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            printf(" | ");
            for (i = 0; i < len; ++i)
                printf("=");
            printf("\n");
            len = 0;
        }
        else
        {
            ++len;
            printf("%c", c);
        }
        
    }
}