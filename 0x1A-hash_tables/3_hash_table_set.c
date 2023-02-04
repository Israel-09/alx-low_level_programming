#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to a hash table
 * @ht: the hash table
 * @key: The key to the list
 * @value: the data to be stored in the key.
 *
 * Return: 1 if it is successful. Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t new_node;

	index = key_index(key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = stdrup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}
