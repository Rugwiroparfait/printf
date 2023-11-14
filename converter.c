//task4
#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

    /* Implement logic to print unsigned integer 'n' */
	 count += print_number(n, 10);

	return count;
}

/**
 * print_number - Prints a number in a specified base
 * @n: The number to be printed
 * @base: The base of the number (e.g., 10 for decimal)
 * Return: Number of characters printed
 */

int print_number(unsigned int n, int base)
{
	/* Implement logic to print the number 'n' in the specified base */
	int count = 0;

	/* Example: Print the number in decimal (base 10) */
	if (base == 10)
	{
	if (n >= 10)
	{
	count += print_number(n / 10, base);
	count += _putchar((n % 10) + '0');
	}
	else
        {
	count += _putchar(n + '0');
        }
    }
    /* Add logic for other bases if needed */

    return count;
}

/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	/* Implement logic to print octal representation of 'n' */

	return count;
}

/**
 * print_hex - Prints an unsigned integer in hexadecimal format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

    	/* Implement logic to print hexadecimal representation of 'n' */

	return count;
}

/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

    /* Implement logic to print unsigned integer 'n' in octal format */
	count += print_number(n, 8);

	return count;
}

/**
 * print_hex_lower - Prints an unsigned integer in lowercase hexadecimal format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

    /* Implement logic to print unsigned integer 'n' in lowercase hexadecimal format */
	count += print_number_hex(n, 'a');

	return count;
}

/**
 * print_hex_upper - Prints an unsigned integer in uppercase hexadecimal format
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

    /* Implement logic to print unsigned integer 'n' in uppercase hexadecimal format */
	count += print_number_hex(n, 'A');

	return count;
}

/* Helper function for hexadecimal printing */
int print_number_hex(unsigned int n, char base)
{
    /* Implement logic to print the number 'n' in hexadecimal format */
	int count = 0;

    /* Example: Print the number in hexadecimal */
	if (n >= 16)
	{
	count += print_number_hex(n / 16, base);
	count += _putchar((n % 16 < 10) ? (n % 16) + '0' : (n % 16 - 10) + base);
	}
	else
	{
	count += _putchar((n < 10) ? n + '0' : n - 10 + base);
	}

	return count;
	}

