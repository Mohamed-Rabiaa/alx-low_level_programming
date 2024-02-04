#include "hash_tables.h"
/**
 *create_item - Creates a hash table item
 *@key: the key of the item
 *@value: the value of the item
 *
 *Return: the newly created item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *hn = malloc(sizeof(hash_node_t));

	if (!hn)
		return (NULL);

	hn->key = malloc(strlen(key) + 1);
	if (!key)
		return (NULL);
	hn->key = strdup(key);

	hn->value = malloc(strlen(value) + 1);
	if (!value)
		return (NULL);
	hn->value = strdup(hn->value);

	hn->next = NULL;

	return (hn);
}
/**
 *hash_table_set - Adds an element to the hash table
 *@ht: the hash table
*@key: the key of the element
 *@value: the value of the element
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn = create_item(key, value);

	long int index = key_index(key, ht->size);

	hash_node_t *current_hn = ht->array[index];

	if (current_hn == NULL)
	{
		ht->array[index] = hn;
		return (1);
	}
	else
	{
		if (strcmp(current_hn->key, hn->key) == 0)
		{
			current_hn->value = strdup(value);
			return (1);
		}
		else
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}
	return (0);
}
