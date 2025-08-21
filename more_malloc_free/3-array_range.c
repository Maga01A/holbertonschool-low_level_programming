#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: start of the range
 * @max: end of the range
 *
 * Return: pointer to the new array, NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

