#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *curr = ht->array[index];
while (curr != NULL)
{
if (strcmp(curr->key, key) == 0)
{
free(curr->value);
curr->value = strdup(value);
return (1);
}
curr = curr->next;
}

hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
