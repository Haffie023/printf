# include "main.h"

/**
 * _putchar - A function to print out ASCII
 * characters to the stdout
 * @x: The character to be printed
 * Return: The value of the character to be written
*/

int _putchar (char x)
{
	return (write(1, &x, 1));
}
