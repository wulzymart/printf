#include "main.h"
/**
 * spec_func - returns a function after checking a specifier
 * @fmt: specifier
 * Return: NULL if specifier not found or function pointer
 */
int (*spec_func(char fmt))(va_list args, char flag)
{
	int i;
	func_man spec_func[11] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'o', print_oct},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'p', print_ptr}
	};

	for (i = 0; i < 11; i++)
		if (fmt == spec_func[i].fmt)
			return (spec_func[i].f);
	return (NULL);
}
