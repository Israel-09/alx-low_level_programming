#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (j == 0)
					printf("\'%s\': ", temp->key);
				else
					printf(", \'%s\': ", temp->key);
				printf("\'%s\'", temp->value);
				temp = temp->next;
				j  = 1;
			}
		}
	}
	printf("}\n");
}
