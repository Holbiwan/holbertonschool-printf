#include "main.h"

/**
 * print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}



/**
 * print_str - prints string
 * @args: arguments
 * Return: string
 */

int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}


/**
 * print_pct - prints character "%"
 * @args : arguments
 * Return: character "%"
 */

int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 * print_dec - prints decimal
 * @args: the argument decimal
 *
 * Return: counter
 */

int print_dec(va_list args)
{
	int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;
	value = va_arg(args, int);

	if (value < 0)
	{
		len = len + _putchar('-');
		abs = value * (-1);
	}
	else
		abs = value;

	a = abs;
	while (a > 9)
	{
		a = a / 10;
		countn = countn * 10;
	}
	while (countn >= 1)
	{
		len = len + _putchar(((abs / countn) % 10) + '0');
		countn = countn / 10;
	}

	return (len);
}
