#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct format - Struct format
 * @spec: The conversion specifier
 * @f: The function associated with the conversion specifier
 */
typedef struct format
{
	char *spec;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
void _putchar(char c);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_string_custom(va_list args);
int print_string_non_printable(va_list args);
int print_pointer(va_list args);
#endif

