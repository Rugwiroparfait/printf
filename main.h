#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Macro to mark variables as intentionally unused */
#define UNUSED(x) (void)(x)

/* Buffer size for handling characters and strings */
#define BUFF_SIZE 1024

/* Flags for controlling formatting behavior */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Sizes for handling length modifiers */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Structure representing a format specifier and its handler function.
 *
 * @fmt: The format specifier character.
 * @fn: The function associated with the format specifier.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/* Typedef for a format specifier structure */
typedef struct fmt fmt_t;

/* Main printf function prototype */
int _printf(const char *format, ...);

/****************** FUNCTION PROTOTYPES ******************/

/* Functions to print chars and strings */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Function to print non-printable characters */
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Functions for special string handling */
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Utility functions for formatting and output */
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

/****************** UTILITY FUNCTIONS ******************/

/* Check if a character is printable */
int is_printable(char);

/* Append hexadecimal code to a buffer */
int append_hexa_code(char, char[], int);

/* Check if a character is a digit */
int is_digit(char);

/* Convert a number to the specified size */
long int convert_size_number(long int num, int size);

/* Convert an unsigned number to the specified size */
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */

