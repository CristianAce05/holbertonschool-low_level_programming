#include "hash_tables.h"

/**
 * hash_table_set - Add or update a key/value in a hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n; char *v; unsigned long int i;
	if (!ht || !key || !value || !*key)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (n = ht->array[i]; n; n = n->next)
		if (!strcmp(n->key, key))
		{
			v = strdup(value);
			if (!v)
				return (0);
			free(n->value);
			n->value = v;
			return (1);
		}
	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);
	n->key = strdup(key);
	n->value = strdup(value);
	if (!n->key || !n->value)
		return (free(n->key), free(n->value), free(n), 0);
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}



