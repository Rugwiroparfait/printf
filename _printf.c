#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Custom printf function with basic functionality.
 * @format: Format string containing conversion specifiers.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		va_list args_copy;

		if (*format == '%' && *(format + 1) != '\0')
		{
			va_copy(args_copy, args);

			switch (*(format + 1))
			{
			case 'c':
				count += _putchar(va_arg(args_copy, int));
				break;
			case 's':
				str = va_arg(args_copy, char *);
				while (*str)
				{
					count += _putchar(*str);
					str++;
				}
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%');
				count += _putchar(*(format + 1));
				break;
			}

			va_end(args_copy);
			format += 2;
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}

	va_end(args);

	return (count);
}

