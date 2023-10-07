#include "hash_tables.h"

/**
 * hash_table_delete - ttttt
 * @ht: ht
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int _ = 0;
	hash_node_t *c, *n;

	if (!ht || !ht->array)
		return;

	while (ht->size > _)
	{
		c = ht->array[_];
		n = c;

		while (c)
		{
			n = n->next;
			free(c->key);
			free(c->value);
			free(c);
			c = n;
		}

		_++;
	}

	free(ht->array);
	free(ht);
}
