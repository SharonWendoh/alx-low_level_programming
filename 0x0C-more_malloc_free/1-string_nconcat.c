#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - creates an array of chars
 *
 * @s1: string 1
 * @s2: string 2
 * @n: size of n2 to be concatenated
 *
 * Return: pointer to memory containing concatenated string or NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i;
	unsigned int length1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}

	x = malloc(sizeof(char) * (length1 + n) + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		x[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		x[i + length1] = s2[i];
	}
	x[length1 + n] = '\0';
	return (x);
}
