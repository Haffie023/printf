#include "main.h"

/**
 * handle_unsigned_int - a function that handles unsigned int
 * @args: arguments passed
 * Return: len
*/

int handle_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, int);
    int len = 0, mod, j = 0;
    char *value = malloc(sizeof(char) * BUFFER);

	if (value == NULL)
		return (EXIT_FAILURE);

	if (num == 0)
	{
		_putchar('0');
		len++;
	}

	while (num > 0)
	{
		mod = num % 10;
		value[j++] = 48 + mod;
		num = num / 10;
		len++;
	}

	value[j] = '\0';

	_rev_str(value);

	free(value);

	return (len);
}