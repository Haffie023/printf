# include "main.h"

/**
 * _putchar - A function to print out ASCII
 * characters to the stdout
 * @x: The character to be printed
 * Return: The value of the character to be written
*/

int _putchar (char x)
{
	return (write(STDOUT_FILENO, &x, 1));
}

/**
 * _err_putchar - A function that is used to
 * print characters to the stderr
 * @x: The digit to be printed
 * Return: The number of characters written
*/

int _err_putchar(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(STDERR_FILENO, &str[i], 1);
		i++;
	}

	return (i);
}

/**
 * _rev_str - A function to reverse strings
 * @str: The string to be reversed
*/

void _rev_str(char *str)
{
	if (*str != '\0')
	{
		_rev_str(str + 1);
		_putchar(*str);
	}
}
