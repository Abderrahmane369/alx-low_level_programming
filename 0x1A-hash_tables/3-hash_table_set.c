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
	unsigned long int i;

	if (!key)
		return (0);
	if (!ht || strcmp(key, "") == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	new_Node = malloc(sizeof(hash_node_t));
	if (!new_Node)
		return (0);
	new_Node->key = strdup(key);
	new_Node->value = value ? strdup(value) : NULL;
	new_Node->next = NULL;
	if (ht->array[i])
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			if (new_Node->value)
				free(new_Node->value);
			free(new_Node);
			ht->array[i]->value = value ? strdup(value) : NULL;
			return (1);
		}
		else
		{
			new_Node->next = ht->array[i];
		}
	}
	(ht->array)[i] = new_Node;
	return (1);
}
