#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array of chars
 *
 * @str: string to be copied
 *
 * Return: pointer to string or null otherwise.
 */
char *_strdup(char *str)
{
	char *t;
	unsigned int i;
	size_t length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	t = malloc(sizeof(char) * length + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
