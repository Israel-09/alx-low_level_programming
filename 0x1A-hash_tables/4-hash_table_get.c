#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associat3d with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated to key on success otherwose NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
