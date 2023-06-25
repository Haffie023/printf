# ifndef MAIN_H_
# define MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
# include <string.h>

/**
 * struct fmt_spec - match the conversion specifiers for printf
 * @fmt: the format
 * @function: function of the format specifiers
*/


typedef struct fmt_spec
{
	char *fmt;
	void (*function)(va_list);
} fmt_spec;

int _printf(const char *format, ...);
int _putchar (char x);
void handle_char(va_list args);
void handle_string(va_list args);


# endif
