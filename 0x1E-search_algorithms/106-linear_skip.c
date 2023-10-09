#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: This function performs a linear skip search for the 'value'
 *              in a sorted singly linked list. It prints the nodes being
 *              compared during the search process. The jump step is determined
 *              by the square root of the list size.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
