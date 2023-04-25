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
	int (*f)(va_list, char);
} func_man;

int _putchar(char c);
int (*spec_func(char fmt))(va_list, char);
int print_char(va_list args, char flag);
int print_string(va_list args, char flag);
int _printf(const char *format, ...);
int print_int(va_list args, char flag);
int print_bin(va_list args, char flag);
int print_oct(va_list args, char flag);
int print_unsigned(va_list args, char flag);
int print_HEX(va_list args, char flag);
int print_hex(va_list args, char flag);
int printX(unsigned int n);
int print_S(va_list args, char flag);
int print_ptr(va_list args, char flag);
int prints(char *s);
#endif
