#include "hash_tables.h"

/**
 * create_node - Creates a new hash node with key and value
 * @key: Key string
 * @value: Value string
 *
 * Return: Pointer to new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Adds or updates a key/value in a hash table
 * @ht: Hash table
 * @key: Key string
 * @value: Value string
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new_node;
	unsigned long int index;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			char *val_copy = strdup(value);
			if (!val_copy)
				return (0);
			free(node->value);
			node->value = val_copy;
			return (1);
		}
		node = node->next;
	}

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
