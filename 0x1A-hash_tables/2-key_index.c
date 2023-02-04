#include "hash_tables_h"

/**
 * key_index - it creates the index for a hash
 * @key: The string to be hashed
 * @size: the size of the array
 *
 * Return: the index of the hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index)
}
