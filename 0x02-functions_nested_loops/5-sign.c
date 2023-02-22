#include "main.h"

/**
 * print_sign - check the code
 * Description: print_sign
 * function that prints the sign of a number
 * Return: 1, 0 or -1
 * @n: An input character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	_putchar ('\n');
	return (0);
}
