#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output.
 * @c: The character to print.
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	if (write(1, &c, 1) == -1)
	{
		return (-1);
	}
	return (1);
}
