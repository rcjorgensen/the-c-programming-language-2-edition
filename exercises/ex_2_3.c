#include <stdio.h>

int main()
{
    int result = htoi("4f8ace01");
    printf("%d\n", result);
}

/* converts string of hexidecimal digits (including optional 0x or 0X) to an int */
int htoi(char s[])
{
    int i, j, n;

    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            j = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            j = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            j = s[i] - 'A' + 10;
        }

        n = 16 * n + j;
    }

    return n;
}
