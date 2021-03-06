#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: size of the array of the hash table
 * @value: value associated with key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;

	if (key == NULL || (strcmp("", key) == 0) || ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	current = ht->array[index];

	if (current == NULL)
		ht->array[index] = new;
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			current = current->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
