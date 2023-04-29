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
	int (*f)(va_list, flags, char, int);
} func_man;

int _putchar(char c);
int _isdigit(char c);
int ismod(char c);
int isspec(char c);
int isflag(char c);
int _strlen(char *s);
int (*spec_func(char fmt))(va_list, flags, char, int);
int print_char(va_list args, flags flags, char mod, int width);
int print_string(va_list args, flags flags, char mod, int width);
int _printf(const char *format, ...);
int print_int(va_list args, flags flags, char mod, int width);
int print_bin(va_list args, flags flags, char mod, int width);
char *sprint_o(long n, flags flags);
int printow(char *n, int width);
int print_oct(va_list args, flags flags, char mod, int width);
int print_unsigned(va_list args, flags flags, char mod, int width);
char *sprint_x(long n, flags flags);
char *sprint_X(long n, flags flags);
int print_HEX(va_list args, flags flags, char mod, int width);
int print_hex(va_list args, flags flags, char mod, int width);
int print_S(va_list args, flags flags, char mod, int width);
char *sprint_ptr(long n, flags flags);
int print_ptr(va_list args, flags flags, char mod, int width);
int prints(char *s);
int print_unknown(flags, char);
int printnw(char *n, int width);
int printsw(char *n, int width);
char *sprint_num(unsigned long n);
char *sprint_snum(long n, flags flags);
int printflag(flags flags);
char *num2str(unsigned long n, int b);
int num_len(unsigned long n, int b);
char *num2STR(unsigned long n, int b);
long _abs(long n);
#endif
