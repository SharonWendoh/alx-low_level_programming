#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: array that contains the arguments.
 *
 * Return: pointer to array or null otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(c) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
