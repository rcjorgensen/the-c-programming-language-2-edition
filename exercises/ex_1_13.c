#include <stdio.h>

#define MAX     100     /* the maximum allowed word length */
#define IN      1       /* inside a word */
#define OUT     0       /* outside a word */

main() 
{
    int c, i, wl, state;
    int lword[MAX];

    for (i = 0; i < MAX; ++i) {
        lword[i] = 0;
    }

    state = OUT;

    c = wl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }

    }

}
