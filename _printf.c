// _printf.c

#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Total number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    /* Iterate through the format string and call custom print functions */
    while (*format)
    {
        if (*format == '%' && /* logic to identify custom conversion specifiers */)
        {
            /* Call the corresponding custom print function */
            count += handle_length_modifiers(args); // Example for task 9
            /* Continue with other custom print functions */
        }
        else
        {
            /* Regular character, just print it */
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}

