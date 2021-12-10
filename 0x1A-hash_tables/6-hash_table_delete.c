#include "hash_tables.h"
/**
 * hash_table_delete - frees a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *tmp;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				current = ht->array[i]->next;
				while (current != NULL)
				{
					tmp = current;
					current = current->next;
					free(tmp->key);
					free(tmp->value);
					free(tmp);
				}
			}
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
