#include "main.h"
#include <stdio.h>
/**
 * main - prints its name followed by a new line
 *
 * @argc: no of arguements
 * @argv: array of the arguements
 *
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
