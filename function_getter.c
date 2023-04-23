#include "main.h"
/**
 * spec_func - returns a function after checking a specifier
 * @fmt: specifier
 * Return: NULL if specifier not found or function pointer
 */
int (*spec_func(char fmt))(va_list)
{
	int i;
	func_man spec_func[3] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_pcent},
	};
	for (i = 0; i < 3; i++)
		if (fmt == spec_func[i].fmt)
			return (spec_func[i].f);
	return (NULL);
}
