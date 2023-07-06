#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @struct hash_node_s - Node of a hash table
 * @key: The key associated with the value
 * This key is unique within the hash table
 * @value: The value associated with the key
 * @next: A pointer to the next node in the linked list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * @struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list
 * This is done to implement a chaining collision handling mechanism
 * in the HashTable, where multiple elements with different keys can be
 * stored in the same cell by forming a linked list of nodes.
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * @struct shash_node_s - Node of a sorted hash table
 * @key: The key associated with the value
 * This key is unique within the hash table
 * @value: The value corresponding to the key
 * @next: A pointer to the next node in the linked list
 * @sprev: A pointer to the previous node in the sorted linked list
 * @snext: A pointer to the next node in the sorted linked list
 * The sorted linked list maintains the order of nodes based on their keys.
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * @struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list
 * This is done to implement a chaining collision handling mechanism
 * @shead: A pointer to the first node in the sorted linked list
 * @stail: A pointer to the last node in the sorted linked list
 * The sorted linked list maintains the order of nodes based on their keys.
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
