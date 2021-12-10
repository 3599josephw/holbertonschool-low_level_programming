#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair is  stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int s;
	unsigned long int index;

	s = hash_djb2(key);
	index = s % size;

	return (index);
}
