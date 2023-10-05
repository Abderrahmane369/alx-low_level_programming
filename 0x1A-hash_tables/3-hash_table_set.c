#include "hash_tables.h"

/**
 * hash_table_set - ttttt
 * @ht: ht
 * @key: k
 * @value: bbbb
 * Return: i
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_Node;
	unsigned long int _ = key_index((const unsigned char *)key, ht->size);

	if (!key || !ht)
		return (0);

	new_Node = malloc(sizeof(hash_node_t));

	if (!new_Node)
		return (0);

	new_Node->key = (char *)key;
	new_Node->value = strdup(value);

	new_Node->next = ht->array[_];

	if (ht->array[_])
		ht->array[_]->next = NULL;

	ht->array[_] = new_Node;

	return (1);
}
