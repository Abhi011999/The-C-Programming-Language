#include <stdio.h>

/* prints histogram of the frequencies of different characters in its input */

main()
{
    int c, i, j, len[27];

    for (i = 1; i < 26; ++i)
        len[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == 'a' || c == 'A')
            ++len[1];
        if (c == 'b' || c == 'B')
            ++len[2];
        if (c == 'c' || c == 'C')
            ++len[3];
        if (c == 'd' || c == 'D')
            ++len[4];
        if (c == 'e' || c == 'E')
            ++len[5];
        if (c == 'f' || c == 'F')
            ++len[6];
        if (c == 'g' || c == 'G')
            ++len[7];
        if (c == 'h' || c == 'H')
            ++len[8];
        if (c == 'i' || c == 'I')
            ++len[9];
        if (c == 'j' || c == 'J')
            ++len[10];
        if (c == 'k' || c == 'K')
            ++len[11];
        if (c == 'l' || c == 'L')
            ++len[12];
        if (c == 'm' || c == 'M')
            ++len[13];
        if (c == 'n' || c == 'N')
            ++len[14];
        if (c == 'o' || c == 'O')
            ++len[15];
        if (c == 'p' || c == 'P')
            ++len[16];
        if (c == 'q' || c == 'Q')
            ++len[17];
        if (c == 'r' || c == 'R')
            ++len[18];
        if (c == 's' || c == 'S')
            ++len[19];
        if (c == 't' || c == 'T')
            ++len[20];
        if (c == 'u' || c == 'U')
            ++len[21];
        if (c == 'v' || c == 'V')
            ++len[22];
        if (c == 'w' || c == 'W')
            ++len[23];
        if (c == 'x' || c == 'X')
            ++len[24];
        if (c == 'y' || c == 'Y')
            ++len[25];
        if (c == 'z' || c == 'Z')
            ++len[26];
        
        if (c == '\n')
        {
            for (i = 1; i < 26; ++i)
            {
                if (len[i] != 0)
                {
                    printf(" | ");
                    for (j = 0; j < len[i]; ++j)
                        printf("=");
                    printf("\n");
                }
            }
        }
    }
}