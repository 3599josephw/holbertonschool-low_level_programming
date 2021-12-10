#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;

	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return ("(null)");

	if (ht->array[index]->next == NULL)
		value = ht->array[index]->value;
	else
	{
		while (ht->array[index]->next != NULL)
			ht->array[index] = ht->array[index]->next;

		value = ht->array[index]->value;
	}

	return (value);
}
