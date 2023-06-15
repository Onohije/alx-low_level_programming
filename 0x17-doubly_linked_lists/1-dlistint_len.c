#include "lists.h"

/**
 * dlistint_len - This returns number of elements in a double linked list
 *
 * @h: Head of list
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int result;

	result = 0;

	if (h == NULL)
		return (result);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		result++;
		h = h->next;
	}

	return (result);
}
