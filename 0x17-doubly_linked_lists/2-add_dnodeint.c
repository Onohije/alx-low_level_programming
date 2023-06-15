#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *
 * @head: Pointer to the head of the list
 * @n: The value of the new element
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *d;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	d = *head;

	if (d != NULL)
	{
		while (d->prev != NULL)
			d = d->prev;
	}

	new_element->next = d;

	if (d != NULL)
		d->prev = new_element;

	*head = new_element;

	return (new_element);
}
