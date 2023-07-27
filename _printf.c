#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char format, ...)
{
		int i = 0, count = 0;
		int (*f)(va_list);
		va_list args;

		va_start(args, format);
		if (format == NULL || !format[i + 1])
			return (-1);

		while (format[i])
		{
			if (format[i] == '%' && format[i + 1])
			{
				f = get_func(&format[i + 1]);
				if (f == NULL)
				{
					count += _putchar(format[i]);
					count += _putchar(format[i + 1]);
				}
				else
					count += f(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
			i++;
		}
		va_end(args);

		return (count);
}
