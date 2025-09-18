#include "hash_tables.h"

/* Helper: create new node */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/* Helper: update existing node */
int update_node(hash_node_t *node, const char *value)
{
	char *dup_value = strdup(value);
	if (!dup_value)
		return (0);
	free(node->value);
	node->value = dup_value;
	return (1);
}

/* Main function */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new_node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return update_node(tmp, value);
		tmp = tmp->next;
	}

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

