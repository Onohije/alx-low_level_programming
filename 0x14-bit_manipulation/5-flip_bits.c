#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k = 63, number_of = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

while (k >= 0)
{
current = exclusive >> k;
if (current & 1)
number_of++;

k--;
}

return (number_of);
}
