#include "hash_tables.h"

/**
 * key_index - This gives you the index of a key
 * @key: The where k6ey is the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}
