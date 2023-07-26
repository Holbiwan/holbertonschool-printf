#include "main.h"
/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */




int (*get_func(const char *format))(va_list)
{
	int i;
	args_type p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};

	for (i = 0; p[i].p; i++)
	{
		if (*format == *(p[i].p))
			return (p[i].f);
	}
	return (NULL);
}
