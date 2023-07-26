#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct argx - composition of the structure
 *
 * @p : pointer to argument
 * @f: The function associated
 */
typedef struct argx
{
	char *p;
	int (*f)(va_list args);
} args_type;

int (*get_func(const char *format))(va_list);

int _putchar(char c);

int _printf(const char *format, ...);

int print_str(va_list args);

int print_char(va_list args);

int print_pct(va_list args);

int print_dec(va_list args);


#endif

