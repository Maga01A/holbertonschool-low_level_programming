#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be empty)
 * @value: value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;
	char *dup_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in list */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}

	/* Create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert at the beginning of the list (handle collisions) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

