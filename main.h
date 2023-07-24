#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * struct types - composition of the structure
 *
 * @p : pointer to argument
 * @f: The function associated
 */
typedef struct types
{
	char *p;
	int (*f)(va_list);
} print_f;

int (get_func(const charformat))(va_list);

int _putchar(char c);

int _printf(const char *format, ...);

int print_string(va_list args);

int print_char(va_list args);

int print_pctent(va_list args);

int print_decimal(va_list args);

int print_decimal(va_list args);

#endif

