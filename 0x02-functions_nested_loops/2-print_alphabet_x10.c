#include "main.h"
/**
 * print_alphabet_x10 - print lowercase
 *
 */

void print_alphabet_x10(void)
{
	int a = 1;
	char b;

	while (a <= 10)
	{
		b = 'a';
		while (b <= 'z')
		{
		_putchar(b);
		b++;
		}
		_putchar('\n');
		a++;
	}
}

