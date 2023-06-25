# include "main.h"

/**
 * _printf - function that prints characters
 *@format: format specifier
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, j;
	int fmt_len = strlen(format);
	va_list args;

	fmt_spec formats[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"%", handle_percentage},
		{NULL, NULL}
	};

	va_start(args, format);

	while (i < fmt_len)
	{
		j = 0;

		if (format[i] == '%')
		{
			while (formats[j].fmt != NULL)
			{
				if (formats[j].fmt[0] == format[i + 1])
				{
					formats[j].function(args);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(args);

	return (0);
}
