#include "main.h"
/**
 * binary_to_unit - converts binary number to unsigned int
 *
 * @b: pointer tho string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int power = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--; len >= 0 ; len--)
	{
		if (b[len] == '1')
			result += power;
		power *= 2;
	}
	return (result);
}
