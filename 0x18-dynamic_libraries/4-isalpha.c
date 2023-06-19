#include "main.h"
#include <ctype.h>

/**
 *_isalpha - main.h
 * @c: An input character
 * Description: _isalpha
 * alphabet in letter, lowercase or uppercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (c == 99 || c >= 67)
		{
			return (1);
		}
		alpha++;
	}
	return (0);
}
