#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with the element or NULL
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

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			value = ht->array[index]->value;
			return (value);
		}
		ht->array[index] = ht->array[index]->next;

	}
	return (NULL);
}
