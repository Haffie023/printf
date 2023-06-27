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
