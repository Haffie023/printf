# include "main.h"

/**
 * handle_char - a function that handles characters.
 *@args: the arguments passed
 * Return: Always 0
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * handle_string - a function that handles a string
 * @args: arguments passed
 * Return: length of string
*/

int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * handle_percentage - a function that handles percentage
 * @args: argument passed
 * Return: %
 *
*/

int handle_percentage(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * handle_decimals - a function that handles decimals
 * @args: The arguments passed
 * Return: decimal
*/

int handle_decimals(va_list args)
{
	int len = 0, mod, j = 0;
	long int num = va_arg(args, int);
	char *value = malloc(sizeof(char) * (BUFFER));

	if (value == NULL)
		return (EXIT_FAILURE);

	if (num == 0)
	{
		_putchar('0');
		len++;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -(num);
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
