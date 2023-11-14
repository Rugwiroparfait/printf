#include <stddef.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - file descriptions
 * @c : character as an argment
 *
 * Return: Nothing 
 */

void _putchar(char c)
{
    write(1, &c, 1);
}


/**
 * print_char - Prints a character
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - Prints a string
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/* Implement print_int and print_binary functions similarly */

/**
 * print_int - Prints an integer
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;

    /* Implement logic to print integer 'n' */

    return count;
}

/**
 * print_binary - Prints an integer in binary format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    /* Implement logic to print binary representation of 'num' */

    return count;
}
