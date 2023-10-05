#include "hash_tables.h"

/**
 * key_index - zaeialeaze
 * @key: azeae
 * @size: zeaeaze
 * Return: reee
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}