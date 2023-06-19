#include "main.h"

/**
 * _abs - check the code
 * Description: _abs
 * compute the absolute value of an integer value a
 * Return: Always 0
 * @a: An input character
 */
int _abs(int a)
{

	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
	return (0);
}
