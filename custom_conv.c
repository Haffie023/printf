#include "main.h"

/**
 * binary_function - a function that handles binary
 * @args: arguments passed
 * Return: Binary
*/

int binary_function(va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char *value = malloc(sizeof(char) * 33);

	if (value == NULL)
		return (EXIT_FAILURE);

	if (num == 0)
	{
		value[j++] = 48;
		i++;
	}

	while (num != 0)
	{
		value[j++] = '0' + num % 2;
		num = num / 2;
		i++;
	}
	value[j] = '\0';

	_rev_str(value);
	free(value);

	return (i);
}

/**
 * handle_S_string - A function that prints out
 * hexadecimal string in place of a non printable character
 * @args: The arguments/the string to be passed
 *
 * Return: The number of characters printed
*/

int handle_S_string(va_list args)
{
	char *str = va_arg(args, char*);
	size_t i = 0;

	if (str == NULL)
		str[i] = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar(92);
			_putchar(120);
			if (str[i] < 16)
			{
				_putchar(48);
				_printf("%X", str[i]);
			}
			else
				_printf("%X", str[i]);

		}
		else
			_putchar(str[i]);
	}

	return (i);
}
