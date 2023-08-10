#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - creates an array of chars
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string or null otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int i;
	size_t length1 = 0, length2 = 0;

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
	while (s2[length2] != '\0')
	{
		length2++;
	}
	t = malloc(sizeof(char) * (length1 + length2) + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		t[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		t[i + length1] = s2[i];
	}
	return (t);
}
