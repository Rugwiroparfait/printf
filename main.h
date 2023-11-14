#ifndef MAIN_H
#define MAIN_H
#define UNUSED(x) (void)(x)
#include <stdarg.h>

/**
 * struct format - Struct format
 * @spec: The conversion specifier
 * @f: The function associated with the conversion specifier
 */
typedef struct format
{
	char *spec;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
void _putchar(char c);

//for task4
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_number(unsigned int n, int base);
int print_number_hex(unsigned int n, char base);
int print_number(unsigned int n, int base);
int print_string_custom(va_list args);
int print_string_non_printable(va_list args);
int print_pointer(va_list args);
int print_reversed_string(va_list args);
int print_rot13(va_list args);
int handle_flag_characters(va_list args);
int handle_length_modifiers(va_list args);
int handle_field_width(va_list args);
int print_address(void *ptr);
int print_hex_address(uintptr_t address);

#endif

