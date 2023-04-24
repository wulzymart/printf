#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct func_man - Struct op
 *
 * @fmt: formatted string
 * @f: The function associated
 */
typedef struct func_man
{
	char fmt;
	int (*f)(va_list);
} func_man;

int _putchar(char c);
int (*spec_func(char fmt))(va_list);
int print_char(va_list);
int print_string(va_list);
int  print_pcent(va_list);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_bin(va_list args);
int print_oct(va_list args);
#endif
