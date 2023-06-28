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
	int num = va_arg(args, int);
	char *value = malloc(sizeof(char) * BUFFER);

	if (value == NULL)
		return (EXIT_FAILURE);

	if (num == 0)
	{
		_putchar('0');
		len++;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
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
 * handle_S_string - handles string
 * @args: arguments passed
 * Return: i
*/

int handle_S_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	for (i = 0; *str != '\0'; i++)
	{
		if ((int)str[i] < 32 || (int)str[i] >= 127)
		{
			if ((int)str[i] < 9)
			{
				_putchar('0');
				_putchar(48 + (int)str[i]);
			}
			else if ((int)str[i] > 9 && (int)str[i] < 16)
			{
				_putchar('0');
				_putchar(87 + (int)str[i]);
			}
			else if ((int)str[i] > 16 && (int)str[i] < 25)
			{
				_putchar('1');
				_putchar(48 + (int)str[i]);
			}
			else if ((int)str[i] > 25 && (int)str[i] < 32)
			{
				_putchar('1');
				_putchar(87 + (int)str[i]);
			}
			else if ((int)str[i] >= 128)
			{
				_putchar('8');
				_putchar(48 + (int)str[i]);
			}
		}
		else
			_putchar(str[i]);
	}

	return (i);
}