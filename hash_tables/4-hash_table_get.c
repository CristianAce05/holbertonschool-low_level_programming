#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Compute index in the hash table */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse linked list at that index */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* Key not found */
	return (NULL);
}
