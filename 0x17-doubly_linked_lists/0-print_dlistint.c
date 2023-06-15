#include "lists.h"

/**
 * print_dlistint - Prints the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int print;

	print = 0;

	if (h == NULL)
		return (print);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		print++;
		h = h->next;
	}

	return (print);
}
