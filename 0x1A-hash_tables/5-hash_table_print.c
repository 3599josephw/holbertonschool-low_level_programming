#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int print = 0;

	if (ht)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			for (; current != NULL; current = current->next)
			{
				if (print == 1)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				print = 1;
			}
		}
		printf("}\n");
	}
}
