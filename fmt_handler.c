# include "main.h"

/**
 * handle_char - a function that handles characters.
 *@args: the arguments passed
 * Return: Always 0
 */

void handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}

/**
 * handle_string - a function that handles a string
 * @args: arguments passed
 * Return: length of string
*/

void handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
/**
 * handle_percentage - a function that handles percentage
 * @args: argument passed
 * Return: %
 *
*/
void handle_percentage(__attribute__((unused)) va_list args)
{
	_putchar('%');
}
