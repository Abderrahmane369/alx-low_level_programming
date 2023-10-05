#include "hash_tables.h"

/**
 * hash_table_create - aaaaa
 * @size: ezis
 * Return: None
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned int _;

	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
		return (NULL);

	for (_ = 0; size < _; _++)
		ht->array[_] = NULL;

	ht->size = size;

	return (ht);
}
