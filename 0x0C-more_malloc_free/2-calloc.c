#include "main.h"
#include <stdlib.h>
/**
 * _calloc - creates an array of chars
 *
 * @nmemb: array elemnts
 * @size: size of elements
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(sizeof(size) * nmemb);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = 0;
	}
	return (t);
}
