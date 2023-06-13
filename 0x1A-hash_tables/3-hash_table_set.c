#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table.
 * @key: key holds the value
 * @value: is the value associated to a key
 *
 * Returns: 1 on success. Otherwise return 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *element;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	element = malloc(sizeof(hash_node_t *));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (!(ht->array[index]))
	{
		element->next = NULL;
		ht->array[index] = element;
	}

	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}
	return (1);
}
