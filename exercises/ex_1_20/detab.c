#include <stdio.h>

#define BUFFERSIZE 10000
#define TABSTOPS 4

/* replaces tabs with spaces */
int main()
{
    char buffer[BUFFERSIZE];    /* buffer to store output */
    int c, i, j, k;

    i = 0;
    while (i < BUFFERSIZE - 1 && (c = getchar()) != EOF) {
        if (c == '\t') {
            k = TABSTOPS - i % TABSTOPS;    /* number of spaces needed to get to next tabstop */
            for (j = 0; j < k && i < BUFFERSIZE - 1; ++j) {
                buffer[i] = ' ';
                ++i;
            }
        } else {
            buffer[i] = c;
            ++i;
        }
    }

    buffer[i] = '\0';

    printf("%s", buffer);

    return 0;
}
