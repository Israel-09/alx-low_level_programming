#include "hash_tables.h"

/**
 * hash_table_set - add a new element to the hash table
 * @key: the key
 * @ht: the hash table
 * @value: value associated with the key.
 *
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || !key)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
