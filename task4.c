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

/* Add other print functions for u, o, x, X */


