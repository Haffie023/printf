# include "main.h"

/**
 * handle_char - a function that handles characters.
 *@args: the arguments passed
 * Return: Always 0
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
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

