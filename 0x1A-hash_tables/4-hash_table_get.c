#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in the hash table.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	cur_node = ht->array[index];
	while (cur_node && strcmp(cur_node->key, key) != 0)
		cur_node = cur_node->next;

	return ((cur_node == NULL) ? NULL : cur_node->value);
}
