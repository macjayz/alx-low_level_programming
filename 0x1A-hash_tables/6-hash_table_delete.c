#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to a hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
return;

for (size_t i = 0; i < ht->size; i++)
{
hash_node_t *node = ht->array[i];

while (node != NULL)
{
hash_node_t *next = node->next;
free(node->key);
free(node->value);
free(node);
node = next;
}
ht->array[i] = NULL;
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}

