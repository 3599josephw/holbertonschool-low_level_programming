#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j, flag;

	printf("{");
	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				j = i + 1;
				while (j <= ht->size)
				{
					flag = 0;
					if (ht->array[j] == NULL)
						j++;
					else
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					printf(", ");
			}
			i++;
		}
	}
		printf("}\n");
}
