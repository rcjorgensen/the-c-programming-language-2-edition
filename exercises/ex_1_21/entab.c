#include <stdio.h>

#define MAXSIZE 1000
#define TABSTOPS 4

/* replaces spaces with tabs */
int main()
{
    char buffer[MAXSIZE];
    int i, j, c;
    
    i=0;
    while (i < MAXSIZE - 1 && (c = getchar()) != EOF) {
        if (c == ' ') {
            j=0;
            while (c == ' ') {
                ++j;
                c = getchar();
            }
            /* TODO: calculate and insert proper number of tabs and spaces */
        } 

        buffer[i] = c;
        ++i;
    }

    buffer[i] = '\0';

    printf("%s", buffer);

    return 0;
}

