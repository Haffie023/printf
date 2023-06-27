# include "main.h"

int parser(const char *format, fmt_spec f_list[], va_list args);

/**
 * _printf - function that prints characters
 *@format: format specifier
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int printed_char = 0;
	va_list args;
	fmt_spec formats[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"%", handle_percentage},
		{"d", handle_decimals},
		{"i", handle_decimals},
		{"b", binary_function},
		{NULL, NULL}
	};
	va_start(args, format);
	printed_char = parser(format, formats, args);
	va_end(args);
	return (printed_char);
}

/**
 * parser - A format replacement function
 * @format: The format to be considered
 * @formats: The list of available formats
 * @args: The arguments to be passed
 * Return: The number of arguments printed
*/

int parser(const char *format, fmt_spec formats[], va_list args)
{
	int i = 0, j, printed_char = 0;
	int fmt_len = strlen(format);

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
			if (formats[j].fmt == NULL && format[i + 1] != '\0')
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
	return (printed_char);
}