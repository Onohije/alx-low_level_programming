#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Description: This function takes a string as input and
 * calculates its hash value using the djb2 algorithm.
 *
 * Return: The calculated hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int k;

	hash = 5381;
	while ((k = *str++))
		hash = ((hash << 5) + hash) + k; /* hash * 33 + k */

	return (hash);
}
