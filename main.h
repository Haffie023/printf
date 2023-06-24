# ifndef MAIN_H_
# define MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
# include <string.h>

/**
 * struct fmt_spec - dummy text
 * @fmt: dummy text
 * @function: dummy text
*/

typedef struct fmt_spec
{
	char *fmt;
	int (*function)(va_list);
} fmt_spec;

int _printf(const char *format, ...);
int _putchar (char x);
int handle_char(va_list args);


# endif
