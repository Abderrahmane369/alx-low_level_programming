#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "a", "aa");
    hash_table_set(ht, "b", "bb");
    hash_table_set(ht, "c", "cc");
    hash_table_set(ht, "d", "dd");
    printf("%s\n", ht->array[key_index((const unsigned char *)"d", ht->size)]->value);
    return (EXIT_SUCCESS);
}