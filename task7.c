#include "main.h"

/**
 * print_pointer - Prints a pointer address
 * @args: The argument list
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	int count = 0;

    /* Implement logic to print pointer address */
	count += _putchar('0');
	count += _putchar('x');
	count += print_address(ptr); // Helper function to print the hexadecimal address

	return count;
}

/**
 * print_address - Prints the hexadecimal representation of a pointer address
 * @ptr: The pointer whose address needs to be printed
 * Return: Number of characters printed
 */
int print_address(void *ptr)
{
	uintptr_t address = (uintptr_t)ptr;
	int count = 0;

	if (address == 0)
	{
	count += _putchar('0');
	}
	else
	{
	count += print_hex_address(address);
	}

	return count;
}

/**
 * print_hex_address - Prints the hexadecimal representation of an address
 * @address: The address to be printed
 * Return: Number of characters printed
 */
int print_hex_address(uintptr_t address)
{
	int count = 0;

    /* Implement logic to print the address in hexadecimal format */
    // For simplicity, assuming a 64-bit system
	for (int i = (sizeof(uintptr_t) * 8) - 4; i >= 0; i -= 4)
	{
	int digit = (address >> i) & 0xF;
	count += _putchar((digit < 10) ? digit + '0' : digit - 10 + 'a');
	}

	return count;
	}



