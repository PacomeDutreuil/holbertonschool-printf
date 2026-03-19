#include "main.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int print_number(long n)
{
    int count = 0;

    if (n / 10)
        count += print_number(n / 10);

    count += _putchar((n % 10) + '0');

    return (count);
}
