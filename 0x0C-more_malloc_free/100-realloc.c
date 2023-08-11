#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates block of memory
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: size of previously allocated memory
 * @new_size: size of newly allocated memory
 *
 * return: Pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
