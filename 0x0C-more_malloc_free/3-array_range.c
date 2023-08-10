#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: min value
 * @max: max value
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *t;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	t = malloc(sizeof(int) * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = min;
		min++;
	}
	return (t);
}
