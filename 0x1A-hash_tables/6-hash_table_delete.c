#include "hash_tables.h"

/**
 * free_list - frees a hash_node_t linked list
 * @head: head of the list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (head)
	{
		free(head->key);
		if (head->value)
			free(head->value);
		free(head);
		temp = temp->next;
		head = temp;
	}
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **current;

	current = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (current[i])
		{
			free_list(current[i]);
		}
	}
	free(current);
	free(ht);
}
