#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 16; num++)
	{
		ch = num < 10 ? num + '0' : num -10 + 'a';
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
