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
	hash_node_t *new, *current, *before;

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	new->key = malloc(sizeof(hash_node_t));
	new->value = malloc(sizeof(hash_node_t));

	if (new->key == NULL || new->value == NULL)
		return (0);

	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	current = ht->array[index];

	if (current == NULL)
		ht->array[index] = new;
	else
	{
		while (current->next != NULL)
			current = current->next;

		before = current;
		current = current->next;
		current = new;
		before->next = new;
	}

	return (1);
}
