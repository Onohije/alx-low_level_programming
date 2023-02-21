#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char p;

	while (i < 10)
	{
		p = 'a';
		while (p < 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		i++;
	}
}
