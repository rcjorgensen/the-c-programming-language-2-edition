#include <stdio.h>

int main()
{
    /* int result = htoi("0x4f8ace01"); */
    int result = htoi("0xAa");
    printf("%d\n", result);
}

/* converts string of hexidecimal digits (including optional 0x or 0X) to an int */
int htoi(char s[])
{
    int i, j, n;

    i = 0;
    n = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    for (; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            j = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            j = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            j = s[i] - 'A' + 10;
        }

        n = 16 * n + j;
    }

    return n;
}
