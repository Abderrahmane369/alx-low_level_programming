#include "hash_tables.h"

/**
 * hash_table_print - ttttt
 * @ht: ht
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int _ = 0;
	hash_node_t *c;
	int v = 0;

	if (!ht)
		return;

	printf("%s", "{");
	while (ht->size > _)
	{
		c = ht->array[_];

		while (c)
		{
			if (c)
			{
				if (v)
					printf("%s", ", ");
				v = 1;
			}

			printf("'%s': '%s'", ht->array[_]->key, ht->array[_]->value);

			c = c->next;
		}

		_++;
	}
	printf("%s", "}\n");
}
