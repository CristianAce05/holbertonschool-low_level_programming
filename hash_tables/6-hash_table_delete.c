#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all memory.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	/* Free each linked list in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/* Free the array and hash table struct */
	free(ht->array);
	free(ht);
}
