#include <stdio.h>

#define MAXLEN 65535 /* maximum length of input line */

/* removes trailing blanks and tabs from each line
    of input and deletes entirely blanck lines */

void main()
{
    int i, c;
    char line[MAXLEN];

    i = 0;

    while(i < MAXLEN-1 && (c = getchar()) != EOF && c != '\n')  /* input characters in array */
    {
        line[i] = c;
        ++i;
    }

    if(c == '\n')
    {
        i = MAXLEN;
        printf("Before - %s|\n", line); /* before truncation, | seperator as proof */

        while(i >= 0)
        {
            if(line[i] == ' ' || line[i] == '\t')
            {
                line[i] = '\0'; /* replacing each character by null character */
            }
            --i;
        }
        printf("After - %s|", line);    /* after truncation, | seperator as proof */
    }
}