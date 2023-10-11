#include "hash_tables.h"

/**
 * hash_table_delete - This delete a hash table
 * @ht: The hash table
 * Return: There is nothing to  return
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *actual, *aux;
	unsigned int a = 0;

	if (ht == NULL)
		return;
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			actual = ht->array[a];
			while (actual != NULL)
			{
				aux = actual;
				free(actual->key);
				if (actual->value != NULL)
					free(actual->value);
				actual = actual->next;
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
