#include "main.h"

int print_int(va_list args)
{
    long n;
    int count = 0;

    n = va_arg(args, int);  /* cast en long */

    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    count += print_number(n);

    return (count);
}
