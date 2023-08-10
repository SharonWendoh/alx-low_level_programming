#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - creates an array of chars
 *
 * @b: size
 *
 * Return: pointer to memory or 98 otherwise.
 */
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit (98);
	}
	return (x);
}
