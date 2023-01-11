#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the array
 * Return: new hash table or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_pointer;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_table_pointer = malloc(sizeof(hash_table_t));
	if (hash_table_pointer == NULL)
		return (NULL);

	hash_table_pointer->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table_pointer->array == NULL)
	{
		free(hash_table_pointer);
		return (NULL);
	}
	hash_table_pointer->size = size;

	for (i = 0; i < size; i++)
		hash_table_pointer->array[i] = NULL;

	return (hash_table_pointer);
}
