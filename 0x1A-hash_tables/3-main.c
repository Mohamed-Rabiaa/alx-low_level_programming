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
    hash_node_t hn;
    long int index;
    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas ","mentioner");

    index = key_index("betty", 1024);
    hn = ht->array[index];
    printf("%s\n", hn->value);
    return (EXIT_SUCCESS);
}
