#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main */
int _printf(const char *format, ...);

/* handlers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);

/* utils */
int _putchar(char c);
int print_number(long n);

#endif
