
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

/**
 * octal_function- a function that handles octal
 * @args: arguments passed
 * Return: octal
*/

int octal_function(va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char *value = malloc(sizeof(char) * BUFFER);

	if (value == NULL)
		return (EXIT_FAILURE);

	while (num != 0)
	{
		value[j++] = '0' + num % 8;
		num = num / 8;
		i++;
	}
	value[j] = '\0';

	_rev_str(value);
	free(value);

	return (i);
}

/**
 * hexa_function- a function that handles hexadecimal
 * @args: arguments passed
 * Return: hexadecimal
*/

int hexa_function(va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char *value = malloc(sizeof(char) * BUFFER);

	if (value == NULL)
		return (EXIT_FAILURE);

	while (num != 0)
	{
		if ((num % 16) > 9)
			value[j++] = 87 + num % 16;
		else
			value[j++] = '0' + num % 16;
		num = num / 16;
		i++;
	}
	value[j] = '\0';

	_rev_str(value);
	free(value);

	return (i);
}

/**
 * heXa_function- a function that handles heXadecimal integer
 * @args: arguments passed
 * Return: heXadecimal
*/

int heXa_function(va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char *value = malloc(sizeof(char) * BUFFER);

	if (value == NULL)
		return (EXIT_FAILURE);

	while (num != 0)
	{
		if ((num % 16) > 9)
			value[j++] = 55 + num % 16;
		else
			value[j++] = '0' + num % 16;
		num = num / 16;
		i++;
	}
	value[j] = '\0';

	_rev_str(value);
	free(value);

	return (i);
}