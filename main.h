#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct flags - flags
 * @space: space ' '
 * @plus: plus '+'
 * @hash: '#'
 */
typedef struct flags
{
	int space;
	int plus;
	int hash;
} flags;
/**
 * struct func_man - Struct op
 *
 * @fmt: formatted string
 * @f: The function associated
 */
typedef struct func_man
{
	char fmt;
	int (*f)(va_list, flags);
} func_man;

int _putchar(char c);
int (*spec_func(char fmt))(va_list, flags);
int print_char(va_list args, flags flags);
int print_string(va_list args, flags flags);
int _printf(const char *format, ...);
int print_int(va_list args, flags flags);
int print_bin(va_list args, flags flags);
int print_oct(va_list args, flags flags);
int print_unsigned(va_list args, flags flags);
int print_HEX(va_list args, flags flags);
int print_hex(va_list args, flags flags);
int printX(unsigned int n);
int print_S(va_list args, flags flags);
int print_ptr(va_list args, flags flags);
int prints(char *s);
#endif
