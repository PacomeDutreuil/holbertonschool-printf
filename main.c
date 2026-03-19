#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    printf("----- BASIC TEST -----\n");
    len1 = _printf("Hello World!\n");
    len2 = printf("Hello World!\n");
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- STRING TEST -----\n");
    len1 = _printf("String: %s\n", "Holberton");
    len2 = printf("String: %s\n", "Holberton");
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- CHAR TEST -----\n");
    len1 = _printf("Char: %c\n", 'A');
    len2 = printf("Char: %c\n", 'A');
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- PERCENT TEST -----\n");
    len1 = _printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- NULL STRING TEST -----\n");
    len1 = _printf("NULL string: %s\n", NULL);
    len2 = printf("NULL string: %s\n", NULL);
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- UNKNOWN SPECIFIER TEST -----\n");
    len1 = _printf("%!\n");
    len2 = printf("%!\n");
    printf("Len: %d / %d\n\n", len1, len2);

    printf("----- EDGE CASES -----\n");
    len1 = _printf("%%\n");
    len2 = printf("%%\n");
    printf("Len: %d / %d\n\n", len1, len2);

    len1 = _printf("");
    len2 = printf("");
    printf("Len empty: %d / %d\n\n", len1, len2);

    return (0);
}
