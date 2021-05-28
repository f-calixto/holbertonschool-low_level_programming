#include "hash_tables.h"

/**
 * hash_table_set - creates hash table with size @size
 *
 * @ht: The size of the array
 * @key: Each cell of this array is a pointer to the first node of a linke
 * @value: because we want our HashTable to use a Chaining collision handling
 * Return: 1 n success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, idx;
	hash_node_t *new;

	if (!ht || !key || (strlen(key) == 0) || !value)
		return (0);
	size = ht->size;
	idx = hash_djb2((const unsigned char *)key) % size;
	new = malloc(sizeof(hash_node_t));
	new->key = (char *)key;
	new->value = (char *)value;
	while (ht->array[idx] != NULL)
	{
		if (ht->array[idx]->key == key)
		{
			ht->array[idx]->value = (char *)value;
			return (1);
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	if (ht->array[idx] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}