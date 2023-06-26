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
	int n;				
	int dec;
	int len;
	unsigned int num;
	
	n = va_arg(args, int);
	len = 0;
	dec = 1;
	{if (n < 0)				
	{						
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / dec > 9; )
		dec *= 10;

	for (; dec != 0; )

	{
		len += _write_char('0' + num / dec);
		num %= dec;
		dec /= 10;
	}
Return (len);
}