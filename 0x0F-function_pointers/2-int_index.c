#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *  @array: the array
 *  @size: size  of array
 *  @cmp: pointer to the function to be used
 *
 *  Return: returns the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
