#include "main.h"

/**
 * main - Entry point
 * print_alphabet - prints alphabet in small letter
 * Return: Always 0 (succes)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
