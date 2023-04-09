#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht = NULL;

	ht = hash_table_create(30);
	hash_table_set(ht, "stylist", "shade");
	hash_table_set(ht, "subgenera", "shovel");

	printf("%s: %s\n", "subnegera", hash_table_get(ht, "subgenera"));
	printf("%s: %s\n", "stylist", hash_table_get(ht, "stylist"));
	printf("%s: %s\n", "stylister", hash_table_get(ht, "stylister"));

	return (0);
}
