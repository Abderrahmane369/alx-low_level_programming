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

	if (!ht || strcmp(key, "") == 0)
		return (0);

	new_Node = malloc(sizeof(hash_node_t));

	if (!new_Node)
		return (0);

	new_Node->key = key ? strdup(key) : NULL;

	new_Node->value = value ? strdup(value) : NULL;

	if (ht->array[_])
	{
		if (strcmp(key, ht->array[_]->key) == 0)
		{
			ht->array[_]->value = strdup(value);

			return (1);
		}

		else
		{
			new_Node->next = ht->array[_];
			ht->array[_] = new_Node;
		}
	}

	(ht->array)[_] = new_Node;
	return (1);
}
