#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main function */
int _printf(const char *format, ...);

/* handlers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);

/* utils */
int _putchar(char c);

#endif
