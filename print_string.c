#include "main.h"

int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int i = 0;

    if (!str)
        str = "(null)";

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }

    return (i);
}
