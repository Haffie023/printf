# include "main.h"

/**
 * _printf - function that prints characters
 *@format: format specifier
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, j, printed_char = 0;
	int fmt_len = strlen(format);
	va_list args;
	fmt_spec formats[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"%", handle_percentage},
		{"d", handle_decimals},
		{NULL, NULL}
	};
	va_start(args, format);
	for (i = 0; i < fmt_len; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			while (formats[j].fmt != NULL)
			{
				if (format[i + 1] == formats[j].fmt[0])
				{
					printed_char += formats[j].function(args);
					i++;
					break;
				}
				j++;
			}
			if (formats[j].fmt == NULL)
			{
				_putchar('%');
				printed_char++;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		}
	}
	va_end(args);
	return (printed_char);
}
