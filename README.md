# 0x11. C - printf

This project implements a simplified version of the `printf` function in the C programming language. The goal is to handle various conversion specifiers and custom conversions, providing a subset of the functionality found in the standard `printf` function.

## Tasks

1. **Basic printf Functionality**
   - Write a function that produces output according to a format.

2. **Handle Integer Specifiers (d, i)**
   - Implement handling for the 'd' and 'i' conversion specifiers without considering flag characters, field width, precision, or length modifiers.

3. **Custom Binary Conversion (b)**
   - Implement a custom conversion specifier 'b' where the unsigned int argument is converted to binary.

4. **Handle Unsigned Integer Specifiers (u, o, x, X)**
   - Implement handling for the 'u', 'o', 'x', and 'X' conversion specifiers without considering flag characters, field width, precision, or length modifiers.

5. **Use a Local Buffer**
   - Optimize by using a local buffer of 1024 chars to minimize calls to the `write` function.

6. **Handle Pointer Specifier (p)**
   - Implement handling for the 'p' conversion specifier without considering flag characters, field width, precision, or length modifiers.

7. **Handle Length Modifiers (l, h)**
   - Implement handling for the 'l' and 'h' length modifiers for non-custom conversion specifiers 'd', 'i', 'u', 'o', 'x', 'X'.

8. **Handle Field Width**
   - Implement handling for the field width for non-custom conversion specifiers.

9. **Handle Precision**
   - Implement handling for the precision for non-custom conversion specifiers.

10. **Handle '0' Flag Character**
    - Implement handling for the '0' flag character for non-custom conversion specifiers.

11. **Custom Reversed String (r)**
    - Implement a custom conversion specifier 'r' that prints the reversed string.

12. **Custom Rot13 String (R)**
    - Implement a custom conversion specifier 'R' that prints the rot13'ed string.

## Usage

To use this printf implementation in your C program, include the provided `holberton.h` header file and compile the `printf.c` file along with your source files.

```c
#include "holberton.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}
```

## Author

NSANZIMANA RUGWIRO Dominique Parfait
