#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function with basic functionality.
 * @format: Format string containing conversion specifiers.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
	return (-1);

	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%' && *(format + 1) != '\0')
	{
	switch (*(format + 1))
	{
	case 'c':
	count += write(1, va_arg(args, int), 1);
	break;
	case 's':
	count += write(1, va_arg(args, char *), 1);
	break;
	case '%':
	count += write(1, "%", 1);
	break;
	default:
	count += write(1, "%", 1);
	count += write(1, format + 1, 1);
	break;
	}
	format += 2;
	}
	else
	{
	count += write(1, format, 1);
	format++;
	}
	}

	va_end(args);

	return (count);
}


