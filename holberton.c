#include <stddef.h>
#include "main.h"
#include "holberton.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i, j;

	format_t specs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{NULL, NULL}
	};

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			for (j = 0; specs[j].spec != NULL; j++)
			{
				if (format[i] == *specs[j].spec)
					count += specs[j].f(args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}

