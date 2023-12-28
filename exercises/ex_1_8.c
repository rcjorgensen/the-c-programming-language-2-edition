#include <stdio.h>

main() 
{
    int c, nb;

    nb = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        }
        if (c == '\t') {
            ++nb;
        }
        if (c == '\n') {
            ++nb;
        }
    }

    printf("%d\n", nb);
}

