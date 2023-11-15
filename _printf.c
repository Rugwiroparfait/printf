/* _printf.c */

#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int myputchar(char c)
{
    return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *str;

    if (format == NULL)
        return -1;

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
                count += myputchar(va_arg(args_copy, int));
                break;
            case 's':
                str = va_arg(args_copy, char *);
                while (*str)
                {
                    count += myputchar(*str);
                    str++;
                }
                break;
            case '%':
                count += myputchar('%');
                break;
            default:
                count += myputchar('%');
                count += myputchar(*(format + 1));
                break;
            }

            va_end(args_copy);
            format += 2;
        }
        else
        {
            count += myputchar(*format);
            format++;
        }
    }

    va_end(args);

    return count;
}
