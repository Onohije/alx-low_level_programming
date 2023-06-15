#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if deletion is successful, -1 if it fails.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_node;
	dlistint_t *pre_node;
	unsigned int count;

	cur_node = *head;

	if (cur_node != NULL)
		while (cur_node->prev != NULL)
			cur_node = cur_node->prev;

	count = 0;

	while (cur_node != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = cur_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				pre_node->next = cur_node->next;

				if (cur_node->next != NULL)
					cur_node->next->prev = pre_node;
			}

			free(cur_node);
			return (1);
		}
		pre_node = pre_node;
		cur_node = cur_node->next;
		count++;
	}

	return (-1);
}
