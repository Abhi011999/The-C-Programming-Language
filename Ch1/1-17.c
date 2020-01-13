#include <stdio.h>

#define MAXLINE 65535   /* maximum input line size of 65,535 characters */
#define MINLINE 80      /* minimum number of characters to be printed */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* prints all input lines above 80 characters */

void main()
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;

    while((len = getline(line, MAXLINE)) > 0)
        if(len > max)
        {
            max = len;
            copy(longest, line);

            if(max > MINLINE)   /* check for minimum length */
                printf("%s", longest);
        }
}

/* getline: read a line into s, return length */

int getline(char s[], int lim)
{
    int c, i;

    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to', assuming 'to' is big enough */

void copy(char to[] , char from[])
{
    int i;

    i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}