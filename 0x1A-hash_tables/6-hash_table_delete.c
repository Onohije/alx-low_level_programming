#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to be deleted.
 *
 * Description: This function deletes a hash table and frees the memory
 * allocated for the hash table structure and its associated hash nodes.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *cur_table = ht;
	hash_node_t *node, *tmp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(cur_table->array);
	free(cur_table);
}
