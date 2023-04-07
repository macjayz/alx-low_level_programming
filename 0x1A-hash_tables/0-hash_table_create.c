#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table_created;

    hash_table_created = calloc(1, sizeof(hash_table_t));
    if (!hash_table_created)
        return NULL;

    hash_table_created->array = calloc(size, sizeof(hash_node_t *));
    if (!hash_table_created->array)
    {
        free(hash_table_created);
        return NULL;
    }

    hash_table_created->size = size;

    return hash_table_created;
}

