#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table
 *@size: the size of the hash table
 *
 *Return: the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));
	if (!(ht->array))
		return (NULL);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
