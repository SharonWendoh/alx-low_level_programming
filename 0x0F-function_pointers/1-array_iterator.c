#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: the array
 * @size: size of the array
 * @action: function to be executed
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		long unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
