#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: This function prints the key/value pairs of a hash table
 * in the order they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur_node;
	unsigned long int index;
	unsigned char comaa_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comaa_flag == 1)
				printf(", ");

			cur_node = ht->array[index];
			while (cur_node != NULL)
			{
				printf("'%s': '%s'", cur_node->key, cur_node->value);
				cur_node = cur_node->next;
				if (cur_node != NULL)
					printf(", ");
			}
			comaa_flag = 1;
		}
	}
	printf("}\n");
}
