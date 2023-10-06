#include "hash_tables.h"

/**
 * hash_table_get - ttttt
 * @ht: ht
 * @key: k
 * Return: i
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int _ = 0;
	hash_node_t *c;

	if (!ht)
		return (NULL);

	while (ht->size > _)
	{
		c = ht->array[_];

		while (c)
		{
			if (strcmp(c->key, key) == 0)
				return (c->value);

			c = c->next;
		}

		_++;
	}

	return (NULL);
}
